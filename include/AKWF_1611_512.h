#ifndef AKWF_1611_512_H_
#define AKWF_1611_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1611_512_NUM_CELLS 512
#define AKWF_1611_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1611_512_DATA [] =
{15, 43, 59, 71, 77, 82, 85, 88, 90, 91, 93, 94, 95, 96, 98, 99, 101, 102, 103,
104, 105, 107, 108, 110, 110, 111, 114, 114, 115, 116, 117, 120, 120, 121, 123,
125, 125, 127, 127, 127, 127, 125, 124, 124, 122, 121, 119, 119, 118, 116, 115,
114, 113, 111, 110, 108, 108, 106, 105, 103, 102, 101, 100, 98, 97, 95, 95, 94,
92, 91, 90, 89, 87, 86, 84, 80, 41, -10, -36, -53, -61, -66, -69, -70, -69, -69,
-68, -68, -67, -65, -64, -63, -62, -61, -59, -58, -57, -55, -55, -54, -52, -51,
-50, -48, -48, -46, -45, -43, -42, -41, -40, -39, -38, -37, -33, -14, 5, 15, 21,
24, 26, 26, 25, 24, 24, 23, 22, 21, 20, 18, 17, 16, 15, 14, 12, 11, 10, 8, 7, 5,
5, 3, 3, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 2, 3, 4, 4, 6, 7, 8, 10, 11, 11, 13, 14, 15, 17, 18, 19, 21, 22, 23,
24, 25, 26, 28, 30, 30, 31, 32, 34, 35, 36, 38, 38, 40, 41, 42, 43, 45, 45, 47,
49, 49, 51, 52, 53, 54, 55, 57, 58, 59, 60, 62, 63, 64, 65, 67, 67, 68, 69, 71,
63, 20, -22, -43, -58, -67, -73, -76, -79, -82, -83, -84, -86, -87, -88, -90,
-91, -92, -93, -94, -96, -97, -98, -99, -100, -102, -102, -104, -105, -106,
-108, -108, -110, -111, -112, -113, -114, -116, -116, -118, -119, -120, -121,
-123, -124, -125, -125, -126, -127, -126, -126, -126, -126, -127, -126, -126,
-126, -126, -126, -126, -126, -126, -126, -125, -117, -117, -122, -123, -125,
-125, -126, -126, -126, -126, -126, -126, -125, -126, -126, -126, -126, -127,
-127, -127, -125, -125, -125, -123, -122, -121, -120, -119, -119, -117, -115,
-114, -113, -112, -111, -110, -108, -107, -106, -105, -103, -102, -102, -100,
-100, -98, -97, -95, -95, -93, -93, -91, -90, -89, -87, -87, -85, -84, -83, -82,
-81, -79, -79, -70, -26, 15, 38, 52, 59, 63, 64, 65, 64, 65, 63, 63, 61, 59, 59,
58, 56, 55, 54, 53, 52, 51, 49, 48, 47, 45, 44, 43, 42, 42, 40, 39, 37, 37, 36,
34, 33, 31, 30, 29, 27, 27, 26, 25, 23, 22, 20, 20, 18, 17, 16, 15, 13, 11, 10,
10, 8, 6, 6, 5, 3, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0, 0, 0, 1, 0, 0,
0, -1, 0, -1, 0, 0, 0, 1, 1, 2, 3, 5, 5, 7, 8, 9, 11, 12, 12, 14, 15, 17, 18,
20, 21, 22, 23, 23, 26, 27, 28, 29, 31, 27, 6, -11, -21, -27, -32, -35, -37,
-39, -41, -42, -43, -45, -46, -48, -48, -49, -51, -52, -53, -54, -56, -58, -59,
-60, -61, -61, -62, -64, -65, -66, -67, -69, -69, -72, -71, -75, -74, -77, -61,
-14, };

#endif /* AKWF_1611_512_H_ */
