# 1 "C:\\Users\\damon\\AppData\\Local\\Temp\\tmpjni9y9k0"
#include <Arduino.h>
# 1 "D:/Source/MicroController/DD02_Synth/src/DD02_Synth.ino"
#include <Arduino.h>
#include <EEPROM.h>
#include <MIDIUSB.h>
#include <MozziGuts.h>
#include <Oscil.h>
#include <ADSR.h>
#include <mozzi_midi.h>
#include <AKWFTables.h>





#ifdef CONTROL_RATE
#undef CONTROL_RATE
#define CONTROL_RATE 256
#endif
# 35 "D:/Source/MicroController/DD02_Synth/src/DD02_Synth.ino"
#define NUM_OSCILLATORS 2
#define NUM_ENVELOPES 3
#define APP_NAME F("DD-2")
#define ROM_MAJOR_NUM 0
#define ROM_MINOR_NUM 1
#define ROM_REVISION_NUM 0


#define ROM_MAJOR_ADDR 0UL

#define ROM_MINOR_ADDR 1UL

#define ROM_REVISION_ADDR 2UL

#define ROM_RESERVED_0 3UL
#define ROM_RESERVED_1 4UL
#define ROM_RESERVED_2 5UL
#define ROM_RESERVED_3 6UL
#define ROM_RESERVED_4 7UL

#define ROM_NUM_PRESET_ADDR 8UL

#define ROM_FIRST_PRESET_ADDR 9UL
# 67 "D:/Source/MicroController/DD02_Synth/src/DD02_Synth.ino"
static const uint16_t EEPROM_SIZE = EEPROM.length();





uint8_t midiReceiveChannel = 0;
uint8_t midiTransmitChannel = 1;
uint32_t MidiClock = 0;
bool clockRunning = false;

uint32_t MIN_ATTACK = 0UL;
uint32_t MAX_ATTACK = 127UL;
uint32_t MIN_DECAY = 0UL;
uint32_t MAX_DECAY = 127UL;
uint32_t MIN_SUSTAIN = 1UL;
uint32_t MAX_SUSTAIN = 127UL;
uint32_t MIN_RELEASE = 1UL;
uint32_t MAX_RELEASE = 127UL;
bool keyDown[127];




struct VoiceData
{
  uint8_t index = 0;
  uint8_t version[3]{ROM_MAJOR_NUM, ROM_MINOR_NUM, ROM_REVISION_NUM};
  uint8_t scale[NUM_OSCILLATORS];
  int8_t tune[NUM_OSCILLATORS];
  float coarse[NUM_OSCILLATORS];
  float fine[NUM_OSCILLATORS];
  int8_t transpose = 0;
  uint8_t wave_shape[NUM_OSCILLATORS];
  uint8_t algorithm = 0;
  bool hasRetrigger[NUM_OSCILLATORS + 1];
  uint8_t auxDepth[NUM_OSCILLATORS];

  byte mod_depth[NUM_OSCILLATORS + 1];


  uint8_t attackScale[NUM_ENVELOPES];
  int16_t decayScale[NUM_ENVELOPES];
  int16_t sustainScale[NUM_ENVELOPES];
  int16_t releaseScale[NUM_ENVELOPES];

  unsigned int attackTime[NUM_ENVELOPES];
  unsigned int decayTime[NUM_ENVELOPES];
  unsigned long sustainTime[NUM_ENVELOPES];
  unsigned int releaseTime[NUM_ENVELOPES];
  byte attackLevel[NUM_ENVELOPES];
  byte decayLevel[NUM_ENVELOPES];
  byte sustainLevel[NUM_ENVELOPES];
  byte releaseLevel[NUM_ENVELOPES];
};

static const unsigned long presetSize = sizeof(VoiceData);


#define MAX_BANKS ((EEPROM.length() - ROM_FIRST_PRESET_ADDR) / presetSize)

const char *pitch_name(byte pitch);
int pitch_octave(byte pitch);
void noteOn(byte channel, byte pitch, byte velocity);
void noteOff(byte channel, byte pitch, byte velocity);
void controlChange(byte channel, byte control, byte value);
void pitchBend(byte channel, byte lsb, byte msb);
void handleMidi();
void PrintVoiceInfo();
void setWaveshape(uint8_t shape, uint8_t id);

void (*resetFunc)(void) = 0;





