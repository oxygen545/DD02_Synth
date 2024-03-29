#ifndef AKWF_1536_512_H_
#define AKWF_1536_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1536_512_NUM_CELLS 512
#define AKWF_1536_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1536_512_DATA [] = {0,
1, 1, 2, 2, 2, 3, 3, 3, 5, 4, 6, 5, 6, 6, 7, 7, 8, 8, 9, 9, 9, 11, 10, 10, 11,
11, 13, 13, 14, 13, 15, 14, 15, 15, 16, 16, 16, 17, 18, 18, 19, 19, 19, 21, 21,
21, 21, 22, 23, 22, 23, 24, 24, 24, 24, 25, 26, 26, 26, 27, 27, 28, 28, 29, 29,
29, 30, 31, 32, 32, 31, 33, 32, 34, 34, 34, 35, 35, 36, 36, 37, 37, 37, 38, 37,
39, 39, 40, 40, 40, 41, 41, 42, 42, 42, 44, 43, 44, 45, 45, 45, 46, 46, 48, 48,
47, 47, 48, 49, 49, 50, 50, 50, 51, 52, 52, 53, 53, 53, 54, 53, 55, 55, 56, 55,
56, 57, 57, 58, 58, 58, 59, 59, 59, 60, 61, 61, 61, 63, 62, 63, 63, 63, 63, 65,
65, 65, 66, 66, 66, 67, 68, 68, 68, 69, 69, 70, 70, 72, 70, 72, 72, 73, 72, 73,
73, 74, 74, 76, 75, 75, 77, 76, 78, 77, 79, 77, 80, 77, 81, 78, 82, 79, 83, 80,
85, 82, 84, 83, 85, 85, 84, 91, 75, 124, -26, -79, -54, -72, -56, -70, -58, -67,
-57, -64, -58, -63, -58, -61, -58, -59, -57, -58, -58, -57, -56, -55, -56, -54,
-55, -53, -54, -52, -53, -52, -53, -51, -51, -49, -50, -49, -50, -48, -49, -48,
-47, -46, -46, -46, -46, -45, -45, -44, -44, -43, -43, -42, -41, -42, -40, -40,
-40, -40, -39, -38, -37, -38, -37, -36, -36, -35, -35, -35, -34, -34, -33, -32,
-33, -32, -31, -31, -31, -30, -29, -29, -29, -29, -28, -26, -26, -26, -26, -26,
-25, -24, -24, -24, -24, -22, -23, -21, -22, -20, -21, -19, -19, -19, -19, -18,
-18, -18, -17, -16, -15, -15, -15, -14, -13, -14, -14, -13, -12, -12, -10, -11,
-9, -10, -9, -9, -8, -7, -8, -8, -7, -6, -6, -6, -5, -4, -3, -3, -2, -2, -1, -1,
-1, -1, 0, 1, 1, 1, 1, 2, 2, 3, 4, 4, 5, 5, 5, 5, 6, 6, 7, 7, 9, 8, 10, 9, 10,
10, 10, 11, 11, 14, 11, 15, 11, 18, 9, 23, 0, 50, 29, -71, -57, -66, -58, -64,
-58, -62, -59, -60, -59, -58, -58, -58, -58, -56, -56, -54, -56, -53, -55, -53,
-55, -52, -53, -51, -52, -51, -50, -50, -49, -48, -49, -49, -48, -47, -47, -46,
-47, -45, -45, -45, -44, -43, -43, -43, -41, -42, -41, -41, -40, -40, -40, -39,
-39, -38, -37, -38, -36, -35, -36, -36, -35, -34, -34, -33, -33, -33, -33, -32,
-31, -30, -29, -29, -30, -28, -29, -27, -28, -26, -26, -26, -26, -25, -25, -24,
-24, -23, -23, -23, -22, -21, -22, -20, -21, -19, -19, -19, -18, -18, -17, -17,
-17, -16, -16, -15, -15, -15, -14, -13, -13, -12, -12, -11, -11, -10, -9, -10,
-9, -8, -8, -7, -7, -6, -6, -6, -5, -4, -5, -3, -3, -3, -3, -2, -2, -2, 0, 0, };

#endif /* AKWF_1536_512_H_ */
