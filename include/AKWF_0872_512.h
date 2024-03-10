#ifndef AKWF_0872_512_H_
#define AKWF_0872_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0872_512_NUM_CELLS 512
#define AKWF_0872_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0872_512_DATA [] = {0,
2, 3, 5, 7, 9, 10, 12, 14, 16, 18, 20, 23, 25, 27, 30, 33, 34, 37, 39, 43, 45,
48, 51, 54, 56, 60, 63, 66, 68, 72, 75, 77, 80, 84, 86, 88, 91, 93, 95, 99, 100,
103, 104, 107, 108, 111, 112, 113, 115, 116, 117, 119, 120, 122, 122, 123, 124,
125, 125, 125, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
126, 125, 124, 124, 123, 122, 120, 120, 118, 116, 114, 113, 111, 108, 107, 105,
103, 100, 98, 96, 93, 91, 87, 85, 81, 79, 76, 72, 69, 66, 63, 59, 57, 53, 49,
45, 43, 39, 35, 32, 29, 24, 22, 18, 15, 11, 8, 4, 1, -2, -6, -9, -11, -14, -17,
-20, -23, -25, -28, -31, -33, -36, -37, -39, -41, -43, -45, -47, -48, -50, -51,
-52, -53, -54, -54, -54, -57, -56, -57, -57, -57, -58, -56, -57, -56, -55, -55,
-54, -54, -53, -53, -51, -50, -49, -49, -46, -46, -43, -43, -41, -39, -37, -36,
-35, -31, -31, -29, -26, -26, -23, -21, -19, -17, -15, -13, -11, -9, -8, -5, -4,
-2, 0, 2, 3, 5, 7, 9, 10, 12, 12, 15, 16, 17, 18, 19, 22, 22, 23, 24, 25, 25,
26, 28, 28, 29, 29, 29, 29, 30, 29, 29, 29, 28, 28, 28, 28, 26, 26, 25, 25, 23,
22, 20, 19, 17, 16, 14, 12, 9, 7, 5, 3, 1, -2, -4, -6, -9, -12, -15, -16, -20,
-23, -26, -29, -32, -34, -38, -41, -45, -48, -51, -54, -56, -60, -62, -65, -68,
-72, -74, -77, -79, -82, -86, -87, -89, -92, -95, -96, -99, -100, -102, -104,
-105, -106, -108, -109, -110, -110, -112, -112, -112, -112, -113, -113, -112,
-112, -111, -111, -111, -111, -110, -108, -108, -108, -106, -105, -104, -103,
-102, -101, -99, -98, -97, -95, -93, -92, -90, -89, -86, -86, -83, -81, -79,
-77, -76, -74, -71, -69, -67, -65, -62, -61, -60, -57, -55, -54, -51, -49, -46,
-44, -43, -40, -39, -36, -35, -33, -31, -28, -27, -25, -23, -21, -18, -17, -16,
-14, -12, -10, -8, -7, -5, -4, -3, -1, 0, 2, 4, 4, 6, 7, 7, 9, 10, 11, 12, 13,
13, 14, 14, 15, 16, 17, 17, 18, 19, 18, 19, 20, 20, 20, 20, 21, 20, 21, 21, 20,
21, 21, 20, 21, 21, 20, 19, 20, 20, 19, 19, 19, 19, 18, 17, 18, 18, 17, 17, 17,
16, 15, 15, 14, 13, 13, 13, 12, 10, 8, 8, 6, 5, 3, 2, 1, 0, -2, -5, -6, -6, -9,
-11, -11, -13, -14, -15, -16, -17, -18, -18, -18, -19, -19, -19, -20, -19, -19,
-19, -19, -19, -18, -18, -17, -17, -16, -16, -16, -15, -15, -14, -14, -14, -12,
-13, -12, -12, -12, -12, -13, -12, -13, -13, -12, -12, -12, -12, -12, -12, -12,
-12, -12, -12, -12, -12, -13, -12, -12, -11, -11, -11, -10, -9, -9, -8, -7, -6,
-5, -5, -3, -2, 0, };

#endif /* AKWF_0872_512_H_ */