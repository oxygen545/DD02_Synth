#ifndef AKWF_1886_512_H_
#define AKWF_1886_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1886_512_NUM_CELLS 512
#define AKWF_1886_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1886_512_DATA [] = {0,
4, 8, 11, 14, 17, 20, 24, 26, 28, 30, 32, 33, 36, 37, 38, 40, 40, 42, 43, 44,
45, 46, 47, 47, 49, 50, 50, 50, 51, 51, 51, 52, 51, 52, 53, 52, 52, 53, 53, 53,
53, 54, 54, 53, 54, 54, 53, 54, 54, 54, 54, 54, 54, 54, 54, 54, 55, 54, 54, 53,
54, 53, 54, 54, 53, 52, 54, 53, 53, 53, 52, 53, 52, 52, 52, 52, 51, 52, 52, 52,
52, 52, 52, 51, 51, 52, 51, 50, 51, 51, 51, 51, 50, 50, 49, 50, 49, 50, 49, 49,
50, 50, 50, 49, 49, 49, 49, 49, 49, 49, 48, 49, 49, 49, 48, 48, 49, 48, 47, 49,
48, 48, 48, 48, 48, 47, 48, 47, 47, 48, 47, 47, 47, 47, 47, 46, 47, 46, 47, 47,
47, 47, 46, 45, 45, 45, 46, 45, 45, 45, 45, 45, 44, 44, 45, 45, 44, 45, 44, 44,
44, 43, 43, 44, 43, 43, 44, 43, 44, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
43, 43, 42, 43, 42, 42, 42, 42, 41, 42, 42, 42, 42, 41, 42, 41, 41, 42, 42, 42,
41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 40, 40, 40, 40, 40, 40, 39, 39, 39, 40,
39, 39, 38, 40, 39, 39, 39, 39, 39, 39, 38, 39, 37, 38, 39, 38, 38, 38, 38, 38,
37, 37, 37, 37, 37, 37, 37, 36, 36, 37, 36, 36, 37, 36, 36, 36, 35, 35, 36, 35,
35, 36, 35, 34, 34, 35, 34, 34, 35, 35, 34, 34, 34, 34, 33, 34, 34, 33, 32, 33,
33, 34, 33, 32, 32, 32, 32, 32, 31, 32, 31, 31, 30, 31, 30, 31, 30, 30, 30, 29,
29, 29, 29, 29, 29, 28, 28, 29, 27, 27, 27, 27, 27, 27, 26, 26, 26, 26, 25, 25,
25, 25, 25, 25, 23, 24, 24, 23, 21, 21, 22, 21, 20, 20, 20, 19, 19, 18, 17, 17,
17, 17, 15, 14, 13, 12, 13, 11, 11, 10, 8, 8, 6, 6, 4, 4, 2, 0, 0, -1, -3, -4,
-5, -8, -9, -11, -13, -14, -16, -16, -18, -20, -22, -23, -25, -27, -30, -32,
-35, -39, -40, -43, -47, -49, -52, -55, -58, -61, -63, -66, -67, -70, -73, -74,
-77, -79, -81, -84, -85, -87, -89, -91, -94, -95, -97, -98, -100, -101, -102,
-104, -105, -107, -108, -110, -110, -111, -112, -113, -113, -114, -115, -117,
-117, -117, -118, -118, -119, -119, -121, -120, -121, -122, -122, -122, -122,
-124, -124, -124, -124, -125, -125, -125, -126, -125, -125, -126, -126, -126,
-127, -127, -127, -127, -127, -128, -128, -127, -127, -127, -128, -128, -127,
-128, -128, -128, -127, -128, -127, -128, -127, -128, -128, -127, -128, -128,
-128, -128, -128, -128, -128, -127, -127, -128, -128, -127, -128, -128, -128,
-127, -128, -128, -128, -128, -128, -128, -126, -118, -105, -94, -83, -75, -65,
-56, -49, -42, -34, -29, -22, -17, -11, -6, -3, };

#endif /* AKWF_1886_512_H_ */
