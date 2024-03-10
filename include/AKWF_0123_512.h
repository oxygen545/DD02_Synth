#ifndef AKWF_0123_512_H_
#define AKWF_0123_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0123_512_NUM_CELLS 512
#define AKWF_0123_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0123_512_DATA [] = {1,
5, 8, 10, 15, 17, 21, 23, 27, 29, 31, 33, 36, 38, 42, 43, 45, 47, 49, 51, 54,
55, 57, 59, 60, 61, 63, 65, 67, 67, 70, 70, 72, 72, 74, 75, 76, 76, 78, 79, 79,
81, 81, 82, 84, 84, 85, 85, 86, 87, 87, 87, 88, 88, 89, 89, 89, 90, 90, 91, 91,
91, 91, 91, 91, 91, 92, 92, 92, 92, 91, 92, 91, 92, 91, 92, 92, 91, 92, 92, 92,
91, 91, 91, 91, 91, 91, 90, 89, 90, 90, 89, 90, 89, 89, 88, 88, 88, 88, 87, 87,
87, 87, 87, 86, 85, 85, 85, 84, 84, 84, 84, 83, 83, 82, 82, 81, 80, 80, 80, 79,
80, 79, 79, 78, 78, 77, 78, 76, 76, 76, 76, 75, 74, 74, 74, 74, 73, 73, 72, 72,
71, 70, 71, 69, 69, 69, 68, 69, 67, 67, 66, 65, 66, 66, 65, 64, 64, 63, 63, 62,
63, 62, 62, 60, 60, 60, 59, 59, 59, 58, 57, 57, 57, 56, 57, 56, 56, 55, 54, 54,
54, 54, 53, 52, 52, 52, 52, 51, 50, 50, 50, 49, 49, 49, 49, 48, 48, 48, 48, 46,
46, 46, 46, 45, 45, 44, 44, 43, 43, 43, 43, 41, 42, 42, 41, 41, 41, 40, 39, 40,
39, 39, 38, 38, 38, 37, 38, 37, 37, 36, 36, 36, 35, 36, 34, 35, 34, 34, 33, 33,
34, 33, 33, 34, 32, 33, 32, 30, 32, 31, 31, 30, 30, 30, 29, 30, 29, 29, 28, 28,
29, 27, 28, 27, 27, 27, 27, 26, 26, 26, 26, 26, 25, 26, 25, 25, 24, 24, 24, 24,
23, 23, 23, 23, 23, 22, 23, 22, 22, 22, 22, 21, 21, 21, 21, 20, 20, 20, 20, 21,
19, 19, 19, 19, 19, 19, 19, 18, 18, 18, 18, 18, 18, 18, 17, 17, 17, 17, 16, 17,
16, 15, 14, 10, 8, 4, -2, -6, -11, -14, -19, -23, -28, -32, -35, -39, -43, -46,
-50, -53, -56, -60, -63, -65, -68, -71, -74, -76, -79, -81, -84, -86, -88, -90,
-92, -94, -96, -98, -99, -102, -102, -104, -105, -107, -108, -110, -111, -112,
-114, -114, -116, -116, -117, -118, -120, -120, -121, -121, -122, -122, -123,
-124, -124, -125, -126, -125, -126, -126, -127, -127, -128, -127, -128, -127,
-128, -128, -128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128,
-127, -127, -127, -126, -127, -125, -126, -126, -125, -125, -125, -125, -124,
-124, -124, -123, -123, -123, -121, -121, -121, -120, -120, -120, -120, -119,
-118, -117, -118, -116, -115, -115, -116, -114, -114, -114, -113, -112, -111,
-112, -110, -110, -109, -109, -108, -108, -107, -106, -106, -105, -105, -104,
-103, -103, -103, -102, -101, -101, -100, -99, -99, -98, -97, -97, -96, -97,
-95, -95, -94, -94, -92, -92, -91, -91, -91, -89, -89, -88, -88, -87, -85, -83,
-81, -79, -76, -73, -69, -66, -63, -58, -54, -50, -45, -41, -37, -32, -28, -23,
-19, -16, -11, -8, -4, 0, };

#endif /* AKWF_0123_512_H_ */