#ifndef AKWF_1962_512_H_
#define AKWF_1962_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1962_512_NUM_CELLS 512
#define AKWF_1962_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1962_512_DATA [] = {0,
2, 4, 6, 8, 11, 12, 14, 15, 17, 19, 20, 22, 23, 24, 26, 27, 27, 29, 31, 31, 33,
35, 36, 37, 38, 40, 41, 42, 43, 44, 46, 47, 48, 49, 51, 52, 54, 55, 56, 58, 58,
59, 61, 61, 63, 64, 65, 66, 66, 68, 68, 70, 69, 72, 71, 74, 74, 74, 76, 76, 77,
78, 79, 79, 81, 82, 82, 84, 84, 85, 86, 87, 88, 89, 91, 91, 92, 93, 94, 94, 96,
97, 97, 99, 100, 100, 100, 101, 102, 103, 103, 103, 104, 105, 106, 106, 107,
108, 109, 109, 110, 111, 112, 112, 113, 114, 114, 115, 116, 117, 118, 118, 119,
120, 121, 122, 123, 124, 124, 125, 125, 126, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 126, 125, 125, 124, 124, 123, 122, 122, 121, 120,
120, 119, 117, 117, 117, 115, 113, 112, 112, 111, 110, 109, 108, 108, 106, 105,
105, 104, 103, 103, 101, 101, 99, 99, 97, 96, 95, 94, 94, 93, 92, 91, 91, 90,
89, 87, 88, 87, 86, 84, 84, 83, 83, 81, 81, 80, 79, 78, 78, 77, 76, 75, 74, 73,
72, 71, 70, 69, 67, 68, 66, 65, 64, 63, 62, 62, 60, 59, 58, 57, 57, 55, 54, 53,
52, 50, 50, 48, 48, 47, 45, 45, 43, 42, 41, 41, 41, 39, 38, 37, 36, 33, 33, 32,
30, 29, 28, 26, 25, 24, 22, 21, 19, 17, 16, 14, 12, 11, 10, 8, 5, 3, 2, 0, -1,
-4, -5, -6, -9, -10, -12, -14, -16, -18, -20, -21, -23, -24, -26, -27, -29, -31,
-32, -34, -35, -36, -38, -40, -40, -42, -44, -45, -46, -47, -47, -50, -51, -52,
-53, -54, -54, -56, -57, -59, -60, -60, -61, -62, -63, -64, -65, -66, -67, -68,
-68, -70, -70, -72, -73, -74, -75, -76, -77, -77, -79, -79, -80, -82, -82, -84,
-84, -85, -87, -88, -88, -89, -89, -91, -92, -92, -94, -94, -95, -95, -96, -97,
-98, -99, -100, -100, -100, -102, -102, -103, -103, -104, -105, -105, -106,
-108, -108, -109, -110, -110, -111, -113, -113, -114, -115, -115, -116, -117,
-118, -118, -120, -120, -121, -122, -121, -123, -123, -123, -125, -126, -125,
-126, -127, -127, -127, -128, -128, -128, -128, -128, -127, -127, -127, -127,
-127, -126, -125, -125, -124, -124, -123, -122, -122, -121, -120, -119, -117,
-117, -116, -115, -115, -113, -112, -111, -110, -109, -108, -107, -106, -105,
-104, -103, -102, -101, -100, -100, -98, -97, -96, -95, -95, -94, -94, -92, -92,
-92, -91, -90, -90, -89, -88, -87, -86, -86, -85, -84, -83, -81, -81, -80, -80,
-78, -78, -77, -75, -74, -74, -72, -71, -70, -68, -67, -67, -65, -65, -64, -63,
-62, -60, -60, -59, -58, -57, -57, -56, -55, -54, -53, -53, -52, -51, -51, -50,
-49, -48, -47, -46, -45, -44, -42, -41, -39, -38, -37, -35, -34, -32, -30, -29,
-26, -24, -21, -20, -18, -15, -14, -12, -9, -7, -4, -4, 0, };

#endif /* AKWF_1962_512_H_ */
