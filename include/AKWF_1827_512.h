#ifndef AKWF_1827_512_H_
#define AKWF_1827_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1827_512_NUM_CELLS 512
#define AKWF_1827_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1827_512_DATA [] = {1,
2, 3, 4, 5, 5, 6, 7, 8, 9, 8, 10, 11, 12, 12, 13, 10, 20, 63, 92, 102, 108, 109,
108, 107, 104, 102, 101, 97, 95, 93, 90, 88, 86, 83, 82, 79, 78, 76, 74, 72, 70,
68, 66, 65, 63, 62, 60, 59, 57, 56, 55, 53, 51, 50, 49, 48, 47, 46, 44, 43, 42,
41, 40, 40, 39, 38, 37, 35, 34, 34, 33, 33, 32, 31, 30, 29, 29, 28, 27, 27, 26,
25, 24, 24, 23, 23, 23, 23, 21, 21, 20, 20, 20, 19, 19, 18, 17, 18, 17, 17, 16,
16, 16, 16, 15, 15, 15, 14, 14, 13, 13, 14, 13, 13, 12, 12, 11, 11, 11, 12, 11,
11, 11, 11, 10, 10, 10, 9, 10, 9, 9, 9, 9, 9, 9, 9, 8, 9, 8, 9, 8, 8, 7, 7, 7,
7, 7, 8, 8, 8, 7, 8, 8, 8, 8, 10, -5, -22, -13, -6, -6, -3, -3, -3, -2, -2, -2,
-2, -2, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 1,
0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2,
2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 4,
4, 3, 3, 4, 4, 4, 3, 4, 4, 4, 4, 5, 4, 4, 5, 5, 4, 4, 5, 5, 5, 5, 5, 5, 6, 5, 6,
5, 6, 6, 6, 5, 6, 7, 6, 6, 6, 7, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 9, 8,
8, 9, 8, 9, 9, 9, 9, 9, 9, 10, 9, 9, 10, 10, 9, 11, 10, 11, 10, 11, 10, 11, 11,
12, 11, 11, 12, 12, 13, 13, 12, 13, 13, 13, 14, 14, 14, 14, 15, 15, 14, 15, 15,
15, 15, 16, 16, 16, 16, 16, 17, 18, 18, 19, 18, 18, 19, 19, 19, 19, 20, 19, 20,
20, 21, 21, 21, 21, 21, 22, 22, 22, 23, 23, 22, 22, 23, 23, 24, 23, 24, 23, 24,
23, 23, 23, 23, 22, 22, 22, 22, 21, 21, 20, 19, 19, 18, 17, 16, 14, 13, 12, 10,
9, 6, 4, 3, 0, -3, -5, -8, -11, -15, -18, -22, -26, -29, -33, -38, -42, -46,
-51, -56, -60, -66, -70, -74, -79, -83, -88, -92, -97, -100, -104, -107, -111,
-114, -116, -119, -120, -123, -124, -125, -127, -128, -127, -128, -128, -128,
-127, -127, -126, -125, -122, -121, -119, -118, -116, -114, -112, -109, -107,
-105, -102, -99, -97, -94, -91, -88, -87, -83, -81, -78, -76, -73, -70, -68,
-66, -62, -61, -57, -56, -53, -51, -49, -46, -43, -42, -39, -37, -36, -33, -31,
-29, -27, -25, -23, -21, -21, -19, -16, -15, -15, -12, -11, -9, -8, -7, -5, -5,
-3, -3, -1, 0, };

#endif /* AKWF_1827_512_H_ */