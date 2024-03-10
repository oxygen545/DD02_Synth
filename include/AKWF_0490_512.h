#ifndef AKWF_0490_512_H_
#define AKWF_0490_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0490_512_NUM_CELLS 512
#define AKWF_0490_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0490_512_DATA [] = {6,
12, 7, 5, 6, 10, 14, 18, 20, 23, 24, 24, 23, 23, 28, 37, 49, 60, 69, 78, 86, 93,
99, 104, 108, 113, 117, 119, 122, 123, 126, 126, 127, 127, 127, 127, 126, 123,
120, 116, 113, 105, 72, 25, 13, 41, 57, 55, 52, 38, 14, -5, -19, -36, -61, -88,
-107, -115, -116, -121, -124, -125, -119, -107, -99, -96, -96, -96, -97, -97,
-96, -95, -96, -96, -97, -98, -100, -103, -108, -116, -124, -128, -125, -116,
-103, -84, -58, -32, -17, -11, -6, 0, 8, 16, 22, 30, 48, 72, 96, 112, 119, 124,
126, 127, 127, 127, 124, 122, 120, 119, 120, 119, 122, 124, 126, 127, 127, 127,
125, 122, 117, 111, 102, 88, 72, 52, 32, 21, 19, 18, 14, 8, 4, 1, -4, -7, -8,
-12, -16, -20, -22, -24, -25, -24, -24, -24, -24, -24, -25, -24, -24, -21, -19,
-17, -14, -10, -6, -5, -5, -5, 2, 8, 8, 7, 10, 14, 19, 22, 23, 24, 24, 22, 21,
19, 20, 21, 21, 21, 21, 20, 20, 23, 24, 24, 23, 20, 16, 12, 9, 5, 5, 4, -2, -6,
-9, -11, -14, -19, -23, -24, -24, -26, -36, -49, -61, -72, -80, -86, -91, -95,
-97, -99, -101, -102, -102, -101, -99, -98, -95, -91, -86, -80, -75, -66, -57,
-48, -36, -26, -20, -21, -23, -22, -19, -15, -12, -7, -4, -5, -7, -6, 2, 10, 10,
6, 4, 4, 7, 9, 10, 10, 10, 10, 10, 9, 9, 9, 7, 6, 4, 4, 4, 6, 10, 10, 1, -9,
-13, -9, -4, -2, -6, -8, -11, -12, -13, -15, -17, -17, -18, -19, -20, -19, -20,
-20, -20, -19, -18, -17, -16, -14, -13, -11, -9, -7, -5, -4, -4, -8, -9, -1, 8,
12, 7, 4, 5, 10, 12, 15, 17, 19, 20, 22, 24, 24, 24, 24, 24, 24, 23, 22, 22, 22,
21, 21, 22, 23, 24, 24, 25, 24, 24, 24, 22, 21, 21, 19, 16, 15, 14, 13, 11, 10,
8, 6, 5, 4, 3, 2, 3, 3, 5, 8, 12, 14, 15, 15, 14, 14, 12, 9, 6, 3, 2, 3, 3, 4,
4, 6, 7, 8, 9, 10, 12, 12, 14, 15, 16, 18, 18, 19, 20, 20, 21, 21, 22, 21, 21,
21, 21, 22, 21, 21, 20, 19, 19, 18, 17, 16, 14, 13, 11, 10, 8, 6, 5, 3, 3, 6,
10, 11, 6, -4, -11, -14, -10, -3, -1, -3, -6, -7, -8, -9, -10, -12, -13, -13,
-14, -14, -15, -15, -17, -17, -17, -16, -18, -17, -18, -19, -17, -18, -17, -17,
-16, -17, -16, -17, -17, -16, -16, -16, -16, -16, -16, -16, -16, -16, -16, -16,
-16, -16, -18, -18, -18, -18, -19, -20, -19, -20, -20, -22, -22, -22, -22, -23,
-24, -24, -24, -24, -24, -24, -25, -24, -25, -25, -25, -24, -25, -24, -24, -24,
-25, -25, -24, -23, -24, -22, -22, -21, -19, -18, -17, -14, -13, -11, -8, -7,
-4, -4, -5, -9, -7, 0, };

#endif /* AKWF_0490_512_H_ */