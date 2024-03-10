#ifndef AKWF_1960_512_H_
#define AKWF_1960_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1960_512_NUM_CELLS 512
#define AKWF_1960_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1960_512_DATA [] = {0,
2, 3, 4, 6, 7, 7, 8, 9, 10, 11, 12, 13, 13, 14, 16, 17, 17, 18, 19, 20, 20, 22,
24, 24, 25, 26, 27, 27, 29, 30, 32, 33, 34, 35, 37, 38, 39, 40, 41, 42, 44, 45,
45, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 58, 59, 59, 61, 62, 62, 64, 65, 66,
67, 68, 68, 70, 71, 72, 74, 74, 76, 76, 78, 79, 80, 82, 82, 83, 84, 86, 87, 88,
89, 89, 91, 92, 93, 93, 94, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 107,
108, 110, 110, 112, 113, 114, 115, 116, 117, 118, 120, 121, 122, 123, 124, 125,
125, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
126, 125, 125, 124, 123, 123, 122, 122, 121, 120, 119, 118, 117, 116, 116, 115,
114, 114, 112, 112, 110, 110, 110, 108, 107, 107, 106, 106, 104, 103, 102, 101,
101, 100, 99, 97, 97, 96, 95, 94, 93, 92, 91, 90, 88, 88, 86, 85, 84, 84, 82,
81, 79, 79, 77, 77, 76, 75, 74, 73, 71, 71, 69, 69, 67, 66, 66, 64, 63, 61, 60,
60, 59, 58, 57, 56, 54, 54, 52, 51, 50, 49, 48, 47, 45, 45, 43, 43, 41, 40, 40,
38, 37, 37, 35, 33, 33, 32, 31, 29, 28, 28, 27, 25, 24, 23, 22, 21, 20, 19, 17,
17, 15, 14, 13, 12, 12, 10, 9, 7, 7, 6, 4, 3, 3, 1, 0, -1, -2, -3, -4, -6, -7,
-7, -8, -9, -10, -12, -13, -14, -15, -16, -18, -18, -19, -20, -21, -23, -24,
-25, -26, -28, -28, -30, -30, -31, -33, -33, -36, -36, -37, -37, -40, -40, -41,
-42, -43, -44, -45, -46, -48, -49, -50, -51, -52, -52, -54, -55, -57, -56, -58,
-59, -60, -62, -63, -64, -65, -67, -68, -68, -69, -70, -72, -73, -74, -75, -76,
-77, -79, -79, -80, -82, -83, -83, -84, -86, -86, -87, -89, -90, -91, -92, -93,
-94, -94, -96, -98, -99, -99, -100, -101, -102, -103, -104, -105, -106, -109,
-110, -111, -113, -113, -115, -116, -117, -118, -119, -120, -121, -122, -122,
-124, -124, -125, -125, -126, -126, -127, -128, -127, -127, -127, -127, -128,
-127, -127, -127, -126, -126, -126, -125, -125, -124, -123, -123, -122, -122,
-121, -120, -120, -119, -118, -118, -116, -116, -114, -114, -114, -113, -111,
-111, -109, -109, -107, -106, -106, -105, -103, -103, -101, -101, -100, -99,
-98, -97, -96, -95, -93, -93, -92, -91, -90, -89, -88, -87, -87, -86, -84, -83,
-82, -81, -81, -79, -78, -77, -76, -75, -74, -73, -71, -71, -69, -68, -68, -66,
-64, -63, -62, -62, -59, -58, -58, -57, -56, -55, -54, -53, -52, -51, -50, -49,
-48, -46, -45, -45, -44, -43, -41, -41, -40, -39, -38, -37, -36, -35, -34, -33,
-31, -30, -29, -28, -27, -25, -23, -22, -21, -19, -18, -16, -15, -13, -11, -10,
-9, -7, -6, -4, -3, -2, 0, };

#endif /* AKWF_1960_512_H_ */