class SynthVoice
{
public:
  Oscil<NUM_CELLS, AUDIO_RATE> *Osc[NUM_OSCILLATORS];
  ADSR<CONTROL_RATE, AUDIO_RATE, unsigned long> *Envelope[NUM_ENVELOPES];

  VoiceData voiceData;
  uint8_t channel = 0;
  uint8_t pitch = 0;
  uint8_t velocity = 0;
  float freqs[NUM_OSCILLATORS];

  SynthVoice()
  {
    for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
    {
      Osc[i] = new Oscil<NUM_CELLS, AUDIO_RATE>(WAVE_DATA0);
    }
    for (uint8_t i = 0; i < NUM_ENVELOPES; i++)
    {
      Envelope[i] = new ADSR<CONTROL_RATE, AUDIO_RATE, unsigned long>();
    }
#ifdef FIRST_INIT
    FirstInit();
#else
    load(0);
#endif
  };

  ~SynthVoice()
  {
    for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
    {
      delete Osc[i];
      Osc[i] = nullptr;
    }
    for (uint8_t i = 0; i < NUM_ENVELOPES; i++)
    {
      delete Envelope[i];
      Envelope[i] = nullptr;
    }
  }

  void setFreqs(Q8n8 midi_note)
  {
    for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
    {
      switch (voiceData.scale[i])
      {
      case 0:
        freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * (voiceData.coarse[i] + voiceData.fine[i]);
        break;
      case 1:
        freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * ((voiceData.coarse[i] + voiceData.fine[i]) / 10.f);
        break;
      case 2:
        freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * ((voiceData.coarse[i] + voiceData.fine[i]) / 100.f);
        break;
      case 3:
        freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * ((voiceData.coarse[i] + voiceData.fine[i] / 1000.f));
        break;
      case 4:
        freqs[i] = mtof((float)((pitch + voiceData.transpose) + voiceData.tune[i])) * ((voiceData.coarse[i] + voiceData.fine[i] / 10000.f));
        break;
      }
      Osc[i]->setFreq(freqs[i]);
    }
  }

  void start(byte c, byte p, byte v)
  {
    pitch = p;
    channel = c;
    velocity = v;
    setFreqs(pitch);
    for (int i = 0; i < NUM_ENVELOPES; i++)
    {
      Envelope[i]->setAttackLevel((voiceData.attackLevel[i] * velocity) >> 7);
      Envelope[i]->setDecayLevel((voiceData.decayLevel[i] * velocity) >> 7);
      Envelope[i]->setSustainLevel((voiceData.sustainLevel[i] * velocity) >> 7);
      Envelope[i]->setReleaseLevel((voiceData.releaseLevel[i] * velocity) >> 7);
      if (voiceData.hasRetrigger[i] == true)
      {
        Envelope[i]->noteOn(true);
      }
      else
      {
        Envelope[i]->noteOn(false);
      }
    }
    keyDown[p] = true;
  };

  void stop(byte p)
  {
    pitch = 0;
    channel = 0;
    velocity = 0;

    if (keyDown[p])
    {
      for (uint8_t i = 0; i < NUM_ENVELOPES; i++)
      {
        Envelope[i]->noteOff();
      }
      keyDown[p] = false;
    }
  };

  void setTimes()
  {
    for (uint8_t i = 0; i < NUM_ENVELOPES; i++)
    {
      Envelope[i]->setTimes(voiceData.attackTime[i] * pow(10, voiceData.attackScale[i]), voiceData.decayTime[i] * pow(10, voiceData.decayScale[i]), voiceData.sustainTime[i] * pow(10, voiceData.sustainScale[i]), voiceData.releaseTime[i] * pow(10, voiceData.releaseScale[i]));
    }
  };

  void setLevels()
  {
    for (uint8_t i = 0; i < NUM_ENVELOPES; i++)
    {
      if (velocity)
      {
        Envelope[i]->setLevels((voiceData.attackLevel[i] * velocity) >> 7, (voiceData.decayLevel[i] * velocity) >> 7, (voiceData.sustainLevel[i] * velocity) >> 7, (voiceData.releaseLevel[i] * velocity) >> 7);
      }
      else
      {
        Envelope[i]->setLevels(voiceData.attackLevel[i], voiceData.decayLevel[i], voiceData.sustainLevel[i], voiceData.releaseLevel[i]);
      }
    }
  };

