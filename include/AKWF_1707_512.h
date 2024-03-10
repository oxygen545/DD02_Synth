#ifndef AKWF_1707_512_H_
#define AKWF_1707_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1707_512_NUM_CELLS 512
#define AKWF_1707_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1707_512_DATA [] = {1,
22, 35, 43, 48, 53, 58, 61, 63, 65, 65, 65, 65, 64, 64, 63, 62, 61, 62, 61, 60,
59, 59, 59, 59, 58, 57, 56, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 46, 44,
44, 44, 43, 42, 41, 40, 40, 38, 38, 37, 36, 34, 34, 32, 30, 29, 27, 25, 24, 38,
66, 92, 105, 111, 115, 119, 123, 125, 127, 127, 127, 127, 127, 125, 123, 122,
120, 118, 117, 116, 114, 113, 111, 109, 107, 106, 104, 103, 101, 99, 96, 96, 94,
92, 90, 88, 85, 84, 81, 79, 77, 76, 74, 72, 69, 67, 66, 63, 61, 59, 58, 55, 54,
52, 49, 48, 46, 44, 42, 40, 39, 37, 35, 33, 31, 30, 28, 26, 26, 23, 23, 20, 19,
17, 16, 14, 12, 10, 8, 7, 5, 4, 3, 2, 0, -1, -3, -4, -6, -4, 13, 38, 58, 67, 73,
76, 79, 82, 83, 84, 84, 83, 82, 81, 80, 78, 77, 75, 73, 71, 71, 69, 66, 65, 63,
62, 60, 58, 57, 55, 54, 52, 51, 50, 48, 46, 45, 44, 43, 42, 41, 41, 39, 39, 37,
36, 35, 33, 31, 30, 29, 27, 25, 24, 23, 20, 20, 17, 15, 15, 13, 11, 10, 8, 6, 5,
5, 2, 3, 1, 0, -2, -4, -4, -6, -7, -9, -10, -11, -12, -15, -16, -19, -20, -22,
-24, -25, -28, -29, -31, -33, -34, -36, -38, -40, -42, -44, -46, -48, -50, -52,
-53, -55, -57, -57, -58, -59, -60, -61, -62, -63, -64, -65, -66, -67, -68, -70,
-70, -71, -73, -73, -75, -76, -77, -78, -79, -81, -82, -84, -84, -85, -86, -88,
-90, -90, -93, -94, -94, -95, -97, -98, -99, -100, -101, -101, -103, -103, -105,
-105, -106, -107, -106, -108, -108, -109, -109, -110, -110, -111, -113, -113,
-113, -115, -113, -101, -86, -75, -59, -41, -29, -21, -15, -11, -8, -5, -4, -3,
-3, -3, -3, -4, -6, -6, -6, -7, -8, -8, -8, -9, -8, -9, -10, -11, -11, -12, -12,
-12, -13, -14, -15, -15, -17, -17, -18, -20, -20, -21, -22, -23, -24, -26, -27,
-28, -29, -31, -33, -33, -35, -36, -37, -38, -40, -41, -43, -44, -45, -47, -48,
-49, -50, -52, -52, -54, -56, -55, -57, -58, -59, -60, -61, -63, -64, -64, -66,
-67, -68, -70, -72, -73, -73, -75, -75, -76, -77, -75, -69, -52, -27, -10, 0, 6,
11, 14, 15, 18, 19, 20, 19, 18, 17, 16, 15, 14, 14, 13, 11, 11, 10, 9, 7, 6, 5,
4, 3, 3, 1, 1, 0, -1, -1, -2, -2, -3, -4, -4, -4, -6, -6, -6, -7, -8, -8, -10,
-11, -13, -14, -15, -17, -18, -20, -21, -22, -23, -25, -26, -27, -29, -30, -31,
-32, -33, -35, -35, -36, -38, -38, -39, -41, -42, -43, -44, -45, -47, -47, -49,
-50, -51, -53, -54, -55, -57, -59, -60, -61, -62, -63, -64, -66, -68, -69, -70,
-71, -73, -74, -75, -77, -78, -80, -79, -60, -16, };

#endif /* AKWF_1707_512_H_ */
