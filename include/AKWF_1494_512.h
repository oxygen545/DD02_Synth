#ifndef AKWF_1494_512_H_
#define AKWF_1494_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1494_512_NUM_CELLS 512
#define AKWF_1494_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1494_512_DATA [] = {0,
2, 3, 6, 8, 9, 10, 12, 14, 14, 16, 17, 17, 19, 19, 20, 21, 22, 22, 22, 23, 24,
25, 25, 26, 26, 27, 27, 27, 28, 29, 29, 30, 30, 31, 32, 32, 34, 34, 35, 35, 36,
38, 38, 40, 41, 42, 43, 44, 46, 48, 49, 51, 53, 55, 56, 58, 60, 62, 64, 66, 68,
71, 72, 74, 77, 78, 80, 81, 83, 85, 87, 89, 89, 92, 92, 93, 93, 94, 94, 95, 95,
93, 94, 94, 92, 90, 89, 87, 86, 84, 81, 78, 77, 73, 70, 67, 64, 60, 58, 55, 50,
48, 43, 41, 38, 34, 32, 28, 26, 23, 21, 18, 16, 14, 13, 10, 9, 8, 6, 5, 5, 5, 4,
4, 5, 4, 6, 7, 7, 8, 10, 11, 13, 15, 16, 18, 18, 21, 23, 25, 27, 29, 32, 34, 36,
38, 40, 42, 45, 47, 49, 51, 53, 55, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 79,
81, 82, 85, 86, 88, 89, 92, 94, 95, 96, 99, 101, 102, 104, 105, 106, 108, 110,
112, 113, 114, 117, 117, 118, 120, 121, 121, 122, 124, 124, 125, 125, 127, 126,
127, 127, 127, 127, 127, 126, 127, 125, 125, 125, 124, 123, 121, 120, 119, 116,
116, 113, 111, 109, 107, 104, 101, 98, 96, 93, 89, 86, 84, 80, 77, 73, 70, 68,
63, 60, 56, 54, 50, 47, 42, 40, 36, 33, 31, 27, 24, 20, 19, 15, 14, 10, 8, 6, 3,
2, -1, -3, -4, -6, -7, -10, -10, -13, -15, -16, -16, -18, -19, -19, -21, -20,
-21, -23, -24, -23, -24, -25, -25, -26, -26, -27, -27, -28, -29, -29, -28, -29,
-30, -30, -31, -32, -34, -33, -35, -36, -36, -38, -38, -40, -40, -42, -43, -45,
-46, -48, -50, -51, -53, -55, -57, -58, -60, -61, -64, -67, -68, -69, -72, -74,
-77, -78, -80, -82, -83, -86, -88, -88, -91, -92, -92, -93, -93, -94, -95, -94,
-95, -94, -93, -93, -92, -91, -90, -87, -86, -84, -82, -79, -77, -75, -72, -68,
-65, -63, -59, -56, -53, -49, -47, -42, -39, -36, -33, -30, -27, -24, -21, -18,
-17, -14, -12, -10, -9, -8, -6, -5, -5, -4, -3, -3, -4, -4, -4, -5, -5, -6, -8,
-8, -9, -11, -13, -15, -16, -18, -21, -22, -25, -26, -29, -31, -33, -35, -37,
-40, -42, -44, -46, -49, -51, -54, -56, -57, -60, -63, -64, -67, -69, -71, -72,
-75, -76, -79, -80, -82, -85, -86, -88, -90, -92, -93, -95, -96, -98, -100,
-102, -104, -105, -106, -108, -109, -111, -113, -115, -115, -117, -118, -120,
-121, -121, -123, -123, -125, -126, -125, -127, -127, -128, -128, -128, -128,
-128, -128, -127, -127, -127, -125, -125, -123, -122, -121, -119, -118, -115,
-114, -112, -109, -107, -105, -101, -98, -96, -93, -89, -87, -84, -80, -76, -74,
-70, -67, -62, -59, -56, -52, -49, -45, -43, -39, -36, -33, -30, -25, -23, -21,
-18, -15, -12, -10, -8, -5, -3, -1, };

#endif /* AKWF_1494_512_H_ */