  void FirstInit()
  {
#ifdef DEBUG_SAVE
    Serial.println("FirstInit");
#endif
    uint16_t l = EEPROM.length();

    if (EEPROM.read(ROM_MAJOR_ADDR) == ROM_MAJOR_NUM)
    {
      if (EEPROM.read(ROM_MINOR_ADDR) == ROM_MINOR_NUM)
      {
        if (EEPROM.read(ROM_REVISION_ADDR) == ROM_REVISION_NUM)
        {

          load(0);
          return;
        }
      }
    }

    for (uint16_t i = 0; i < l; i++)
    {
      EEPROM.write(i, 0);
    }

    EEPROM.write(ROM_MAJOR_ADDR, ROM_MAJOR_NUM);
    EEPROM.write(ROM_MINOR_ADDR, ROM_MINOR_NUM);
    EEPROM.write(ROM_REVISION_ADDR, ROM_REVISION_NUM);
    EEPROM.write(ROM_NUM_PRESET_ADDR, MAX_BANKS);
    EEPROM.put(ROM_FIRST_PRESET_ADDR, voiceData);
  };

  bool load(uint8_t idx)
  {




    int Addr = ROM_FIRST_PRESET_ADDR + (idx * presetSize);
    EEPROM.get(Addr, voiceData);
    for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
    {
      setWaveshape(voiceData.wave_shape[i], i);
    }
    setFreqs(pitch);
    setTimes();
    setLevels();
    return true;
  };

  bool load()
  {
    return load(0);
  };

  bool save(uint8_t idx)
  {
#ifdef DEBUG_SAVE
    Serial.println("saveFcn");
#endif




    int Addr = ROM_FIRST_PRESET_ADDR + (idx * presetSize);
    voiceData.index = idx;
    voiceData.version[0] = ROM_MAJOR_NUM;
    voiceData.version[1] = ROM_MINOR_NUM;
    voiceData.version[2] = ROM_REVISION_NUM;
    EEPROM.put(Addr, voiceData);
#ifdef DEBUG_SAVE
    Serial.print("svd:");
    Serial.println(idx);
    Serial.flush();
#endif
    return true;
  };

  bool save()
  {
    return save(voiceData.index);
  }
};

SynthVoice Voice;
const int8_t *waveTable[NUM_WAVETABLES];
void loop();
void setup();
void updateControl();
int updateAudio();
void programChange(byte channel, byte program, byte value);
void sysex(byte channel, byte lsb, byte msb);
#line 363 "D:/Source/MicroController/DD02_Synth/src/DD02_Synth.ino"
void loop()
{
  audioHook();
}

void setup()
{
  Serial.begin(115200);





  for (uint8_t i = 0; i < 127; i++)
  {
    keyDown[i] = 0;
  }
#ifdef FIRST_INIT
  Voice.FirstInit();
#endif
  Voice.load(0);
  waveTable[0] = WAVE_DATA0;
  waveTable[1] = WAVE_DATA1;
  waveTable[2] = WAVE_DATA2;
  waveTable[3] = WAVE_DATA3;
  waveTable[4] = WAVE_DATA4;
  waveTable[5] = WAVE_DATA5;
  waveTable[6] = WAVE_DATA6;
  waveTable[7] = WAVE_DATA7;
  waveTable[8] = WAVE_DATA8;
  waveTable[9] = WAVE_DATA9;
  waveTable[10] = WAVE_DATA10;
  waveTable[11] = WAVE_DATA11;
  waveTable[12] = WAVE_DATA12;
  waveTable[13] = WAVE_DATA13;
  waveTable[14] = WAVE_DATA14;
  waveTable[15] = WAVE_DATA15;
  waveTable[16] = WAVE_DATA16;
  waveTable[17] = WAVE_DATA17;
  waveTable[18] = WAVE_DATA18;
  waveTable[19] = WAVE_DATA19;
  waveTable[20] = WAVE_DATA20;
  waveTable[21] = WAVE_DATA21;

  startMozzi(CONTROL_RATE);
}


void updateControl()
{
  handleMidi();
  for (uint8_t i = 0; i < NUM_ENVELOPES; i++)
  {
    Voice.Envelope[i]->update();
  }
}



