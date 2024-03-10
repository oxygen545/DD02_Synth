#ifndef AKWF_1900_512_H_
#define AKWF_1900_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1900_512_NUM_CELLS 512
#define AKWF_1900_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1900_512_DATA [] = {8,
23, 35, 50, 61, 73, 84, 93, 102, 108, 113, 118, 122, 126, 127, 127, 127, 127,
127, 127, 127, 126, 125, 124, 124, 124, 124, 123, 122, 122, 120, 120, 119, 118,
118, 117, 116, 116, 115, 115, 114, 113, 112, 113, 112, 112, 112, 112, 112, 112,
112, 111, 111, 111, 111, 110, 109, 108, 106, 104, 103, 101, 99, 96, 94, 92, 89,
86, 84, 82, 80, 78, 76, 73, 72, 71, 70, 69, 68, 66, 65, 64, 65, 64, 63, 64, 63,
64, 63, 63, 63, 63, 63, 63, 63, 63, 64, 62, 63, 63, 63, 63, 63, 63, 63, 63, 62,
63, 62, 62, 62, 62, 61, 62, 61, 61, 60, 58, 57, 56, 54, 51, 48, 45, 41, 36, 31,
26, 18, 12, 6, -2, -8, -15, -22, -27, -34, -40, -44, -49, -53, -57, -59, -62,
-64, -65, -66, -67, -68, -67, -67, -66, -65, -64, -64, -65, -64, -64, -63, -63,
-63, -63, -63, -63, -64, -63, -64, -65, -65, -65, -66, -65, -65, -66, -66, -66,
-67, -67, -67, -68, -68, -69, -68, -69, -70, -72, -72, -73, -75, -76, -77, -79,
-81, -84, -86, -88, -90, -93, -95, -97, -99, -102, -104, -105, -108, -109, -110,
-111, -112, -112, -113, -113, -113, -114, -114, -114, -113, -114, -113, -113,
-113, -113, -113, -115, -115, -116, -117, -119, -120, -120, -122, -123, -124,
-126, -126, -127, -128, -128, -128, -128, -127, -127, -127, -127, -126, -125,
-125, -124, -122, -119, -116, -112, -109, -103, -98, -92, -85, -76, -68, -57,
-47, -36, -25, -14, -1, 11, 21, 31, 41, 50, 58, 65, 71, 76, 80, 81, 84, 84, 84,
83, 81, 80, 78, 75, 73, 70, 68, 67, 65, 64, 62, 62, 61, 61, 61, 60, 60, 61, 61,
61, 61, 61, 62, 62, 61, 60, 60, 60, 59, 59, 58, 58, 57, 56, 55, 55, 53, 52, 51,
50, 48, 48, 46, 44, 43, 40, 38, 36, 34, 31, 29, 26, 25, 22, 21, 19, 18, 16, 15,
14, 13, 12, 11, 10, 11, 10, 10, 10, 11, 11, 11, 11, 11, 10, 11, 11, 10, 10, 10,
10, 9, 9, 9, 8, 8, 7, 7, 6, 6, 6, 5, 5, 5, 4, 5, 5, 4, 4, 3, 3, 2, 2, 2, 2, 2,
1, 1, 0, 0, 0, -1, 0, 0, -2, -1, -2, -2, -2, -3, -3, -3, -3, -3, -4, -5, -5, -6,
-6, -6, -7, -6, -7, -7, -7, -8, -8, -9, -10, -9, -10, -10, -10, -10, -10, -10,
-11, -10, -9, -10, -10, -10, -10, -10, -11, -11, -11, -12, -12, -13, -13, -14,
-15, -16, -16, -18, -19, -20, -21, -23, -24, -25, -26, -28, -30, -31, -33, -35,
-37, -39, -41, -43, -45, -47, -49, -51, -53, -55, -57, -58, -59, -60, -61, -61,
-61, -62, -61, -59, -60, -59, -58, -58, -58, -57, -57, -57, -58, -59, -60, -62,
-65, -68, -72, -75, -80, -82, -85, -88, -90, -92, -92, -91, -89, -86, -81, -75,
-66, -58, -47, -36, -24, -11, -1, };

#endif /* AKWF_1900_512_H_ */
