#ifndef AKWF_0930_512_H_
#define AKWF_0930_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0930_512_NUM_CELLS 512
#define AKWF_0930_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0930_512_DATA [] = {0,
6, 13, 19, 26, 32, 38, 44, 51, 56, 62, 67, 73, 78, 83, 87, 92, 95, 100, 104,
107, 111, 113, 116, 119, 121, 122, 125, 126, 127, 127, 127, 127, 127, 127, 127,
126, 125, 124, 122, 122, 119, 117, 115, 113, 111, 108, 105, 102, 100, 98, 94,
92, 89, 85, 83, 80, 76, 74, 71, 68, 66, 63, 59, 57, 55, 52, 50, 49, 46, 45, 42,
39, 38, 37, 36, 34, 33, 32, 30, 29, 29, 27, 26, 26, 25, 25, 25, 24, 24, 23, 23,
22, 22, 21, 21, 20, 19, 19, 18, 19, 18, 17, 16, 15, 16, 14, 14, 14, 12, 11, 11,
9, 8, 8, 6, 6, 4, 3, 2, 1, -1, -1, -2, -3, -4, -5, -5, -6, -6, -7, -8, -8, -8,
-9, -9, -9, -9, -7, -8, -7, -6, -5, -4, -3, -2, 0, 3, 4, 6, 9, 10, 13, 16, 18,
21, 24, 27, 31, 34, 37, 40, 44, 47, 51, 54, 58, 61, 65, 69, 72, 75, 78, 82, 84,
88, 91, 93, 96, 98, 101, 102, 105, 106, 108, 109, 110, 112, 112, 113, 114, 113,
113, 113, 112, 111, 110, 109, 108, 106, 104, 102, 100, 98, 95, 93, 90, 88, 84,
81, 79, 75, 71, 68, 65, 62, 58, 55, 52, 48, 45, 42, 39, 36, 32, 30, 27, 24, 21,
19, 17, 14, 12, 11, 9, 7, 5, 3, 3, 2, 1, -1, -1, -1, -1, -1, -1, -2, -2, -1, -1,
-2, -2, -1, -2, 0, 0, 1, 1, 0, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 0, -1, -1, -2, -4,
-4, -6, -8, -10, -11, -13, -16, -17, -20, -23, -25, -28, -30, -33, -37, -40,
-44, -46, -50, -53, -56, -60, -63, -66, -69, -74, -76, -79, -83, -86, -88, -91,
-94, -97, -99, -101, -104, -105, -107, -108, -109, -110, -112, -113, -113, -113,
-114, -113, -112, -111, -111, -110, -109, -108, -106, -104, -102, -100, -98,
-96, -92, -89, -86, -83, -81, -77, -74, -71, -67, -64, -60, -57, -53, -50, -46,
-42, -39, -35, -32, -29, -26, -23, -21, -17, -15, -12, -9, -8, -6, -3, -1, 1, 2,
4, 4, 5, 7, 8, 8, 8, 8, 8, 8, 9, 9, 9, 7, 8, 6, 5, 5, 4, 3, 2, 2, 1, 0, -1, -2,
-4, -4, -5, -6, -8, -8, -9, -11, -12, -12, -13, -14, -15, -15, -16, -17, -18,
-18, -19, -19, -19, -20, -20, -21, -22, -22, -22, -23, -23, -24, -24, -25, -24,
-27, -26, -27, -29, -29, -30, -31, -31, -33, -34, -36, -38, -39, -41, -42, -45,
-46, -49, -51, -53, -56, -59, -61, -64, -67, -70, -71, -76, -78, -81, -84, -87,
-89, -93, -96, -99, -101, -104, -107, -110, -112, -114, -116, -118, -120, -122,
-124, -125, -126, -126, -127, -128, -127, -128, -128, -127, -127, -125, -124,
-121, -120, -118, -115, -113, -110, -106, -102, -98, -94, -90, -86, -80, -76,
-70, -64, -58, -53, -48, -41, -35, -30, -23, -16, -10, -4, };

#endif /* AKWF_0930_512_H_ */