int updateAudio()
{
  Q15n16 Signal[NUM_ENVELOPES];
  int final = 0;
  unsigned char env[NUM_ENVELOPES];
  for (uint8_t i = 0; i < NUM_ENVELOPES; i++)
  {
    env[i] = Voice.Envelope[i]->next();
    Signal[i] = 0;
  }


  switch (Voice.voiceData.algorithm)
  {
  case 0:
    Signal[1] = Voice.Osc[1]->next() * ((env[1] * Voice.voiceData.mod_depth[1]) >> 7);
    Signal[0] = Voice.Osc[0]->next() * ((env[0] * Voice.voiceData.mod_depth[0]) >> 7);
    Signal[2] = (Signal[1] + Signal[0]);
    final = (Signal[2] * env[2]) >> 7;
    break;

  case 1:
    Signal[1] = Voice.Osc[1]->next() * ((env[1] * Voice.voiceData.mod_depth[1]) >> 7);
    Signal[0] = Voice.Osc[0]->phMod(Signal[1]) * ((env[0] * Voice.voiceData.mod_depth[0]) >> 7);
    Signal[2] = ((Signal[1] * Voice.voiceData.mod_depth[2]) >> 7) + Signal[0];
    final = (Signal[2] * env[2]) >> 7;
    break;

  case 2:
    Signal[1] = Voice.Osc[1]->next() * ((env[1] * Voice.voiceData.mod_depth[1]) >> 7);
    Signal[0] = Voice.Osc[0]->phMod(Signal[1]) * ((env[0] * Voice.voiceData.mod_depth[0]) >> 7);
    Signal[2] = (Signal[1] * ((Q15n16)Voice.voiceData.mod_depth[2] >> 4)) + Signal[0];
    final = (Signal[2] * env[2]) >> 7;
    break;

  default:
    Signal[1] = Voice.Osc[1]->next() * ((env[1] * Voice.voiceData.mod_depth[1]) >> 7);
    Signal[0] = Voice.Osc[0]->next() * ((env[0] * Voice.voiceData.mod_depth[0]) >> 7);
    Signal[2] = (Signal[1] + Signal[0]);
    final = (Signal[2] * env[2]) >> 7;
    break;
  }

  return MonoOutput::from16Bit(final);
}


void setWaveshape(uint8_t shape, uint8_t id)
{
  if (id < NUM_OSCILLATORS)
  {
    if (shape < NUM_WAVETABLES)
    {
      Voice.voiceData.wave_shape[id] = shape;
      Voice.Osc[id]->setTable(waveTable[shape]);
    }
  }
}
# 508 "D:/Source/MicroController/DD02_Synth/src/DD02_Synth.ino"
void noteOn(byte channel, byte pitch, byte velocity)
{
#ifdef DEBUG_PRINT
  Serial.print("Note On");
#endif
#ifdef SEND_MIDI
  midiEventPacket_t noteOn = {0x09, 0x90 | midiTransmitChannel, pitch, velocity};
  MidiUSB.sendMIDI(noteOn);
  MidiUSB.flush();
#endif
  if (velocity == 0)
  {
    noteOff(channel, pitch, 64);
    return;
  }
  Voice.start(channel, pitch, velocity);
  PrintVoiceInfo();
}

void noteOff(byte channel, byte pitch, byte velocity)
{
#ifdef SEND_MIDI
  midiEventPacket_t noteOff = {0x08, 0x80 | midiTransmitChannel, pitch, velocity};
  MidiUSB.sendMIDI(noteOff);
  MidiUSB.flush();
#endif
  if (Voice.channel == channel && Voice.pitch == pitch)
  {
    Voice.stop(pitch);
    return;
  }
}

void programChange(byte channel, byte program, byte value)
{
  if (midiReceiveChannel != channel)
  {
    return;
  }

#ifdef SEND_MIDI
  midiEventPacket_t event = {0x0B, 0xB0 | midiTransmitChannel, program, value};
  MidiUSB.sendMIDI(event);
  MidiUSB.flush();
#endif
#ifdef PRINT_PC
  Serial.print("PC:");
  Serial.print(program);
  Serial.print(", ch:");
  Serial.print(channel);
  Serial.print(", val:");
  Serial.println(value);
#endif
  Voice.load(program);
}

