#ifndef AKWF_1217_512_H_
#define AKWF_1217_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1217_512_NUM_CELLS 512
#define AKWF_1217_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1217_512_DATA [] = {1,
7, 10, 16, 19, 24, 28, 31, 36, 40, 45, 49, 54, 58, 63, 66, 71, 74, 78, 82, 85,
89, 91, 93, 97, 99, 102, 102, 106, 107, 109, 111, 112, 114, 114, 115, 116, 116,
117, 115, 115, 114, 112, 111, 108, 106, 103, 101, 98, 94, 91, 88, 84, 81, 78,
73, 68, 63, 59, 53, 47, 41, 35, 29, 22, 16, 10, 4, -1, -6, -13, -16, -22, -26,
-29, -33, -36, -39, -41, -43, -44, -45, -46, -46, -47, -46, -47, -47, -47, -47,
-47, -48, -48, -49, -49, -49, -51, -52, -52, -55, -55, -58, -59, -61, -63, -64,
-67, -68, -70, -70, -70, -71, -71, -69, -68, -65, -64, -60, -56, -53, -50, -45,
-40, -35, -31, -26, -22, -18, -13, -9, -4, -1, 3, 7, 9, 15, 18, 21, 25, 29, 33,
37, 41, 44, 48, 52, 56, 59, 61, 63, 65, 67, 69, 70, 71, 71, 70, 69, 69, 68, 65,
63, 61, 57, 55, 50, 47, 43, 38, 33, 28, 23, 18, 12, 6, 0, -4, -11, -15, -22,
-26, -31, -37, -42, -46, -51, -55, -58, -61, -64, -66, -68, -70, -71, -71, -71,
-70, -69, -67, -65, -62, -59, -56, -53, -50, -46, -42, -37, -34, -30, -26, -22,
-18, -14, -10, -6, -1, 3, 7, 11, 14, 18, 21, 25, 27, 29, 31, 32, 32, 33, 34, 32,
32, 32, 30, 29, 28, 27, 26, 25, 24, 23, 22, 22, 22, 21, 21, 20, 20, 19, 19, 18,
17, 16, 14, 12, 11, 8, 6, 3, 1, -2, -5, -8, -12, -14, -17, -19, -21, -24, -26,
-26, -28, -29, -31, -31, -32, -33, -32, -32, -31, -30, -30, -28, -27, -24, -22,
-19, -15, -11, -7, -3, 2, 8, 12, 17, 21, 27, 31, 36, 39, 44, 46, 49, 52, 55, 56,
58, 59, 60, 60, 61, 60, 60, 58, 58, 56, 54, 53, 50, 48, 45, 42, 39, 36, 32, 27,
22, 18, 12, 7, 1, -5, -11, -17, -23, -29, -36, -43, -50, -55, -62, -67, -72,
-76, -81, -84, -87, -89, -91, -90, -89, -87, -85, -81, -77, -72, -67, -60, -54,
-46, -40, -33, -27, -19, -12, -7, 0, 6, 10, 14, 19, 21, 25, 28, 29, 32, 32, 33,
33, 34, 34, 33, 34, 34, 33, 32, 31, 30, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21,
20, 19, 19, 19, 18, 18, 18, 18, 18, 20, 19, 20, 22, 23, 25, 26, 28, 29, 30, 32,
34, 34, 36, 36, 38, 38, 39, 40, 40, 40, 41, 42, 41, 41, 40, 40, 40, 38, 37, 36,
34, 32, 30, 28, 26, 23, 20, 17, 13, 10, 5, 2, -4, -8, -13, -19, -25, -30, -36,
-40, -47, -53, -59, -66, -72, -78, -83, -89, -94, -99, -104, -108, -112, -116,
-118, -121, -123, -126, -126, -128, -128, -128, -127, -126, -124, -121, -119,
-115, -112, -108, -103, -98, -93, -87, -82, -77, -72, -66, -61, -56, -52, -47,
-42, -38, -34, -29, -26, -21, -17, -13, -8, -4, -1, };

#endif /* AKWF_1217_512_H_ */
