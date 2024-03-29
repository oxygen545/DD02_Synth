#ifndef AKWF_1413_512_H_
#define AKWF_1413_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1413_512_NUM_CELLS 512
#define AKWF_1413_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1413_512_DATA [] = {0,
1, 2, 4, 5, 7, 8, 10, 10, 11, 13, 14, 15, 17, 19, 19, 21, 22, 23, 24, 26, 27,
28, 30, 31, 32, 34, 34, 36, 37, 39, 40, 41, 42, 43, 44, 46, 47, 49, 49, 51, 51,
53, 54, 56, 57, 57, 59, 61, 62, 62, 64, 65, 67, 68, 69, 70, 71, 72, 74, 75, 77,
77, 78, 80, 81, 82, 83, 84, 85, 86, 87, 89, 89, 91, 92, 93, 94, 95, 96, 98, 98,
99, 101, 102, 103, 104, 105, 106, 107, 107, 109, 110, 111, 112, 112, 114, 114,
115, 116, 117, 119, 119, 120, 122, 123, 123, 124, 125, 125, 126, 127, 127, 124,
119, 112, 105, 98, 89, 81, 75, 67, 60, 54, 47, 42, 37, 32, 27, 23, 19, 14, 11,
7, 4, 2, 0, -2, -4, -7, -8, -9, -9, -11, -11, -12, -12, -13, -14, -13, -13, -13,
-13, -13, -13, -13, -11, -11, -11, -10, -9, -8, -7, -7, -6, -5, -3, -3, -2, 0,
0, 2, 3, 4, 5, 6, 7, 9, 11, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 24, 25, 26,
28, 29, 30, 31, 33, 34, 35, 37, 37, 39, 40, 41, 43, 44, 45, 46, 48, 49, 50, 52,
52, 54, 56, 56, 57, 59, 60, 62, 62, 64, 65, 66, 67, 69, 69, 72, 72, 73, 75, 75,
76, 78, 80, 80, 82, 81, 83, 84, 85, 81, 77, 70, 62, 54, 45, 37, 29, 23, 15, 8,
3, -3, -9, -13, -19, -24, -28, -31, -36, -39, -43, -45, -48, -51, -53, -55, -57,
-59, -60, -60, -62, -62, -63, -63, -64, -65, -64, -64, -64, -64, -64, -63, -63,
-63, -62, -63, -61, -62, -60, -59, -59, -57, -56, -56, -56, -54, -52, -52, -50,
-50, -48, -47, -47, -44, -44, -43, -42, -41, -39, -37, -37, -36, -33, -33, -31,
-31, -29, -29, -27, -25, -23, -23, -22, -20, -19, -18, -17, -16, -14, -12, -12,
-11, -9, -8, -6, -5, -4, -3, -1, 0, 1, 2, 4, 6, 6, 8, 9, 10, 11, 13, 14, 14, 17,
17, 19, 21, 22, 24, 24, 25, 27, 28, 30, 31, 32, 34, 34, 30, 25, 19, 11, 3, -4,
-11, -19, -26, -33, -38, -43, -48, -53, -58, -61, -66, -70, -73, -77, -80, -84,
-87, -90, -92, -95, -96, -99, -101, -102, -103, -104, -106, -106, -108, -108,
-108, -109, -108, -108, -109, -108, -109, -109, -108, -107, -107, -107, -106,
-106, -106, -105, -104, -103, -102, -102, -101, -100, -99, -99, -97, -96, -95,
-94, -94, -93, -91, -90, -89, -89, -87, -87, -85, -84, -83, -82, -81, -80, -79,
-77, -77, -76, -75, -73, -72, -71, -70, -68, -68, -67, -65, -64, -62, -62, -61,
-59, -59, -57, -55, -55, -54, -53, -52, -50, -48, -48, -45, -45, -44, -42, -42,
-41, -39, -38, -36, -35, -34, -32, -32, -30, -29, -28, -26, -25, -23, -23, -21,
-20, -19, -18, -17, -15, -13, -13, -11, -9, -8, -7, -6, -5, -4, -2, -1, };

#endif /* AKWF_1413_512_H_ */