void controlChange(byte channel, byte control, byte value)
{

#ifdef SEND_MIDI
  midiEventPacket_t event = {0x0B, 0xB0 | midiTransmitChannel, control, value};
  MidiUSB.sendMIDI(event);
  MidiUSB.flush();
#endif
#ifdef PRINT_CC
  Serial.print("CC:");
  Serial.print(control);
  Serial.print(", ch:");
  Serial.print(channel);
  Serial.print(", val:");
  Serial.println(value);
#endif
  if (midiReceiveChannel != channel)
  {
    return;
  }

  switch (control)
  {
  case 0:
    Voice.load(value);
    break;
  case 1:

    break;
  case 2:
    break;
  case 4:
    break;
  case 5:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 11:
    break;
  case 12:
    Voice.save(value);
    break;
  case 13:
    setWaveshape(value, 0);
    break;
  case 14:
    setWaveshape(value, 1);
    break;
  case 15:
    setWaveshape(value, 2);
    break;




  case 16:
    Voice.voiceData.attackScale[0] = value;
    Voice.Envelope[0]->setAttackTime(Voice.voiceData.attackTime[0] * pow(10, value));
    break;
  case 17:
    Voice.voiceData.attackTime[0] = value;
    Voice.Envelope[0]->setAttackTime(Voice.voiceData.attackTime[0] * pow(10, Voice.voiceData.attackScale[0]));
    break;
  case 18:
    Voice.voiceData.attackLevel[0] = value;
    Voice.Envelope[0]->setAttackLevel(value);
    break;
  case 19:
    Voice.voiceData.decayScale[0] = value;
    Voice.Envelope[0]->setDecayTime(Voice.voiceData.decayTime[0] * pow(10, value));
    break;
  case 20:
    Voice.voiceData.decayTime[0] = value;
    Voice.Envelope[0]->setDecayTime(Voice.voiceData.decayTime[0] * pow(10, Voice.voiceData.decayScale[0]));
    break;
  case 21:
    Voice.voiceData.decayLevel[0] = value;
    Voice.Envelope[0]->setDecayLevel(value);
    break;
  case 22:
    Voice.voiceData.sustainScale[0] = value;
    Voice.Envelope[0]->setSustainTime(Voice.voiceData.sustainTime[0] * pow(10, value));
    break;
  case 23:
    Voice.voiceData.sustainTime[0] = value;
    Voice.Envelope[0]->setSustainTime(Voice.voiceData.sustainTime[0] * pow(10, Voice.voiceData.sustainScale[0]));
    break;
  case 24:
    Voice.voiceData.sustainLevel[0] = value;
    Voice.Envelope[0]->setSustainLevel(value);
    break;
  case 25:
    Voice.voiceData.releaseScale[0] = value;
    Voice.Envelope[0]->setReleaseTime(Voice.voiceData.releaseTime[0] * pow(10, value));
    break;
  case 26:
    Voice.voiceData.releaseTime[0] = value;
    Voice.Envelope[0]->setReleaseTime(Voice.voiceData.releaseTime[0] * pow(10, Voice.voiceData.releaseScale[0]));
    break;
  case 27:
    Voice.voiceData.releaseLevel[0] = value;
    Voice.Envelope[0]->setReleaseLevel(value);
    break;
  case 28:
    Voice.voiceData.attackScale[1] = value;
    Voice.Envelope[1]->setAttackTime(Voice.voiceData.attackTime[1] * pow(10, value));
    break;
  case 29:
    Voice.voiceData.attackTime[1] = value;
    Voice.Envelope[1]->setAttackTime(Voice.voiceData.attackTime[1] * pow(10, Voice.voiceData.attackScale[1]));
    break;
  case 30:
    Voice.voiceData.attackLevel[1] = value;
    Voice.Envelope[1]->setAttackLevel(value);
    break;
  case 31:
    Voice.voiceData.decayScale[1] = value;
    Voice.Envelope[1]->setDecayTime(Voice.voiceData.decayTime[1] * pow(10, value));
    break;
  case 32:
    Voice.voiceData.decayTime[1] = value;
    Voice.Envelope[1]->setDecayTime(Voice.voiceData.decayTime[1] * pow(10, Voice.voiceData.decayScale[1]));
    break;
  case 33:
    Voice.voiceData.decayLevel[1] = value;
    Voice.Envelope[1]->setDecayLevel(value);
    break;
  case 34:
    Voice.voiceData.sustainScale[1] = value;
    Voice.Envelope[1]->setSustainTime(Voice.voiceData.sustainTime[1] * pow(10, value));
    break;
  case 35:
    Voice.voiceData.sustainTime[1] = value;
    Voice.Envelope[1]->setSustainTime(Voice.voiceData.sustainTime[1] * pow(10, Voice.voiceData.sustainScale[1]));
    break;
  case 36:
    Voice.voiceData.sustainLevel[1] = value;
    Voice.Envelope[1]->setSustainLevel(value);
    break;
  case 37:
    Voice.voiceData.releaseScale[1] = value;
    Voice.Envelope[1]->setReleaseTime(Voice.voiceData.releaseTime[1] * pow(10, value));
    break;
  case 38:
    Voice.voiceData.releaseTime[1] = value;
    Voice.Envelope[1]->setReleaseTime(Voice.voiceData.releaseTime[1] * pow(10, Voice.voiceData.releaseScale[2]));
    break;
  case 39:
    Voice.voiceData.releaseLevel[1] = value;
    Voice.Envelope[1]->setReleaseLevel(value);
    break;
  case 40:
    Voice.voiceData.attackScale[2] = value;
    Voice.Envelope[2]->setAttackTime(Voice.voiceData.attackTime[2] * pow(10, value));
    break;
  case 41:
    Voice.voiceData.attackTime[2] = value;
    Voice.Envelope[2]->setAttackTime(Voice.voiceData.attackTime[2] * pow(10, Voice.voiceData.attackScale[2]));
    break;
  case 42:
    Voice.voiceData.attackLevel[2] = value;
    Voice.Envelope[2]->setAttackLevel(value);
    break;
  case 43:
    Voice.voiceData.decayScale[2] = value;
    Voice.Envelope[2]->setDecayTime(Voice.voiceData.decayTime[2] * pow(10, value));
    break;
  case 44:
    Voice.voiceData.decayTime[2] = value;
    Voice.Envelope[2]->setDecayTime(Voice.voiceData.decayTime[2] * pow(10, Voice.voiceData.decayScale[2]));
    break;
  case 45:
    Voice.voiceData.decayLevel[2] = value;
    Voice.Envelope[2]->setDecayLevel(value);
    break;
  case 46:
    Voice.voiceData.sustainScale[2] = value;
    Voice.Envelope[2]->setSustainTime(Voice.voiceData.sustainTime[2] * pow(10, value));
    break;
  case 47:
    Voice.voiceData.sustainTime[2] = value;
    Voice.Envelope[2]->setSustainTime(Voice.voiceData.sustainTime[2] * pow(10, Voice.voiceData.sustainScale[2]));
    break;
  case 48:
    Voice.voiceData.sustainLevel[2] = value;
    Voice.Envelope[2]->setSustainLevel(value);
    break;
  case 49:
    Voice.voiceData.releaseScale[2] = value;
    Voice.Envelope[2]->setReleaseTime(Voice.voiceData.releaseTime[2] * pow(10, value));
    break;
  case 50:
    Voice.voiceData.releaseTime[2] = value;
    Voice.Envelope[2]->setReleaseTime(Voice.voiceData.releaseTime[2] * pow(10, Voice.voiceData.releaseScale[2]));
    break;
  case 51:
    Voice.voiceData.releaseLevel[2] = value;
    Voice.Envelope[2]->setReleaseLevel(value);
    break;
  case 52:
    Voice.voiceData.mod_depth[0] = value;
    break;
  case 53:
    Voice.voiceData.mod_depth[1] = value;
    break;
  case 54:
    Voice.voiceData.mod_depth[2] = value;
    break;
  case 55:
    Voice.voiceData.tune[0] = (int8_t)map(value, 0, 127, -7, 7);
    Voice.setFreqs(Voice.pitch);
    break;
  case 56:
    Voice.voiceData.tune[1] = (int8_t)map(value, 0, 127, -7, 7);
    Voice.setFreqs(Voice.pitch);
    break;
  case 57:


    break;
  case 58:
    Voice.voiceData.coarse[0] = map(value, 0, 127, 0, 32);
    if (Voice.voiceData.coarse[0] == 0)
    {
      Voice.voiceData.coarse[0] = .5;
    }
    Voice.setFreqs(Voice.pitch);
    break;
  case 59:
    Voice.voiceData.coarse[1] = map(value, 0, 127, 0, 32);
    if (Voice.voiceData.coarse[1] == 0)
    {
      Voice.voiceData.coarse[1] = .5;
    }
    Voice.setFreqs(Voice.pitch);
    break;
  case 60:






    break;
  case 61:
    Voice.voiceData.fine[0] = ((float)map(value, 0, 127, 0, 99) / 100.f);
    Voice.setFreqs(Voice.pitch);
    break;
  case 62:
    Voice.voiceData.fine[1] = ((float)map(value, 0, 127, 0, 99) / 100.f);
    Voice.setFreqs(Voice.pitch);
    break;
  case 63:


    break;
  case 64:
    Voice.voiceData.scale[0] = value;
    Voice.setFreqs(Voice.pitch);
    break;
  case 65:
    Voice.voiceData.scale[1] = value;
    Voice.setFreqs(Voice.pitch);
    break;
  case 66:


    break;
  case 67:
    Voice.voiceData.algorithm = value;
    break;
  case 68:
#ifdef USE_SYSEX
    Serial.print("ROM[");
    Serial.print(EEPROM_SIZE);
    Serial.print("]\tBks:[");
    Serial.print(MAX_BANKS, DEC);
    Serial.println("]");
    for (uint8_t preset = 0; preset < MAX_BANKS; preset++)
    {
      long addr = ROM_FIRST_PRESET_ADDR + (preset * presetSize);
      Serial.print("Add[");
      Serial.print(addr);
      Serial.print("]:");
      for (unsigned long x = 0; x < presetSize; x++)
      {
        Serial.print(EEPROM.read(addr + x), HEX);
        Serial.print(",");
      }
      Serial.println();
    }
    Serial.flush();
#endif
    break;
  case 69:
    PrintVoiceInfo();
    break;
  case 70:
    Voice.start(Voice.channel, Voice.pitch, Voice.velocity);
    break;
  case 71:
    Voice.voiceData.hasRetrigger[0] = map(value, 0, 1, false, true);
    break;
  case 72:
    Voice.voiceData.hasRetrigger[1] = map(value, 0, 1, false, true);
    break;
  case 73:

    break;
  case 74:
    Voice.voiceData.auxDepth[0] = value;
    break;
  case 75:
    Voice.voiceData.auxDepth[1] = value;
    break;
  case 76:

    break;
  case 77:
    Voice.voiceData.transpose = map(value, 0, 127, -24, 24);
    break;
    case 78:
#ifdef DEBUG_PRINT
    Serial.print("oldRx:");
    Serial.print(midiReceiveChannel);
    Serial.print(" newRx:");
#endif
    if (value > 15)
    {
      midiReceiveChannel = 0;
      break;
    }
    midiReceiveChannel = value;
#ifdef DEBUG_PRINT
    Serial.println(midiReceiveChannel);
#endif
    break;
  case 119:
    resetFunc();
    break;
  case 120:
    for (uint8_t i = 0; i < NUM_ENVELOPES; i++)
    {
      Voice.Envelope[i]->setReleaseTime(0);
      Voice.Envelope[i]->noteOff();
    }
    Voice.setTimes();
    break;

  default:
    break;
  }

#ifdef PRINT_CC

  {
    Serial.flush();
  }
#endif
}


