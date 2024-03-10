#ifndef AKWF_0061_512_H_
#define AKWF_0061_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0061_512_NUM_CELLS 512
#define AKWF_0061_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0061_512_DATA [] = {5,
11, 15, 19, 22, 26, 29, 32, 35, 38, 40, 43, 46, 48, 51, 53, 55, 58, 61, 63, 65,
67, 69, 71, 72, 74, 76, 78, 80, 82, 83, 85, 87, 88, 89, 91, 91, 94, 94, 96, 97,
97, 98, 100, 100, 102, 102, 103, 105, 105, 105, 107, 106, 106, 107, 108, 108,
108, 108, 109, 109, 109, 108, 108, 108, 109, 108, 108, 109, 109, 108, 108, 108,
108, 108, 108, 108, 109, 108, 108, 109, 108, 109, 109, 108, 108, 108, 108, 109,
109, 109, 109, 109, 109, 108, 108, 109, 108, 109, 108, 108, 109, 109, 109, 108,
108, 108, 108, 108, 108, 109, 109, 108, 109, 109, 109, 108, 109, 108, 108, 108,
108, 108, 108, 109, 108, 109, 108, 108, 108, 108, 108, 108, 108, 109, 109, 108,
108, 108, 109, 108, 108, 108, 108, 108, 108, 108, 109, 108, 109, 108, 108, 108,
108, 109, 108, 108, 109, 108, 108, 108, 109, 109, 108, 108, 108, 109, 109, 108,
108, 108, 108, 108, 108, 108, 108, 109, 109, 109, 109, 108, 109, 108, 108, 106,
103, 102, 100, 98, 97, 95, 94, 92, 92, 90, 88, 87, 86, 84, 83, 82, 80, 78, 77,
76, 74, 73, 72, 70, 69, 68, 66, 66, 65, 64, 63, 62, 61, 60, 59, 57, 57, 56, 55,
55, 53, 53, 52, 51, 51, 50, 49, 49, 48, 47, 46, 46, 46, 45, 44, 44, 43, 43, 43,
42, 42, 41, 41, 40, 40, 40, 38, 38, 37, 37, 37, 37, 36, 35, 35, 34, 33, 33, 31,
32, 31, 29, 29, 29, 28, 27, 25, 24, 24, 23, 22, 20, 19, 18, 16, 13, 13, 11, 8,
4, 1, -5, -7, -10, -13, -16, -18, -20, -23, -25, -28, -29, -33, -34, -37, -38,
-42, -43, -45, -48, -51, -53, -54, -58, -60, -62, -65, -66, -69, -71, -73, -76,
-79, -82, -84, -86, -88, -91, -93, -94, -97, -100, -102, -104, -106, -109, -108,
-109, -108, -109, -108, -108, -109, -109, -108, -109, -108, -108, -108, -108,
-109, -108, -109, -109, -109, -108, -109, -108, -109, -108, -109, -109, -109,
-109, -109, -108, -109, -109, -108, -108, -108, -108, -109, -108, -108, -109,
-108, -108, -109, -108, -109, -108, -108, -109, -108, -108, -109, -109, -108,
-109, -109, -109, -109, -108, -109, -108, -108, -109, -108, -108, -108, -108,
-108, -108, -108, -108, -108, -109, -109, -109, -108, -109, -108, -108, -108,
-108, -108, -109, -109, -109, -108, -108, -109, -108, -108, -108, -108, -109,
-108, -108, -108, -109, -109, -109, -108, -108, -108, -108, -108, -108, -108,
-108, -109, -109, -108, -108, -109, -108, -109, -109, -108, -109, -108, -108,
-108, -108, -109, -108, -108, -108, -108, -109, -108, -108, -108, -108, -109,
-108, -109, -109, -108, -108, -108, -108, -109, -106, -104, -103, -102, -100,
-98, -96, -95, -92, -91, -88, -86, -85, -83, -81, -79, -77, -76, -73, -70, -68,
-66, -64, -60, -59, -56, -53, -51, -48, -44, -42, -40, -36, -33, -30, -27, -23,
-20, -15, -12, -6, -2, };

#endif /* AKWF_0061_512_H_ */