#ifndef AKWF_1525_512_H_
#define AKWF_1525_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1525_512_NUM_CELLS 512
#define AKWF_1525_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1525_512_DATA [] = {5,
12, 12, 16, 22, 22, 22, 40, 63, 72, 73, 75, 78, 80, 83, 85, 88, 89, 90, 91, 91,
90, 91, 93, 94, 94, 96, 97, 98, 98, 98, 98, 99, 99, 100, 100, 101, 101, 102,
103, 104, 104, 105, 105, 105, 106, 107, 107, 108, 110, 110, 111, 111, 113, 114,
114, 115, 115, 116, 118, 118, 120, 120, 122, 122, 123, 123, 124, 124, 125, 125,
126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,
126, 123, 115, 106, 103, 104, 104, 104, 104, 104, 102, 99, 97, 94, 92, 90, 89,
88, 87, 88, 87, 86, 85, 83, 82, 81, 79, 79, 78, 78, 78, 78, 79, 77, 78, 77, 77,
76, 76, 76, 75, 76, 76, 75, 76, 75, 76, 75, 74, 74, 74, 73, 73, 72, 73, 72, 71,
70, 69, 68, 67, 67, 66, 66, 64, 63, 62, 61, 60, 58, 57, 56, 55, 55, 53, 52, 51,
50, 50, 48, 47, 47, 45, 44, 43, 43, 42, 42, 41, 40, 40, 39, 40, 39, 39, 38, 38,
38, 37, 37, 37, 36, 36, 36, 36, 36, 36, 36, 36, 35, 36, 34, 35, 35, 35, 34, 34,
33, 33, 34, 31, 31, 31, 30, 29, 28, 27, 26, 26, 25, 24, 23, 23, 21, 20, 19, 19,
17, 16, 15, 15, 14, 12, 11, 11, 10, 9, 9, 9, 7, 7, 6, 5, 4, 4, 3, 4, 3, 2, 1, 2,
1, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -2, -2, -3, -2, -2, -3, -4, -4,
-4, -5, -5, -7, -8, -8, -8, -10, -10, -11, -12, -13, -13, -15, -16, -17, -18,
-18, -19, -21, -21, -23, -23, -24, -25, -26, -27, -28, -28, -29, -29, -30, -31,
-32, -33, -33, -34, -34, -34, -34, -35, -35, -36, -35, -35, -35, -35, -36, -36,
-36, -37, -37, -37, -36, -37, -37, -38, -37, -38, -39, -39, -39, -40, -40, -41,
-41, -42, -42, -43, -45, -44, -46, -46, -47, -48, -49, -50, -52, -52, -54, -55,
-56, -56, -58, -59, -60, -62, -63, -63, -64, -65, -66, -68, -69, -69, -70, -71,
-70, -72, -72, -73, -73, -73, -74, -74, -75, -75, -75, -76, -76, -76, -76, -76,
-75, -76, -76, -76, -77, -77, -78, -78, -78, -79, -78, -79, -79, -79, -80, -82,
-83, -84, -84, -86, -87, -87, -87, -88, -90, -91, -92, -96, -98, -99, -103,
-104, -104, -104, -105, -104, -104, -109, -117, -125, -127, -126, -127, -127,
-128, -128, -128, -128, -128, -127, -128, -127, -128, -127, -127, -126, -127,
-126, -125, -124, -124, -123, -122, -122, -120, -120, -119, -118, -117, -116,
-116, -115, -113, -114, -112, -112, -110, -110, -109, -108, -107, -106, -105,
-105, -105, -104, -103, -104, -103, -102, -101, -101, -101, -99, -100, -98, -98,
-99, -99, -97, -98, -96, -94, -93, -92, -91, -90, -91, -90, -90, -89, -88, -85,
-81, -79, -78, -74, -73, -71, -57, -34, -21, -22, -21, -15, -13, -10, -2, };

#endif /* AKWF_1525_512_H_ */