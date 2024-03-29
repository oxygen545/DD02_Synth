#ifndef AKWF_1424_512_H_
#define AKWF_1424_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1424_512_NUM_CELLS 512
#define AKWF_1424_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1424_512_DATA [] = {0,
2, 6, 8, 10, 13, 15, 18, 20, 23, 26, 28, 32, 37, 38, 40, 43, 45, 48, 50, 51, 54,
56, 57, 59, 60, 63, 64, 65, 67, 68, 69, 69, 71, 72, 73, 75, 74, 76, 77, 79, 79,
79, 81, 81, 81, 82, 82, 83, 84, 84, 84, 86, 85, 86, 87, 87, 88, 88, 88, 88, 88,
88, 87, 88, 88, 89, 88, 88, 89, 88, 88, 88, 87, 86, 87, 87, 86, 86, 86, 88, 88,
88, 90, 88, 89, 89, 89, 88, 90, 89, 89, 90, 90, 91, 91, 90, 91, 91, 90, 91, 90,
90, 90, 89, 90, 90, 88, 88, 87, 87, 87, 87, 87, 87, 87, 87, 86, 87, 87, 87, 87,
86, 86, 86, 87, 87, 87, 86, 85, 84, 85, 84, 84, 83, 83, 82, 81, 81, 80, 79, 79,
76, 76, 74, 74, 72, 72, 70, 70, 68, 68, 66, 65, 63, 62, 59, 58, 56, 56, 55, 54,
51, 49, 48, 46, 45, 43, 42, 41, 38, 36, 35, 33, 32, 30, 30, 28, 27, 26, 25, 24,
23, 19, 17, 17, 15, 15, 13, 12, 11, 9, 7, 6, 4, 3, 2, 0, 0, -2, -4, -4, -5, -6,
-5, -5, -6, -8, -8, -8, -8, -9, -9, -8, -9, -8, -8, -8, -6, -7, -7, -8, -8, -8,
-9, -9, -9, -9, -9, -9, -7, -7, -6, -4, -4, -4, -5, -3, -3, -2, -2, 0, 1, 2, 2,
4, 5, 5, 7, 7, 7, 8, 8, 9, 9, 11, 11, 12, 12, 12, 13, 13, 14, 14, 13, 13, 13,
12, 12, 13, 13, 14, 14, 13, 14, 14, 14, 14, 14, 12, 13, 13, 13, 13, 11, 10, 10,
10, 9, 8, 8, 9, 6, 7, 5, 5, 4, 3, 2, -1, -2, -3, -5, -5, -7, -8, -11, -13, -15,
-16, -17, -19, -21, -23, -24, -26, -27, -29, -30, -32, -33, -35, -37, -38, -39,
-40, -42, -44, -46, -46, -47, -49, -50, -52, -53, -53, -56, -56, -57, -58, -59,
-60, -61, -62, -63, -65, -66, -68, -69, -70, -70, -71, -72, -73, -74, -75, -75,
-75, -77, -77, -78, -78, -79, -81, -80, -81, -82, -84, -84, -86, -86, -86, -86,
-87, -87, -88, -88, -89, -89, -90, -92, -93, -95, -95, -96, -96, -96, -96, -97,
-97, -97, -99, -100, -100, -101, -101, -102, -102, -102, -103, -103, -103, -104,
-103, -104, -105, -105, -108, -109, -110, -111, -112, -113, -113, -114, -115,
-115, -116, -117, -118, -119, -120, -121, -122, -123, -123, -124, -124, -124,
-124, -125, -125, -126, -126, -127, -127, -127, -127, -128, -128, -128, -127,
-126, -126, -126, -127, -127, -126, -127, -128, -127, -127, -126, -127, -125,
-124, -124, -121, -121, -121, -121, -121, -119, -117, -115, -114, -114, -113,
-112, -109, -106, -105, -104, -104, -101, -100, -97, -94, -93, -91, -89, -88,
-84, -81, -76, -73, -71, -69, -67, -63, -61, -57, -54, -50, -49, -46, -44, -40,
-38, -35, -32, -29, -26, -25, -20, -18, -16, -13, -12, -7, -5, -1, };

#endif /* AKWF_1424_512_H_ */
