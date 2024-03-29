#ifndef AKWF_1025_512_H_
#define AKWF_1025_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1025_512_NUM_CELLS 512
#define AKWF_1025_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1025_512_DATA [] = {0,
2, 4, 5, 6, 8, 9, 11, 13, 13, 14, 17, 18, 18, 20, 21, 23, 24, 25, 26, 26, 28,
29, 30, 31, 31, 32, 32, 34, 35, 35, 36, 37, 38, 38, 39, 39, 39, 40, 41, 41, 41,
42, 42, 43, 42, 42, 43, 42, 43, 43, 43, 43, 43, 43, 43, 44, 43, 42, 43, 43, 42,
42, 41, 42, 41, 41, 41, 40, 40, 39, 39, 38, 38, 38, 37, 37, 36, 35, 35, 35, 33,
33, 32, 32, 31, 31, 30, 29, 30, 28, 28, 27, 26, 26, 25, 24, 23, 23, 22, 22, 22,
20, 21, 19, 19, 18, 17, 16, 17, 15, 15, 14, 13, 13, 13, 11, 11, 11, 11, 10, 10,
9, 9, 8, 8, 7, 8, 7, 7, 7, 7, 6, 5, 5, 5, 5, 5, 6, 5, 4, 5, 6, 5, 5, 4, 5, 5, 5,
5, 5, 6, 7, 7, 7, 7, 7, 8, 8, 8, 9, 10, 11, 10, 11, 13, 13, 13, 15, 15, 16, 17,
17, 18, 18, 19, 20, 22, 22, 22, 24, 24, 25, 26, 28, 28, 29, 31, 32, 32, 34, 35,
37, 37, 38, 39, 41, 43, 42, 45, 45, 46, 48, 49, 51, 51, 53, 53, 55, 56, 57, 58,
59, 61, 62, 63, 63, 66, 66, 68, 68, 71, 70, 71, 73, 74, 75, 76, 77, 79, 78, 80,
81, 82, 82, 83, 84, 84, 86, 87, 87, 89, 89, 89, 90, 91, 91, 91, 93, 93, 93, 93,
94, 93, 94, 94, 95, 94, 95, 95, 96, 96, 95, 96, 96, 96, 95, 96, 95, 95, 94, 94,
94, 93, 92, 92, 92, 90, 90, 89, 89, 88, 88, 86, 85, 85, 84, 83, 82, 81, 80, 79,
77, 76, 75, 73, 72, 72, 69, 68, 66, 65, 63, 62, 61, 59, 57, 55, 53, 51, 50, 48,
46, 44, 42, 41, 39, 36, 34, 32, 30, 28, 26, 24, 22, 19, 17, 16, 13, 11, 9, 7, 5,
3, 0, -3, -4, -7, -9, -12, -14, -17, -18, -21, -23, -25, -28, -31, -32, -34,
-37, -39, -41, -43, -46, -48, -50, -52, -55, -56, -58, -61, -63, -65, -67, -69,
-71, -73, -75, -78, -80, -80, -82, -85, -86, -88, -90, -92, -93, -95, -96, -97,
-100, -102, -103, -104, -106, -107, -108, -110, -111, -113, -113, -114, -116,
-117, -118, -118, -119, -121, -121, -121, -122, -123, -124, -125, -125, -126,
-126, -127, -127, -127, -127, -128, -128, -128, -128, -128, -128, -128, -128,
-128, -127, -127, -127, -126, -127, -127, -125, -125, -124, -124, -123, -122,
-122, -121, -120, -119, -119, -118, -117, -116, -115, -114, -112, -112, -110,
-109, -108, -107, -105, -103, -103, -101, -99, -98, -97, -95, -94, -92, -91,
-89, -88, -86, -85, -83, -81, -79, -77, -75, -74, -72, -70, -68, -66, -66, -63,
-61, -59, -58, -56, -54, -52, -51, -48, -46, -45, -42, -41, -38, -38, -35, -34,
-31, -29, -28, -27, -24, -22, -21, -19, -17, -15, -13, -12, -10, -9, -7, -4, -4,
-2, 0, };

#endif /* AKWF_1025_512_H_ */
