#ifndef AKWF_1934_512_H_
#define AKWF_1934_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1934_512_NUM_CELLS 512
#define AKWF_1934_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1934_512_DATA [] = {1,
4, 7, 12, 15, 18, 22, 25, 29, 32, 36, 40, 44, 47, 51, 53, 58, 62, 65, 69, 72,
74, 77, 81, 85, 88, 90, 93, 95, 98, 101, 104, 105, 108, 110, 111, 113, 115, 117,
117, 119, 120, 121, 123, 122, 124, 124, 124, 124, 124, 123, 123, 122, 122, 120,
119, 117, 115, 113, 111, 109, 107, 104, 101, 99, 96, 93, 89, 87, 83, 80, 78, 74,
71, 67, 64, 62, 58, 55, 53, 50, 46, 44, 41, 39, 36, 32, 31, 29, 27, 25, 23, 22,
20, 20, 18, 17, 17, 17, 17, 18, 17, 17, 18, 18, 20, 21, 22, 22, 24, 25, 26, 28,
30, 32, 33, 34, 37, 39, 41, 42, 45, 46, 48, 50, 52, 53, 54, 56, 57, 59, 59, 60,
62, 63, 63, 64, 64, 65, 64, 64, 64, 64, 63, 62, 61, 60, 59, 58, 56, 55, 53, 51,
49, 47, 45, 42, 41, 38, 36, 33, 30, 27, 24, 22, 19, 15, 13, 10, 7, 4, 1, -1, -5,
-8, -11, -14, -17, -20, -22, -25, -28, -31, -33, -36, -38, -41, -44, -47, -49,
-51, -53, -56, -57, -61, -62, -64, -67, -69, -71, -73, -75, -77, -79, -82, -83,
-85, -86, -88, -89, -91, -93, -93, -95, -95, -97, -97, -99, -99, -101, -101,
-100, -101, -102, -101, -101, -100, -101, -101, -100, -98, -97, -97, -96, -93,
-93, -91, -89, -87, -85, -82, -80, -77, -74, -72, -68, -66, -61, -58, -55, -51,
-47, -44, -40, -36, -32, -28, -25, -21, -16, -12, -9, -4, -1, 3, 7, 11, 14, 18,
22, 26, 30, 32, 35, 39, 41, 44, 48, 50, 52, 55, 56, 58, 60, 61, 62, 64, 66, 67,
67, 68, 69, 70, 70, 70, 71, 71, 70, 71, 71, 71, 70, 70, 70, 69, 69, 67, 67, 66,
65, 64, 62, 61, 60, 58, 57, 56, 55, 53, 52, 50, 48, 47, 45, 42, 41, 39, 37, 35,
34, 32, 29, 28, 25, 23, 21, 18, 15, 14, 10, 7, 5, 3, 1, -3, -5, -8, -11, -13,
-16, -19, -22, -25, -27, -29, -31, -34, -37, -38, -41, -42, -45, -47, -49, -51,
-53, -54, -56, -56, -58, -59, -60, -61, -61, -62, -62, -63, -63, -62, -62, -63,
-61, -61, -60, -59, -58, -57, -56, -54, -53, -52, -50, -48, -47, -45, -43, -42,
-40, -38, -36, -34, -32, -31, -29, -29, -27, -26, -24, -22, -22, -21, -20, -19,
-19, -19, -19, -18, -19, -19, -20, -20, -21, -21, -23, -25, -27, -28, -31, -33,
-34, -37, -39, -43, -45, -48, -51, -54, -57, -60, -64, -67, -70, -73, -77, -80,
-83, -87, -90, -93, -97, -100, -102, -105, -107, -110, -113, -116, -117, -119,
-121, -122, -124, -126, -127, -127, -128, -127, -128, -128, -127, -127, -126,
-125, -125, -123, -121, -120, -118, -116, -113, -112, -109, -107, -105, -101,
-99, -96, -93, -89, -86, -83, -79, -75, -71, -68, -64, -61, -56, -52, -48, -44,
-40, -37, -33, -28, -25, -21, -16, -14, -9, -6, -1, };

#endif /* AKWF_1934_512_H_ */