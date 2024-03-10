#ifndef AKWF_1229_512_H_
#define AKWF_1229_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1229_512_NUM_CELLS 512
#define AKWF_1229_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1229_512_DATA [] = {2,
4, 7, 11, 14, 17, 18, 21, 26, 28, 30, 32, 35, 38, 40, 43, 46, 48, 50, 52, 54,
56, 57, 59, 61, 62, 64, 66, 67, 69, 71, 71, 72, 75, 75, 76, 77, 78, 79, 80, 81,
81, 82, 82, 83, 83, 85, 85, 85, 84, 86, 85, 87, 87, 87, 87, 87, 87, 87, 87, 87,
87, 87, 87, 87, 87, 86, 86, 86, 86, 86, 85, 85, 85, 85, 85, 85, 85, 84, 84, 83,
83, 82, 82, 83, 82, 82, 81, 82, 80, 81, 80, 80, 80, 79, 79, 79, 79, 79, 78, 78,
78, 78, 78, 77, 77, 77, 76, 77, 76, 76, 76, 76, 76, 75, 76, 76, 76, 76, 76, 77,
76, 75, 77, 76, 76, 76, 76, 76, 76, 75, 76, 75, 75, 75, 75, 74, 75, 75, 74, 74,
74, 74, 74, 73, 73, 73, 72, 71, 71, 71, 70, 70, 70, 70, 69, 69, 68, 67, 67, 65,
65, 64, 63, 63, 62, 61, 61, 60, 58, 57, 56, 56, 55, 54, 53, 52, 51, 50, 48, 48,
47, 45, 44, 43, 43, 41, 40, 39, 39, 37, 35, 35, 34, 32, 31, 30, 30, 28, 27, 26,
25, 23, 23, 21, 21, 20, 20, 18, 18, 16, 16, 14, 14, 13, 12, 12, 12, 11, 10, 10,
10, 10, 8, 9, 8, 8, 7, 8, 7, 7, 7, 6, 7, 6, 7, 7, 7, 7, 7, 7, 8, 7, 7, 9, 8, 8,
8, 8, 9, 9, 9, 10, 9, 10, 10, 10, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 12,
12, 12, 12, 12, 12, 12, 12, 11, 11, 12, 11, 10, 9, 10, 9, 8, 8, 7, 7, 7, 6, 5,
5, 4, 3, 3, 1, 0, -1, -2, -2, -3, -4, -5, -6, -6, -7, -9, -10, -10, -12, -13,
-14, -15, -17, -18, -18, -20, -21, -22, -23, -24, -25, -27, -28, -29, -30, -31,
-33, -33, -35, -35, -37, -38, -39, -40, -42, -42, -44, -44, -45, -46, -47, -48,
-49, -50, -51, -51, -52, -53, -53, -55, -55, -56, -57, -58, -58, -58, -60, -59,
-60, -60, -61, -61, -61, -62, -62, -62, -62, -63, -64, -64, -63, -63, -63, -63,
-63, -63, -62, -63, -63, -62, -62, -62, -62, -62, -62, -62, -62, -61, -60, -60,
-60, -61, -60, -60, -61, -60, -59, -61, -61, -60, -60, -61, -62, -63, -64, -65,
-65, -67, -68, -68, -70, -72, -72, -75, -77, -79, -80, -82, -84, -85, -87, -89,
-92, -94, -94, -97, -99, -101, -103, -105, -106, -108, -110, -112, -113, -114,
-117, -117, -118, -120, -121, -123, -123, -124, -124, -126, -126, -127, -128,
-127, -128, -128, -128, -128, -128, -128, -127, -126, -125, -126, -125, -124,
-123, -122, -120, -119, -118, -117, -114, -114, -112, -110, -108, -106, -105,
-101, -100, -97, -95, -93, -90, -89, -85, -83, -81, -78, -75, -73, -70, -67,
-64, -61, -59, -55, -53, -50, -46, -43, -39, -38, -35, -31, -28, -25, -22, -19,
-16, -13, -10, -6, -3, -1, };

#endif /* AKWF_1229_512_H_ */
