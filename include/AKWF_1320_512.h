#ifndef AKWF_1320_512_H_
#define AKWF_1320_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1320_512_NUM_CELLS 512
#define AKWF_1320_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1320_512_DATA [] = {1,
5, 10, 14, 17, 22, 27, 30, 34, 38, 41, 46, 50, 52, 56, 60, 64, 66, 71, 73, 76,
80, 82, 86, 88, 91, 94, 96, 99, 102, 104, 108, 110, 111, 114, 117, 119, 121,
124, 126, 127, 127, 126, 124, 123, 121, 121, 120, 118, 118, 116, 115, 114, 113,
112, 110, 105, 99, 95, 89, 85, 81, 77, 72, 68, 64, 60, 56, 52, 48, 44, 40, 36,
33, 29, 26, 23, 18, 16, 12, 9, 6, 3, 0, -2, -6, -8, -11, -14, -17, -20, -22,
-24, -26, -29, -31, -33, -36, -38, -40, -42, -44, -46, -48, -48, -48, -49, -50,
-50, -51, -52, -52, -53, -53, -54, -54, -54, -55, -55, -55, -56, -56, -57, -56,
-57, -57, -58, -58, -59, -59, -59, -60, -59, -59, -60, -60, -60, -61, -61, -61,
-62, -61, -62, -62, -63, -61, -62, -62, -63, -62, -62, -61, -56, -53, -48, -44,
-40, -36, -32, -29, -26, -22, -19, -14, -11, -8, -5, 0, 2, 5, 8, 11, 14, 17, 19,
22, 25, 28, 30, 32, 35, 36, 39, 40, 42, 44, 46, 48, 49, 51, 51, 53, 55, 55, 57,
57, 58, 58, 59, 59, 57, 56, 54, 53, 51, 49, 48, 47, 45, 43, 42, 39, 38, 36, 34,
32, 30, 28, 26, 23, 22, 20, 19, 17, 15, 13, 11, 10, 7, 6, 3, 2, -1, -4, -7, -10,
-14, -17, -20, -22, -25, -28, -31, -33, -35, -37, -40, -41, -43, -45, -46, -48,
-49, -50, -51, -52, -53, -54, -54, -55, -55, -55, -55, -56, -55, -55, -55, -55,
-54, -54, -53, -53, -52, -51, -50, -49, -48, -47, -46, -45, -41, -38, -34, -30,
-26, -22, -19, -17, -12, -9, -6, -3, 0, 4, 6, 9, 12, 15, 16, 20, 21, 24, 26, 27,
29, 31, 33, 34, 36, 36, 37, 39, 40, 40, 41, 41, 42, 41, 43, 42, 42, 42, 42, 41,
41, 40, 40, 38, 37, 35, 33, 32, 30, 28, 27, 25, 23, 21, 21, 17, 17, 14, 12, 10,
9, 7, 6, 4, 1, 0, -2, -4, -5, -7, -8, -10, -12, -13, -15, -15, -17, -18, -19,
-20, -21, -22, -23, -24, -24, -24, -25, -25, -25, -25, -25, -25, -24, -24, -24,
-22, -22, -21, -22, -20, -18, -18, -17, -16, -14, -14, -12, -11, -8, -8, -6, -4,
-3, -1, 1, 2, 4, 6, 6, 8, 9, 12, 13, 14, 16, 17, 18, 19, 20, 22, 23, 23, 25, 25,
26, 26, 27, 28, 28, 28, 28, 28, 27, 28, 27, 27, 26, 25, 25, 24, 22, 22, 20, 18,
17, 15, 14, 12, 10, 8, 6, 3, 2, -1, -3, -6, -8, -11, -14, -17, -19, -21, -24,
-27, -30, -33, -35, -38, -41, -43, -45, -48, -51, -52, -55, -57, -59, -61, -62,
-64, -64, -67, -68, -69, -70, -71, -71, -71, -72, -72, -72, -72, -72, -71, -69,
-68, -68, -65, -65, -63, -60, -59, -55, -54, -51, -47, -46, -42, -38, -34, -30,
-28, -23, -19, -15, -10, -6, -1, };

#endif /* AKWF_1320_512_H_ */
