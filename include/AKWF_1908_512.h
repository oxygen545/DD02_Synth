#ifndef AKWF_1908_512_H_
#define AKWF_1908_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1908_512_NUM_CELLS 512
#define AKWF_1908_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1908_512_DATA [] = {1,
2, 4, 5, 6, 7, 9, 11, 11, 12, 14, 15, 15, 17, 18, 18, 20, 21, 21, 22, 23, 24,
24, 25, 25, 25, 26, 26, 25, 27, 27, 26, 27, 27, 26, 26, 26, 26, 27, 26, 27, 25,
26, 26, 26, 26, 25, 25, 25, 25, 24, 23, 24, 24, 23, 23, 22, 23, 23, 22, 22, 22,
22, 22, 22, 22, 22, 22, 22, 22, 22, 24, 24, 25, 25, 26, 27, 27, 28, 28, 30, 32,
33, 34, 35, 37, 37, 37, 39, 40, 42, 44, 44, 46, 47, 48, 50, 51, 52, 52, 54, 55,
56, 56, 58, 58, 60, 61, 63, 63, 64, 65, 66, 66, 67, 68, 68, 70, 69, 71, 71, 72,
71, 72, 73, 73, 74, 74, 74, 74, 74, 74, 75, 75, 74, 74, 74, 74, 74, 74, 74, 74,
73, 73, 73, 73, 73, 72, 72, 71, 72, 71, 71, 71, 71, 72, 71, 71, 71, 71, 71, 72,
71, 71, 71, 72, 71, 72, 72, 72, 73, 72, 73, 74, 75, 75, 76, 76, 77, 79, 79, 80,
81, 82, 84, 85, 86, 88, 89, 90, 91, 92, 94, 96, 97, 98, 101, 101, 103, 106, 107,
108, 110, 112, 112, 114, 115, 117, 118, 120, 122, 123, 125, 126, 125, 126, 126,
125, 125, 125, 126, 126, 125, 125, 126, 126, 125, 126, 126, 125, 125, 125, 125,
124, 121, 118, 114, 111, 107, 101, 97, 91, 85, 80, 74, 67, 62, 55, 49, 43, 36,
30, 23, 16, 9, 4, -3, -9, -16, -21, -28, -33, -38, -43, -48, -53, -58, -64, -68,
-72, -76, -81, -85, -89, -93, -97, -100, -104, -107, -110, -113, -115, -118,
-120, -122, -124, -126, -127, -128, -128, -128, -128, -128, -128, -128, -127,
-127, -127, -128, -127, -128, -127, -128, -128, -128, -125, -124, -124, -122,
-121, -119, -117, -116, -114, -113, -112, -111, -109, -107, -106, -103, -102,
-100, -99, -97, -95, -93, -92, -90, -89, -87, -86, -85, -84, -82, -81, -79, -78,
-77, -77, -75, -75, -73, -73, -72, -71, -72, -71, -71, -69, -70, -70, -69, -70,
-71, -71, -70, -70, -70, -70, -70, -71, -71, -71, -71, -72, -72, -72, -72, -72,
-73, -73, -73, -74, -74, -75, -73, -74, -75, -75, -74, -76, -75, -76, -76, -75,
-75, -75, -75, -75, -75, -75, -74, -73, -73, -72, -72, -71, -70, -69, -69, -67,
-66, -65, -64, -62, -61, -60, -58, -56, -55, -54, -52, -51, -49, -48, -47, -45,
-45, -42, -41, -41, -39, -38, -37, -36, -35, -34, -33, -32, -31, -31, -30, -29,
-28, -27, -27, -27, -27, -25, -25, -24, -24, -24, -23, -23, -23, -23, -22, -22,
-22, -22, -21, -22, -21, -23, -22, -23, -22, -22, -22, -23, -23, -23, -24, -23,
-23, -23, -24, -24, -24, -24, -24, -24, -24, -23, -23, -23, -23, -23, -23, -23,
-22, -22, -21, -21, -20, -21, -20, -19, -19, -18, -17, -18, -17, -16, -15, -15,
-14, -13, -11, -11, -10, -9, -8, -7, -6, -5, -3, -2, -1, 0, };

#endif /* AKWF_1908_512_H_ */