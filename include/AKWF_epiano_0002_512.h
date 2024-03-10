#ifndef AKWF_epiano_0002_512_H_
#define AKWF_epiano_0002_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_epiano_0002_512_NUM_CELLS 512
#define AKWF_epiano_0002_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_epiano_0002_512_DATA
[] = {0, 1, 3, 4, 3, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 21,
21, 22, 23, 24, 26, 26, 26, 28, 29, 30, 30, 31, 33, 34, 35, 36, 37, 37, 39, 39,
40, 42, 43, 43, 44, 45, 47, 48, 48, 49, 51, 52, 52, 54, 55, 55, 55, 57, 58, 59,
60, 62, 62, 63, 63, 64, 67, 67, 69, 69, 70, 70, 71, 72, 74, 75, 75, 77, 77, 79,
79, 81, 80, 82, 83, 84, 85, 86, 87, 88, 87, 89, 89, 91, 92, 92, 93, 94, 94, 95,
96, 96, 97, 98, 99, 100, 99, 101, 102, 102, 103, 103, 103, 103, 106, 105, 106,
107, 107, 107, 109, 108, 109, 109, 110, 109, 110, 110, 111, 112, 111, 111, 111,
112, 111, 112, 112, 111, 112, 112, 111, 112, 112, 110, 110, 110, 109, 110, 110,
109, 108, 107, 107, 106, 106, 105, 104, 104, 102, 101, 100, 100, 98, 97, 96, 95,
94, 91, 91, 89, 88, 86, 85, 82, 81, 79, 78, 76, 74, 72, 71, 68, 67, 64, 62, 60,
57, 56, 53, 51, 48, 46, 44, 43, 40, 38, 36, 33, 31, 29, 27, 24, 22, 21, 19, 16,
15, 12, 11, 9, 7, 6, 3, 2, 0, -1, -1, -3, -5, -5, -7, -8, -9, -9, -11, -11, -12,
-12, -13, -14, -14, -15, -15, -15, -16, -15, -15, -16, -16, -15, -15, -14, -15,
-13, -13, -12, -12, -12, -11, -10, -10, -9, -9, -7, -7, -6, -5, -4, -4, -3, -2,
-2, -1, 0, 1, 2, 2, 3, 4, 5, 5, 6, 7, 8, 8, 9, 9, 9, 10, 10, 11, 11, 11, 11, 12,
12, 12, 12, 12, 12, 11, 11, 11, 10, 11, 10, 9, 9, 8, 7, 6, 5, 4, 3, 2, 1, -1,
-2, -3, -4, -6, -8, -9, -12, -13, -14, -17, -18, -21, -23, -25, -27, -28, -31,
-33, -35, -37, -41, -44, -45, -48, -50, -53, -56, -58, -60, -63, -64, -68, -70,
-73, -75, -78, -79, -82, -84, -87, -90, -92, -93, -96, -97, -99, -101, -103,
-105, -107, -109, -110, -113, -114, -115, -115, -118, -118, -120, -121, -122,
-123, -123, -124, -125, -126, -126, -126, -128, -127, -127, -128, -128, -128,
-128, -128, -128, -128, -127, -127, -127, -127, -127, -125, -125, -124, -124,
-123, -123, -122, -121, -121, -120, -118, -118, -117, -117, -115, -114, -113,
-112, -112, -111, -110, -109, -106, -106, -106, -103, -102, -102, -101, -99,
-98, -97, -96, -94, -93, -92, -91, -90, -88, -88, -87, -86, -84, -83, -82, -80,
-79, -77, -76, -76, -75, -73, -72, -70, -70, -69, -68, -67, -64, -63, -62, -62,
-61, -60, -58, -56, -56, -55, -54, -53, -52, -51, -50, -49, -47, -46, -45, -44,
-43, -42, -41, -40, -39, -37, -37, -35, -35, -33, -32, -31, -30, -29, -28, -27,
-26, -25, -24, -23, -23, -21, -20, -19, -19, -17, -16, -15, -14, -13, -12, -11,
-10, -9, -9, -7, -7, -4, -4, -3, -2, -1, -1, };

#endif /* AKWF_epiano_0002_512_H_ */