void pitchBend(byte channel, byte lsb, byte msb)
{
  float value = (msb << 8) + lsb;
  float freqs[NUM_OSCILLATORS];





#ifdef DEBUG_PRINT
  Serial.print("PitchBend[");
  Serial.print(channel);
  Serial.print("] msb:");
  Serial.print(msb);
  Serial.print(" lsb:");
  Serial.print(lsb);
  Serial.print(", value:");
  Serial.println(value);
#endif
  if (midiReceiveChannel != channel)
  {
    return;
  }

  if (value == 16384)
  {
    for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
    {
      freqs[i] = Voice.freqs[i];
    }
  }
  else if (value < 16384)
  {
    for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
    {
      freqs[i] = Voice.freqs[i] / ((float)map(value, 16383, 0, 10000, 20000) / 10000.f);
    }
  }
  else
  {
    for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
    {
      freqs[i] = Voice.freqs[i] * ((float)map(value, 16385, 32164, 10000, 20000) / 10000.f);
    }
  }
  for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
  {
    Voice.Osc[i]->setFreq(freqs[i]);
  }

#ifdef DEBUG_PRINT
  Serial.print("old");
  Serial.print(Voice.carrier_freq);
  Serial.print("hz\tnew:");
  Serial.print(new_freq[0]);
  Serial.println("hz");
  Serial.flush();
#endif
}

