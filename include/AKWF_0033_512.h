#ifndef AKWF_0033_512_H_
#define AKWF_0033_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0033_512_NUM_CELLS 512
#define AKWF_0033_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0033_512_DATA [] =
{-1, -9, -15, -21, -27, -33, -39, -44, -51, -56, -62, -67, -72, -77, -81, -87,
-90, -94, -97, -98, -100, -102, -103, -104, -106, -106, -106, -106, -107, -106,
-107, -106, -107, -105, -105, -104, -104, -103, -101, -100, -97, -96, -94, -91,
-89, -86, -84, -81, -78, -75, -71, -68, -65, -61, -58, -54, -51, -47, -43, -40,
-36, -33, -29, -26, -23, -20, -17, -14, -11, -9, -6, -4, -1, 1, 2, 6, 7, 8, 10,
12, 13, 15, 16, 17, 18, 19, 20, 21, 21, 22, 22, 22, 21, 23, 22, 22, 21, 21, 20,
19, 19, 20, 18, 18, 16, 16, 15, 14, 13, 12, 10, 10, 8, 7, 6, 5, 4, 3, 2, 1, 0,
-1, -2, -3, -4, -5, -6, -7, -7, -8, -9, -10, -11, -12, -12, -12, -13, -13, -14,
-14, -15, -15, -15, -16, -16, -15, -15, -16, -17, -17, -16, -16, -16, -16, -17,
-16, -16, -16, -16, -15, -15, -15, -15, -15, -14, -13, -15, -13, -14, -13, -12,
-13, -12, -12, -12, -11, -12, -11, -10, -10, -10, -10, -9, -9, -9, -9, -8, -8,
-7, -8, -8, -8, -7, -7, -7, -6, -6, -6, -5, -6, -5, -6, -5, -4, -5, -5, -4, -5,
-4, -5, -4, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1, 0, -1, 0, 1, 0, 0, 1, 1,
2, 2, 3, 3, 4, 3, 3, 4, 5, 4, 5, 6, 6, 7, 7, 7, 8, 7, 8, 8, 8, 9, 9, 9, 10, 10,
10, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 12, 13, 13, 13, 13, 13, 13, 14,
13, 13, 13, 13, 13, 13, 13, 12, 13, 13, 12, 13, 12, 12, 12, 12, 13, 12, 11, 12,
10, 11, 11, 10, 11, 10, 10, 10, 11, 10, 9, 10, 9, 9, 8, 9, 9, 9, 8, 9, 9, 8, 9,
8, 8, 9, 7, 8, 8, 8, 9, 8, 8, 9, 8, 8, 8, 9, 9, 10, 9, 10, 10, 10, 10, 10, 11,
11, 12, 11, 11, 11, 12, 12, 13, 13, 14, 14, 14, 15, 16, 15, 16, 16, 16, 16, 17,
17, 18, 18, 18, 19, 18, 19, 20, 20, 20, 21, 21, 21, 21, 21, 22, 22, 22, 23, 23,
23, 23, 24, 23, 23, 24, 25, 24, 25, 25, 24, 24, 25, 25, 25, 25, 25, 26, 25, 26,
25, 26, 26, 25, 26, 26, 26, 25, 25, 26, 26, 25, 27, 26, 26, 27, 26, 26, 26, 27,
25, 26, 26, 25, 26, 25, 25, 25, 25, 26, 26, 25, 26, 25, 25, 25, 26, 25, 26, 25,
26, 26, 26, 27, 26, 26, 27, 26, 26, 26, 27, 27, 27, 27, 27, 27, 27, 28, 27, 28,
28, 27, 28, 28, 29, 28, 29, 28, 28, 29, 29, 30, 29, 29, 30, 31, 30, 30, 31, 31,
32, 31, 31, 32, 31, 31, 32, 31, 32, 33, 32, 33, 34, 34, 33, 33, 35, 34, 35, 34,
35, 34, 33, 29, 25, 21, 15, 8, 2, };

#endif /* AKWF_0033_512_H_ */
