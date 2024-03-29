#ifndef AKWF_nes_triangle_512_H_
#define AKWF_nes_triangle_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_nes_triangle_512_NUM_CELLS 512
#define AKWF_nes_triangle_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_nes_triangle_512_DATA
[] = {6, 18, 15, 17, 16, 16, 15, 16, 15, 16, 16, 15, 16, 16, 17, 14, 22, 33, 31,
32, 31, 31, 31, 31, 32, 31, 31, 31, 32, 32, 32, 32, 30, 44, 49, 46, 48, 47, 48,
47, 47, 46, 47, 47, 48, 48, 47, 46, 48, 61, 64, 62, 63, 62, 64, 63, 63, 62, 63,
62, 64, 63, 63, 63, 64, 78, 79, 78, 80, 79, 79, 78, 78, 79, 79, 79, 79, 78, 80,
77, 81, 94, 95, 94, 95, 94, 95, 93, 95, 94, 95, 94, 95, 94, 96, 93, 96, 111,
111, 110, 110, 110, 111, 110, 110, 109, 111, 109, 112, 110, 112, 108, 114, 127,
125, 126, 126, 126, 125, 126, 126, 126, 126, 126, 125, 126, 125, 127, 121, 108,
111, 110, 110, 109, 110, 110, 110, 111, 110, 110, 110, 111, 109, 112, 105, 92,
96, 93, 94, 95, 94, 94, 94, 94, 95, 95, 94, 96, 93, 96, 88, 77, 80, 79, 80, 79,
79, 79, 78, 78, 79, 79, 79, 79, 78, 80, 70, 61, 64, 62, 63, 63, 63, 62, 62, 62,
63, 62, 63, 64, 63, 64, 52, 46, 48, 46, 47, 48, 47, 47, 48, 47, 47, 46, 47, 48,
46, 49, 36, 30, 33, 31, 33, 31, 32, 31, 32, 31, 31, 31, 32, 31, 32, 32, 18, 14,
16, 15, 17, 16, 16, 15, 16, 15, 16, 15, 15, 16, 16, 16, 2, -1, 1, -1, 0, 0, 0,
0, -1, 0, -1, 0, -1, 0, 0, 2, -3, -17, -15, -16, -15, -15, -16, -15, -16, -15,
-16, -15, -16, -15, -17, -14, -21, -33, -31, -31, -32, -31, -31, -31, -31, -31,
-32, -30, -32, -31, -33, -30, -38, -48, -47, -49, -46, -48, -48, -47, -47, -46,
-47, -46, -48, -46, -48, -45, -55, -64, -62, -63, -62, -63, -63, -64, -63, -62,
-62, -62, -63, -63, -64, -61, -72, -80, -78, -79, -78, -79, -78, -79, -78, -79,
-79, -78, -79, -78, -79, -77, -89, -96, -94, -95, -94, -94, -94, -95, -94, -95,
-95, -94, -95, -94, -94, -93, -106, -112, -110, -110, -110, -111, -110, -110,
-109, -110, -110, -110, -110, -110, -111, -109, -123, -126, -126, -127, -125,
-126, -125, -127, -126, -125, -126, -126, -127, -126, -126, -127, -111, -110,
-111, -109, -110, -110, -112, -109, -111, -110, -110, -109, -111, -110, -111,
-110, -96, -94, -96, -94, -94, -94, -95, -94, -95, -94, -95, -94, -94, -94, -95,
-94, -78, -78, -79, -78, -78, -78, -79, -78, -79, -78, -78, -77, -80, -78, -80,
-76, -63, -63, -62, -62, -63, -62, -63, -62, -64, -63, -63, -62, -63, -62, -65,
-59, -46, -47, -46, -48, -47, -48, -47, -47, -47, -47, -48, -46, -48, -46, -49,
-42, -30, -32, -31, -31, -31, -31, -31, -32, -32, -32, -32, -31, -32, -31, -31,
-33, -21, -14, -17, -15, -16, -15, -16, -15, -16, -15, -17, -15, -15, -17, -15,
-17, -4, 2, -1, 1, 0, 0, -1, 1, -1, 0, 0, -1, -1, 0, 0, -1, };

#endif /* AKWF_nes_triangle_512_H_ */
