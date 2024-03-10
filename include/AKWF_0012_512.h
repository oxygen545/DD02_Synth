#ifndef AKWF_0012_512_H_
#define AKWF_0012_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0012_512_NUM_CELLS 512
#define AKWF_0012_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0012_512_DATA [] =
{-1, 1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 9, 10, 10, 11, 13, 13, 14, 15, 15, 16, 17,
18, 19, 20, 22, 21, 23, 24, 24, 25, 25, 27, 28, 28, 29, 29, 30, 31, 32, 32, 33,
33, 35, 34, 35, 35, 36, 36, 36, 36, 37, 37, 37, 37, 37, 38, 38, 38, 39, 38, 39,
38, 39, 38, 39, 40, 40, 40, 40, 41, 41, 41, 41, 42, 41, 41, 41, 42, 42, 41, 42,
43, 43, 42, 42, 42, 42, 42, 41, 42, 42, 42, 41, 42, 41, 42, 41, 41, 41, 41, 40,
40, 39, 39, 38, 37, 37, 36, 35, 35, 32, 31, 31, 28, 27, 26, 23, 21, 19, 17, 16,
14, 13, 12, 10, 10, 10, 10, 11, 12, 11, 10, 8, 7, 5, 4, 1, 0, -1, -2, -4, -4,
-4, -4, -3, -3, -2, -2, -1, -1, 0, 1, 3, 5, 6, 8, 10, 12, 14, 16, 17, 17, 18,
17, 17, 17, 16, 18, 19, 20, 21, 22, 25, 26, 28, 30, 31, 32, 33, 33, 34, 35, 35,
36, 35, 35, 34, 34, 33, 33, 32, 33, 32, 31, 30, 30, 30, 30, 28, 28, 28, 28, 27,
25, 25, 24, 23, 22, 22, 22, 21, 21, 20, 19, 19, 18, 17, 15, 16, 14, 14, 14, 13,
12, 11, 11, 10, 9, 8, 7, 6, 5, 5, 4, 3, 3, 2, 1, 0, 0, -1, -2, -2, -3, -4, -5,
-6, -7, -7, -8, -8, -9, -10, -10, -12, -12, -12, -13, -14, -15, -15, -15, -17,
-16, -17, -18, -18, -18, -19, -20, -20, -20, -21, -22, -22, -23, -23, -23, -24,
-25, -24, -25, -25, -25, -26, -25, -27, -27, -27, -28, -27, -28, -28, -28, -28,
-29, -29, -30, -29, -30, -29, -30, -31, -30, -31, -31, -31, -31, -30, -30, -31,
-32, -31, -31, -31, -31, -31, -31, -31, -31, -32, -31, -31, -32, -31, -32, -31,
-31, -31, -31, -31, -31, -30, -30, -29, -29, -29, -29, -28, -28, -28, -27, -27,
-25, -25, -24, -24, -22, -21, -20, -18, -17, -15, -14, -12, -11, -8, -6, -5, -3,
-2, 0, 1, 2, 2, 2, 2, 0, 2, 0, 0, 0, 0, 2, 4, 5, 7, 8, 11, 13, 13, 15, 15, 16,
16, 16, 16, 16, 16, 14, 14, 14, 13, 12, 11, 10, 10, 8, 8, 7, 5, 4, 2, 0, -2, -4,
-7, -9, -12, -13, -14, -17, -18, -19, -20, -21, -21, -21, -21, -22, -21, -21,
-21, -22, -23, -24, -26, -27, -28, -31, -33, -34, -35, -38, -39, -41, -42, -44,
-45, -45, -47, -48, -48, -49, -50, -50, -50, -51, -51, -51, -52, -51, -52, -51,
-51, -50, -50, -50, -50, -49, -49, -48, -47, -47, -47, -45, -45, -45, -44, -43,
-41, -41, -40, -39, -39, -38, -37, -36, -34, -33, -32, -31, -30, -29, -28, -27,
-27, -24, -24, -22, -21, -20, -19, -18, -17, -16, -14, -14, -13, -11, -11, -9,
-9, -7, -6, -5, -5, -3, -3, -1, 0, };

#endif /* AKWF_0012_512_H_ */
