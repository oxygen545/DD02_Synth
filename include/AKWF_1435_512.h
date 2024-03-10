#ifndef AKWF_1435_512_H_
#define AKWF_1435_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1435_512_NUM_CELLS 512
#define AKWF_1435_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1435_512_DATA [] = {1,
1, 3, 4, 4, 6, 7, 8, 10, 11, 12, 13, 13, 16, 17, 18, 18, 20, 22, 23, 25, 26, 26,
29, 29, 30, 32, 34, 35, 37, 38, 39, 42, 42, 44, 46, 46, 48, 50, 52, 53, 54, 55,
58, 59, 61, 62, 63, 65, 67, 68, 69, 71, 72, 73, 75, 77, 78, 79, 82, 82, 84, 86,
87, 88, 90, 91, 93, 95, 95, 97, 99, 100, 100, 102, 103, 105, 106, 106, 108, 109,
110, 111, 112, 112, 114, 115, 116, 117, 118, 118, 120, 119, 121, 121, 122, 124,
124, 124, 124, 125, 125, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 126, 127, 125, 126, 126, 125, 124, 124, 123,
122, 121, 121, 120, 119, 118, 117, 117, 116, 114, 113, 113, 112, 110, 109, 108,
107, 105, 104, 103, 102, 100, 99, 96, 96, 94, 92, 91, 90, 88, 86, 84, 82, 81,
79, 78, 75, 74, 71, 70, 69, 66, 65, 62, 61, 59, 57, 56, 54, 51, 49, 47, 46, 44,
41, 40, 38, 37, 34, 33, 31, 30, 27, 25, 23, 21, 20, 18, 16, 15, 12, 11, 10, 8,
7, 6, 4, 3, 1, 0, -1, -3, -4, -6, -7, -7, -8, -10, -11, -12, -12, -13, -15, -16,
-16, -17, -18, -18, -19, -18, -18, -16, -19, -25, -28, -29, -28, -28, -29, -29,
-30, -30, -30, -31, -32, -33, -34, -34, -34, -35, -38, -32, -18, -6, -12, -22,
-25, -25, -24, -24, -24, -23, -22, -22, -22, -22, -21, -21, -21, -20, -21, -20,
-21, -20, -21, -20, -21, -21, -21, -22, -22, -22, -23, -23, -24, -24, -25, -24,
-25, -27, -27, -28, -29, -29, -30, -32, -33, -33, -35, -36, -37, -38, -40, -40,
-42, -43, -45, -47, -48, -49, -51, -53, -54, -57, -58, -59, -62, -63, -65, -67,
-69, -71, -74, -75, -78, -79, -82, -84, -86, -88, -91, -93, -95, -97, -99, -108,
-103, -77, -54, -59, -79, -89, -90, -89, -90, -90, -89, -90, -90, -90, -90, -91,
-90, -91, -91, -91, -92, -92, -91, -91, -90, -91, -91, -92, -93, -92, -94, -95,
-95, -95, -96, -96, -96, -97, -97, -99, -98, -99, -101, -100, -101, -101, -102,
-102, -103, -102, -102, -103, -102, -103, -103, -103, -103, -102, -102, -102,
-102, -101, -101, -100, -100, -99, -100, -98, -98, -97, -97, -97, -94, -94, -93,
-92, -92, -89, -89, -87, -86, -85, -84, -82, -81, -79, -77, -76, -74, -73, -71,
-68, -67, -64, -62, -60, -58, -56, -54, -52, -48, -46, -44, -41, -39, -33, -31,
-38, -54, -63, -57, -48, -45, -45, -43, -42, -42, -41, -40, -40, -40, -39, -39,
-38, -38, -37, -38, -36, -36, -36, -35, -34, -34, -33, -33, -33, -32, -31, -31,
-30, -30, -29, -28, -28, -27, -27, -25, -25, -25, -24, -23, -22, -21, -20, -20,
-19, -18, -18, -16, -16, -16, -14, -13, -12, -12, -11, -10, -8, -8, -7, -6, -5,
-4, -2, -2, -1, -1, };

#endif /* AKWF_1435_512_H_ */