void sysex(byte channel, byte lsb, byte msb)
{
#ifdef USE_SYSEX

  Serial.print("Sysx:");
  Serial.print("chan:");
  Serial.print(channel, DEC);
  Serial.print(" msb:");
  Serial.print(msb, HEX);
  Serial.print(" lsb:");
  Serial.println(lsb, HEX);
#endif
  if (midiReceiveChannel != channel)
  {
    return;
  }

};

void handleMidi()
{
  midiEventPacket_t rx = MidiUSB.read();
  switch (rx.header)
  {
  case 0:
    break;

  case 0x8:
    noteOff(
        rx.byte1 & 0xF,
        rx.byte2,
        rx.byte3
    );
    break;

  case 0x9:
    noteOn(
        rx.byte1 & 0xF,
        rx.byte2,
        rx.byte3
    );
    break;

  case 0xA:

#ifdef USE_AFTERTOUCH
    Serial.print("Channel Pressure: Channel");
    Serial.print(rx.byte1 & 0xF);
    Serial.print(", byte2:");
    Serial.print(rx.byte2, HEX);
    Serial.print(", byte3:");
    Serial.println(rx.byte3, HEX);
    Serial.flush();
#endif
    break;

  case 0xB:
    controlChange(
        rx.byte1 & 0xF,
        rx.byte2,
        rx.byte3
    );
    break;

  case 0xC:

    programChange(
        rx.byte1 & 0xF,
        rx.byte2,
        rx.byte3
    );
    break;

  case 0xD:

#ifdef USE_CHANNEL_PRESSURE
    Serial.print("Channel Pressure: Channel");
    Serial.print(rx.byte1 & 0xF);
    Serial.print(", byte2:");
    Serial.print(rx.byte2, HEX);
    Serial.print(", byte3:");
    Serial.println(rx.byte3, HEX);
    Serial.flush();
#endif
    break;

  case 0xE:
    pitchBend(
        rx.byte1 & 0xF,
        rx.byte2,
        rx.byte3
    );
    break;

  case 0xF:

    if (rx.byte1 == 0xFF)
    {
#ifdef USE_SYSEX
      Serial.println("Got an FF");
#endif
    }
    else if (rx.byte1 == 0xF8)
    {

      if (clockRunning)
      {
        MidiClock++;
      }
      return;
    }
    else if (rx.byte1 == 0xFA)
    {

      MidiClock = 0;
      clockRunning = true;
    }
    else if (rx.byte1 == 0xFB)
    {

      if (clockRunning)
      {
        clockRunning = false;
      }
      else
      {
        clockRunning = true;
      }
    }
    else if (rx.byte1 == 0xFC)
    {

      clockRunning = false;
    }
    else
    {
#ifdef USE_SYSEX
      Serial.print("SX:");
      Serial.print(rx.header, HEX);
      Serial.print(F(","));
      Serial.print(rx.byte1, HEX);
      Serial.print(F(","));
      Serial.print(rx.byte2, HEX);
      Serial.print(F(","));
      Serial.println(rx.byte3, HEX);
#endif
    }
#ifdef USE_SYSEX
    Serial.flush();
#endif
    sysex(
        rx.byte1 & 0xF,
        rx.byte2,
        rx.byte3
    );
    break;

  default:
#ifdef USE_UNHANDLED_MIDI
    Serial.print("Unhandled MIDI message: ");
    Serial.print(rx.header, HEX);
    Serial.print("-");
    Serial.print(rx.byte1, HEX);
    Serial.print("-");
    Serial.print(rx.byte2, HEX);
    Serial.print("-");
    Serial.println(rx.byte3, HEX);
    Serial.flush();
#endif
    break;
  }
}

