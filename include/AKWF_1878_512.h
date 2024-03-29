#ifndef AKWF_1878_512_H_
#define AKWF_1878_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1878_512_NUM_CELLS 512
#define AKWF_1878_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1878_512_DATA [] = {1,
3, 4, 7, 8, 10, 11, 13, 14, 18, 20, 23, 24, 27, 30, 31, 34, 36, 38, 41, 44, 46,
48, 50, 53, 55, 59, 61, 65, 67, 68, 68, 68, 69, 71, 73, 75, 78, 79, 81, 81, 80,
79, 78, 77, 76, 74, 72, 70, 68, 65, 63, 61, 58, 55, 49, 44, 38, 31, 25, 19, 14,
9, 4, -3, -9, -16, -23, -29, -35, -42, -48, -55, -62, -68, -74, -79, -84, -89,
-92, -98, -102, -106, -110, -114, -117, -120, -121, -123, -125, -127, -128,
-127, -128, -127, -126, -125, -124, -123, -121, -120, -117, -115, -111, -108,
-105, -101, -96, -92, -88, -83, -79, -73, -69, -65, -61, -55, -51, -45, -41,
-35, -30, -24, -20, -15, -12, -6, -3, 1, 5, 8, 12, 15, 18, 22, 25, 28, 30, 32,
33, 34, 35, 36, 37, 37, 39, 39, 40, 40, 39, 38, 39, 38, 37, 36, 35, 33, 33, 32,
30, 30, 29, 28, 26, 26, 23, 23, 21, 20, 19, 19, 17, 16, 16, 15, 14, 15, 15, 14,
14, 15, 14, 16, 16, 16, 17, 18, 19, 20, 21, 24, 23, 24, 28, 29, 30, 33, 33, 35,
36, 38, 40, 41, 43, 45, 46, 48, 49, 51, 52, 54, 55, 57, 59, 60, 61, 61, 61, 61,
61, 62, 62, 63, 63, 63, 61, 61, 60, 59, 57, 55, 53, 51, 49, 46, 44, 42, 40, 38,
34, 31, 27, 23, 19, 15, 12, 8, 4, 1, -2, -6, -10, -13, -17, -20, -25, -29, -32,
-35, -38, -41, -43, -46, -48, -49, -52, -53, -54, -56, -57, -59, -59, -60, -60,
-62, -61, -61, -61, -61, -59, -59, -58, -57, -55, -55, -54, -52, -51, -49, -48,
-46, -45, -42, -40, -38, -36, -34, -32, -29, -28, -25, -24, -22, -20, -18, -15,
-14, -12, -10, -8, -6, -4, -3, -1, -1, 1, 1, 3, 5, 5, 7, 8, 9, 9, 10, 12, 11,
13, 13, 13, 15, 15, 15, 16, 16, 16, 17, 18, 18, 18, 18, 18, 18, 17, 19, 17, 18,
18, 18, 18, 19, 19, 19, 20, 20, 20, 20, 20, 21, 20, 21, 21, 21, 21, 23, 24, 25,
25, 26, 27, 27, 28, 27, 28, 27, 27, 28, 29, 29, 29, 29, 30, 30, 29, 28, 28, 26,
26, 26, 25, 24, 23, 22, 21, 20, 18, 17, 16, 14, 12, 11, 9, 7, 4, 4, 1, 0, -3,
-5, -7, -10, -12, -14, -16, -17, -20, -21, -24, -26, -27, -29, -30, -31, -32,
-35, -36, -37, -38, -40, -40, -41, -41, -41, -42, -42, -42, -42, -42, -40, -40,
-39, -38, -37, -36, -35, -33, -32, -29, -28, -26, -25, -22, -20, -19, -16, -15,
-13, -10, -9, -7, -4, -2, -1, 1, 4, 5, 6, 7, 7, 8, 9, 10, 11, 11, 12, 13, 13,
12, 13, 12, 12, 11, 10, 10, 9, 7, 6, 5, 5, 4, 5, 3, 2, 1, 0, -2, -2, -2, -3, -4,
-4, -4, -4, -4, -5, -5, -5, -3, -3, -3, -1, 0, };

#endif /* AKWF_1878_512_H_ */
