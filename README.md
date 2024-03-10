# DD02_Synth Project

Arduino ProMicro based midi synthesizer using the Mozzi Library and MIDIUSB libraries
also recently changed to using the AdventureKid Wavetables I found that had been converted to 512 Samples.

Any questions please ask me. <Oxygen545@protonmail.com>

**Building it yourself**
if you are building it yourself Load up the sketch in the arduino IDE and solder an audio jack to pins 9 and ground respectively.. Tip to pin 9 and Sheild to Ground

OK. So it's a 2 Oscillator 3 Envelope synthesizer. It's a bit different from the DD03 in the way you can mix clean signals in with the modulated one.
Also their are envelopes for each oscillator as well as one for the overall output.

Again, I didn't want to implement the time and energy into this project to use hardware controls for the parameter inputs.
Instead I've opted to use an application called TouchOSC. available for download at <https://hexler.net/touchosc>

the Trial version works fine on a computer or laptop. For use on a tablet or phone, you will need to purchase the appropriate application.

In the resource folder you will find the latest TouchOSC file
Plug in the DD02 to a USB port and the Audio jack into a mixer. This has NO output protection and in my case outputs a 0-5V audio signal.
I will be implementing an audio output buffer stage at some point.

Load the DD02 file from the resource directory in TouchOsc.
Configure the preferences in the MIDI scetion to allow input from your computer and output to the Sparkfun ProMicro or other 32uMega devboard.

Email me at <Oxygen545@protonmail.com> for questions or whatever.

if you want to just buy one. I'll send you one preloaded and give you whatever support I can for $20USD. email me. I'm not a musician, I'm just a tinkerer but this is pretty decent I think. I need more input.

Thanks,
Damon
