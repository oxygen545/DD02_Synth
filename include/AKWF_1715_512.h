#ifndef AKWF_1715_512_H_
#define AKWF_1715_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1715_512_NUM_CELLS 512
#define AKWF_1715_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1715_512_DATA [] = {3,
8, 11, 17, 21, 25, 30, 34, 38, 43, 47, 51, 56, 60, 63, 67, 72, 75, 78, 82, 86,
89, 92, 95, 98, 101, 103, 106, 108, 109, 111, 113, 116, 116, 119, 119, 119, 121,
122, 122, 123, 124, 123, 123, 123, 123, 121, 121, 120, 119, 117, 115, 113, 110,
109, 107, 105, 102, 100, 96, 93, 90, 88, 84, 81, 77, 73, 69, 65, 61, 58, 53, 50,
47, 42, 39, 35, 31, 27, 22, 18, 15, 11, 7, 3, 0, -5, -8, -11, -16, -19, -22,
-26, -29, -32, -35, -38, -40, -44, -47, -49, -52, -54, -56, -58, -60, -62, -64,
-65, -66, -68, -69, -70, -73, -73, -74, -75, -75, -75, -75, -76, -76, -76, -76,
-76, -75, -75, -75, -74, -74, -74, -73, -73, -72, -72, -71, -70, -69, -68, -66,
-65, -64, -61, -60, -59, -57, -55, -53, -51, -49, -47, -44, -42, -40, -38, -37,
-34, -32, -29, -28, -26, -23, -22, -20, -17, -16, -14, -12, -11, -9, -8, -5, -4,
-3, 0, 1, 2, 3, 5, 7, 9, 10, 10, 12, 14, 15, 16, 19, 19, 21, 22, 23, 25, 26, 27,
29, 30, 31, 32, 32, 34, 34, 36, 36, 37, 37, 38, 39, 40, 40, 40, 41, 41, 42, 41,
41, 41, 40, 40, 40, 40, 39, 39, 38, 37, 37, 35, 34, 34, 33, 31, 31, 28, 28, 26,
25, 23, 22, 21, 19, 17, 15, 14, 13, 11, 9, 8, 7, 5, 5, 2, 2, 0, -1, -3, -3, -5,
-6, -7, -8, -10, -11, -12, -12, -14, -16, -17, -17, -19, -21, -22, -23, -25,
-26, -28, -29, -30, -31, -33, -34, -35, -36, -37, -38, -38, -39, -40, -41, -42,
-42, -42, -43, -43, -44, -44, -44, -44, -45, -44, -45, -44, -44, -45, -43, -45,
-44, -43, -43, -43, -41, -41, -40, -40, -40, -39, -38, -37, -36, -35, -34, -34,
-32, -32, -29, -28, -27, -25, -23, -22, -20, -18, -16, -14, -12, -11, -9, -6,
-4, -1, 0, 2, 4, 7, 9, 12, 14, 16, 19, 22, 24, 27, 29, 33, 35, 38, 40, 42, 45,
49, 50, 53, 56, 59, 62, 64, 66, 69, 72, 74, 76, 78, 80, 82, 84, 86, 87, 90, 90,
92, 92, 93, 94, 95, 96, 96, 97, 96, 96, 97, 96, 96, 95, 95, 94, 94, 92, 91, 90,
87, 86, 84, 82, 79, 78, 75, 72, 70, 66, 63, 59, 57, 53, 49, 46, 43, 40, 36, 32,
28, 25, 21, 16, 12, 8, 4, 0, -4, -8, -12, -16, -20, -25, -29, -33, -37, -42,
-45, -50, -54, -57, -61, -65, -69, -73, -76, -79, -83, -86, -89, -93, -96, -99,
-102, -105, -107, -110, -112, -114, -117, -119, -120, -122, -123, -125, -125,
-126, -128, -128, -128, -128, -128, -127, -127, -127, -126, -125, -124, -123,
-122, -120, -118, -116, -113, -111, -108, -105, -103, -100, -97, -94, -90, -86,
-83, -79, -75, -71, -67, -64, -58, -55, -50, -46, -41, -37, -32, -27, -23, -19,
-13, -9, -4, -1, };

#endif /* AKWF_1715_512_H_ */
