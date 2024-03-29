#ifndef AKWF_1222_512_H_
#define AKWF_1222_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1222_512_NUM_CELLS 512
#define AKWF_1222_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1222_512_DATA [] = {1,
2, 2, 2, 4, 4, 5, 5, 5, 7, 7, 7, 8, 7, 8, 9, 9, 10, 11, 11, 11, 12, 13, 12, 13,
13, 15, 15, 16, 16, 17, 17, 19, 19, 20, 20, 21, 22, 22, 23, 24, 25, 26, 26, 28,
28, 29, 29, 31, 32, 33, 35, 36, 36, 38, 39, 40, 42, 44, 45, 46, 48, 49, 50, 52,
54, 55, 57, 57, 60, 61, 63, 65, 65, 68, 69, 71, 73, 75, 75, 77, 79, 81, 82, 84,
86, 87, 88, 90, 92, 93, 95, 96, 97, 99, 100, 102, 103, 105, 105, 106, 108, 109,
111, 112, 112, 114, 115, 116, 117, 118, 119, 119, 120, 121, 121, 122, 122, 124,
124, 124, 125, 125, 126, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 125, 125, 124, 124, 123,
123, 122, 122, 121, 120, 120, 119, 118, 117, 117, 116, 116, 114, 114, 112, 111,
111, 109, 108, 107, 105, 105, 103, 102, 102, 100, 99, 97, 96, 95, 94, 92, 91,
88, 88, 86, 84, 83, 82, 80, 79, 77, 75, 74, 72, 70, 69, 67, 66, 63, 62, 60, 58,
57, 55, 54, 52, 50, 48, 46, 45, 44, 42, 40, 39, 37, 36, 35, 32, 31, 30, 29, 27,
26, 25, 24, 23, 21, 19, 19, 18, 16, 15, 14, 13, 12, 11, 10, 10, 9, 8, 7, 7, 8,
7, 7, 6, 7, 4, 4, 3, 3, 2, 1, 1, 0, -2, -2, -3, -3, -4, -5, -5, -5, -6, -7, -7,
-7, -7, -8, -9, -9, -10, -10, -11, -10, -12, -12, -13, -13, -14, -14, -15, -15,
-17, -17, -18, -19, -19, -19, -20, -21, -22, -23, -23, -24, -24, -26, -27, -27,
-29, -30, -31, -31, -32, -33, -34, -35, -36, -39, -40, -40, -42, -44, -45, -46,
-48, -49, -51, -52, -54, -55, -58, -58, -59, -62, -63, -65, -66, -68, -69, -71,
-74, -75, -76, -77, -80, -82, -83, -84, -86, -87, -89, -91, -92, -93, -95, -96,
-98, -100, -101, -102, -103, -105, -106, -107, -109, -109, -111, -111, -113,
-114, -114, -117, -117, -118, -119, -119, -121, -121, -122, -123, -123, -124,
-123, -125, -124, -126, -126, -126, -126, -127, -127, -127, -128, -127, -128,
-128, -128, -128, -128, -128, -127, -127, -127, -127, -127, -127, -126, -126,
-126, -126, -125, -125, -124, -124, -123, -122, -122, -121, -120, -120, -118,
-119, -118, -117, -116, -115, -114, -113, -112, -111, -110, -109, -108, -107,
-106, -104, -103, -102, -101, -99, -98, -97, -96, -95, -93, -91, -90, -89, -87,
-85, -84, -83, -81, -79, -78, -76, -75, -73, -71, -71, -68, -67, -65, -63, -62,
-61, -58, -57, -54, -53, -51, -50, -48, -46, -45, -43, -41, -39, -38, -37, -36,
-34, -33, -32, -30, -29, -27, -26, -25, -23, -23, -21, -19, -19, -17, -16, -15,
-14, -13, -11, -11, -9, -8, -9, -9, -7, -7, -8, -8, -7, -6, -5, -4, -4, -3, -2,
-1, 0, -1, };

#endif /* AKWF_1222_512_H_ */
