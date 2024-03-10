#ifndef AKWF_1184_512_H_
#define AKWF_1184_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1184_512_NUM_CELLS 512
#define AKWF_1184_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1184_512_DATA [] =
{12, 30, 44, 61, 75, 88, 100, 111, 119, 124, 127, 127, 126, 123, 116, 108, 99,
88, 77, 66, 52, 39, 27, 15, 5, -6, -16, -22, -29, -32, -36, -36, -34, -31, -26,
-18, -10, -1, 11, 21, 32, 40, 48, 55, 61, 63, 65, 66, 64, 61, 58, 54, 49, 44,
38, 32, 27, 20, 15, 10, 4, -1, -7, -11, -16, -21, -25, -29, -31, -33, -36, -37,
-38, -39, -41, -43, -44, -45, -46, -46, -47, -46, -45, -44, -43, -42, -40, -37,
-35, -33, -32, -28, -26, -24, -23, -21, -20, -18, -18, -16, -16, -15, -15, -16,
-19, -23, -28, -34, -41, -49, -58, -66, -74, -83, -88, -94, -96, -96, -96, -92,
-86, -78, -68, -57, -43, -29, -14, 1, 17, 33, 48, 63, 77, 90, 101, 111, 117,
122, 125, 124, 122, 116, 110, 101, 90, 78, 66, 53, 39, 26, 12, 0, -12, -23, -32,
-41, -47, -51, -54, -54, -52, -50, -44, -38, -28, -17, -8, 3, 14, 24, 33, 40,
46, 50, 52, 53, 53, 52, 49, 46, 44, 40, 36, 32, 28, 23, 20, 16, 13, 9, 5, 3, -1,
-3, -6, -9, -9, -10, -11, -12, -11, -12, -13, -13, -14, -14, -15, -15, -15, -14,
-14, -13, -12, -10, -8, -7, -6, -4, -2, 0, 0, 2, 1, 3, 3, 4, 3, 3, 3, 2, 0, -2,
-6, -11, -17, -24, -33, -42, -52, -61, -71, -78, -86, -91, -95, -96, -94, -92,
-86, -78, -69, -57, -44, -29, -15, 1, 17, 32, 48, 63, 77, 90, 101, 111, 118,
122, 125, 125, 123, 119, 112, 102, 93, 81, 70, 58, 45, 33, 20, 8, -3, -13, -22,
-30, -35, -39, -41, -42, -39, -36, -31, -22, -14, -5, 6, 17, 27, 37, 45, 50, 56,
58, 59, 59, 58, 54, 51, 47, 42, 36, 31, 25, 19, 14, 8, 2, -3, -8, -13, -18, -23,
-27, -30, -33, -36, -38, -40, -42, -43, -43, -45, -46, -48, -49, -49, -50, -50,
-50, -49, -47, -46, -44, -41, -39, -36, -35, -32, -30, -28, -26, -24, -23, -20,
-19, -18, -16, -15, -14, -15, -17, -20, -23, -30, -36, -43, -50, -59, -67, -76,
-83, -89, -93, -95, -96, -94, -90, -83, -75, -64, -53, -40, -25, -10, 6, 21, 37,
52, 67, 80, 94, 104, 112, 119, 124, 125, 124, 121, 116, 108, 98, 89, 76, 63, 50,
36, 23, 10, -2, -15, -25, -34, -42, -49, -53, -55, -56, -54, -50, -45, -37, -28,
-18, -7, 3, 14, 24, 32, 38, 44, 48, 49, 49, 49, 47, 45, 41, 38, 34, 30, 26, 22,
18, 14, 10, 7, 3, -1, -4, -6, -10, -12, -13, -15, -17, -16, -18, -18, -18, -18,
-20, -20, -21, -21, -21, -20, -21, -21, -19, -18, -16, -14, -13, -11, -10, -8,
-6, -6, -5, -3, -4, -2, -3, -2, -2, -3, -3, -4, -8, -11, -17, -23, -31, -39,
-48, -57, -67, -75, -84, -89, -94, -97, -98, -96, -91, -85, -77, -67, -55, -40,
-27, -10, 1, };

#endif /* AKWF_1184_512_H_ */
