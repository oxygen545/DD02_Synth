#ifndef AKWF_1673_512_H_
#define AKWF_1673_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1673_512_NUM_CELLS 512
#define AKWF_1673_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1673_512_DATA [] =
{95, 127, 91, 96, 83, 86, 79, 80, 74, 74, 71, 71, 67, 68, 65, 64, 63, 61, 60,
59, 58, 58, 57, 54, 54, 53, 53, 51, 51, 50, 49, 48, 47, 46, 46, 46, 45, 44, 43,
43, 43, 42, 41, 41, 39, 39, 39, 38, 37, 37, 36, 36, 35, 35, 35, 34, 33, 33, 32,
32, 31, 31, 31, 30, 30, 29, 29, 29, 28, 28, 28, 27, 27, 26, 26, 25, 25, 24, 24,
24, 24, 23, 23, 23, 22, 22, 21, 21, 21, 20, 20, 20, 20, 19, 20, 19, 19, 18, 18,
18, 18, 17, 17, 16, 17, 15, 16, 15, 16, 14, 15, 15, 14, 15, 13, 13, 13, 13, 13,
13, 13, 12, 12, 12, 12, 11, 10, 11, 11, 10, 10, 10, 10, 11, 9, 9, 9, 9, 9, 8, 9,
8, 9, 8, 8, 7, 7, 6, 7, 6, 7, 6, 7, 5, 6, 6, 6, 6, 5, 6, 5, 5, 5, 6, 5, 5, 5, 4,
4, 4, 4, 4, 3, 3, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2,
2, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0,
1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, 0, 0, 0,
0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0,
1, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0,
0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0,
0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, -1, 0, -1, 0, 1, 0, 0, 0,
0, 0, -1, 0, 0, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, -1, -1, 0, 0,
0, 0, 0, 0, -1, 0, -1, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, -1, -1,
0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 1,
0, 0, 1, 1, 0, 0, 0, -1, 1, -1, 1, -1, 2, -1, 2, -3, 3, -3, 4, -5, 9, -30, -128,
-96, -75, -69, -62, -59, -53, -53, -48, -46, -41, -41, -37, -37, -32, -33, -30,
-29, -26, -26, -24, -24, -21, -20, -19, -18, -18, -17, -15, -14, -14, -12, -11,
-11, -11, -9, -9, -7, -8, -7, -6, -6, -5, -5, -4, -3, -3, -3, -2, -3, -1, -1,
-1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, -1, };

#endif /* AKWF_1673_512_H_ */