void PrintVoiceInfo()
{
#ifdef PRINT_VOICEINFO

  {
    Serial.println(APP_NAME);
    Serial.print(Voice.voiceData.index);
    Serial.print(F(","));
    Serial.print(Voice.voiceData.version[0]);
    Serial.print(F(","));
    Serial.print(Voice.voiceData.version[1]);
    Serial.print(F(","));
    Serial.print(Voice.voiceData.version[2]);
    Serial.print(F(","));
    Serial.print(Voice.voiceData.algorithm);
    Serial.print(F(","));
    for (uint8_t i = 0; i < NUM_OSCILLATORS; i++)
    {
      Serial.print(Voice.voiceData.wave_shape[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.mod_depth[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.tune[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.scale[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.coarse[i], 2);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.fine[i], 2);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.hasRetrigger[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.auxDepth[i]);
    }
    Serial.print(F(","));
    for (uint8_t i = 0; i < NUM_ENVELOPES; i++)
    {
      Serial.print(Voice.voiceData.attackScale[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.attackTime[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.attackLevel[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.decayScale[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.decayTime[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.decayLevel[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.sustainScale[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.sustainTime[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.sustainLevel[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.releaseScale[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.releaseTime[i]);
      Serial.print(F(","));
      Serial.print(Voice.voiceData.releaseLevel[i]);
    }
    Serial.println();
    Serial.flush();
  }
#endif
}