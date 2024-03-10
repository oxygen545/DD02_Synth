#ifndef AKWF_0478_512_H_
#define AKWF_0478_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0478_512_NUM_CELLS 512
#define AKWF_0478_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0478_512_DATA [] =
{13, 34, 51, 68, 83, 98, 108, 118, 124, 127, 127, 127, 122, 117, 107, 98, 87,
74, 61, 46, 33, 19, 5, -8, -20, -31, -42, -53, -62, -71, -79, -86, -92, -97,
-101, -103, -104, -105, -104, -101, -99, -95, -91, -86, -80, -75, -70, -64, -59,
-53, -48, -41, -37, -31, -26, -20, -15, -9, -5, -1, 4, 7, 10, 13, 14, 15, 15,
13, 13, 10, 8, 6, 3, 1, -2, -3, -3, -1, 1, 4, 8, 13, 20, 27, 34, 42, 49, 57, 64,
70, 75, 79, 83, 85, 86, 86, 84, 83, 81, 78, 74, 70, 68, 63, 59, 54, 51, 47, 42,
39, 35, 31, 26, 23, 19, 15, 10, 6, 1, -6, -12, -21, -28, -35, -41, -48, -50,
-52, -53, -51, -50, -45, -41, -36, -30, -25, -21, -16, -13, -8, -5, -3, 1, 1, 2,
3, 3, 3, 2, 0, -3, -5, -8, -12, -17, -21, -26, -32, -37, -43, -48, -54, -59,
-64, -67, -70, -71, -71, -70, -69, -65, -61, -56, -50, -44, -37, -30, -24, -17,
-10, -5, 2, 8, 13, 19, 24, 30, 34, 37, 40, 44, 45, 48, 48, 47, 46, 46, 42, 39,
36, 31, 27, 22, 18, 14, 10, 7, 4, 2, 0, 0, 0, 2, 2, 5, 9, 11, 15, 18, 22, 26,
29, 32, 35, 38, 39, 41, 42, 42, 42, 40, 40, 37, 35, 32, 28, 24, 19, 14, 9, 4,
-1, -8, -15, -22, -30, -38, -46, -52, -57, -61, -63, -63, -60, -56, -49, -42,
-33, -24, -14, -6, 3, 12, 18, 23, 28, 31, 32, 33, 31, 29, 26, 21, 17, 13, 8, 3,
-2, -7, -12, -15, -19, -23, -27, -31, -33, -37, -40, -42, -44, -45, -46, -44,
-44, -42, -40, -36, -33, -28, -25, -20, -16, -12, -9, -5, -2, 1, 4, 8, 9, 12,
15, 17, 18, 21, 24, 26, 28, 29, 30, 32, 32, 31, 30, 30, 27, 24, 22, 19, 16, 13,
10, 7, 5, 3, 3, 3, 3, 5, 7, 9, 12, 15, 17, 21, 22, 25, 26, 29, 29, 29, 29, 29,
28, 27, 26, 23, 22, 20, 17, 15, 12, 9, 7, 4, 1, -2, -4, -6, -9, -11, -14, -17,
-20, -23, -27, -30, -35, -39, -42, -44, -46, -46, -45, -44, -40, -35, -32, -26,
-21, -15, -12, -7, -4, -1, 1, 3, 6, 7, 9, 9, 10, 10, 10, 9, 9, 9, 8, 7, 6, 3, 1,
0, -3, -6, -8, -12, -14, -17, -20, -22, -23, -24, -24, -24, -21, -20, -18, -15,
-11, -8, -5, -1, 2, 5, 8, 11, 13, 16, 18, 22, 24, 26, 27, 29, 30, 32, 32, 31,
32, 31, 30, 27, 25, 22, 19, 16, 12, 8, 4, 1, -3, -6, -8, -10, -11, -12, -12,
-11, -10, -9, -7, -4, -3, 0, 1, 4, 6, 7, 10, 11, 13, 13, 14, 14, 15, 14, 12, 10,
7, 4, -3, -8, -15, -21, -29, -36, -43, -49, -54, -60, -64, -68, -70, -68, -66,
-61, -53, -41, -29, -11, 0, };

#endif /* AKWF_0478_512_H_ */
