#ifndef AKWF_0628_512_H_
#define AKWF_0628_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0628_512_NUM_CELLS 512
#define AKWF_0628_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0628_512_DATA [] =
{30, 42, 38, 42, 41, 44, 44, 48, 46, 49, 50, 50, 52, 53, 54, 55, 57, 57, 59, 60,
62, 62, 64, 65, 66, 66, 69, 69, 71, 73, 73, 75, 75, 77, 78, 78, 80, 81, 83, 84,
85, 86, 87, 88, 89, 91, 92, 93, 94, 95, 96, 98, 99, 101, 102, 103, 104, 105,
105, 108, 108, 110, 110, 113, 113, 115, 115, 117, 117, 119, 119, 122, 122, 124,
125, 126, 127, 123, 101, 81, 59, 5, -2, 1, -1, 1, -1, 1, 0, 0, -1, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1, -1, -1, 0, 1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 1,
0, 0, 0, 1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
0, 0, 0, 0, 1, -1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, 1, 0, -1, 0, 0,
0, 0, 0, 0, 1, 1, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0,
0, 1, 1, 0, -1, 0, -1, 0, 0, 1, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 1, 0, 1, -1, 1, -1, 0,
-1, 1, -1, 2, -2, 2, -6, -40, -38, -40, -42, -43, -44, -45, -46, -47, -49, -49,
-51, -51, -54, -54, -56, -56, -59, -60, -60, -61, -63, -64, -65, -66, -68, -68,
-70, -71, -71, -74, -74, -75, -77, -78, -79, -80, -82, -83, -84, -86, -86, -87,
-89, -90, -91, -92, -94, -94, -96, -98, -98, -99, -100, -102, -102, -104, -104,
-106, -108, -109, -110, -110, -112, -113, -114, -115, -117, -117, -119, -119,
-122, -122, -125, -125, -127, -128, -121, -94, -79, -47, 2, -1, 0, 0, 0, 1, 0,
0, 0, 0, 0, 1, -1, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0,
-1, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, -1, 0,
0, -1, 0, 0, 1, -1, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0,
0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0,
0, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 1, 0, 0, 0,
0, 0, 0, 0, -1, 1, 1, 0, 0, 0, 0, 1, 0, };

#endif /* AKWF_0628_512_H_ */
