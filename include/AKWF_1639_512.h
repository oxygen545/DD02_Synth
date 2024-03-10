#ifndef AKWF_1639_512_H_
#define AKWF_1639_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1639_512_NUM_CELLS 512
#define AKWF_1639_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1639_512_DATA [] = {1,
6, 11, 14, 19, 22, 27, 31, 34, 36, 39, 42, 45, 47, 51, 53, 55, 58, 59, 61, 63,
65, 66, 69, 69, 71, 72, 73, 75, 76, 77, 78, 79, 79, 81, 82, 84, 84, 84, 86, 85,
87, 87, 88, 88, 89, 90, 90, 90, 90, 90, 90, 92, 92, 91, 92, 92, 92, 92, 92, 92,
93, 93, 93, 92, 91, 90, 90, 90, 89, 89, 88, 88, 87, 87, 87, 86, 86, 85, 85, 84,
84, 84, 83, 83, 82, 82, 81, 81, 81, 80, 81, 79, 79, 79, 79, 79, 77, 77, 77, 77,
76, 76, 76, 75, 75, 74, 74, 74, 74, 74, 74, 73, 72, 71, 71, 69, 69, 69, 68, 67,
67, 67, 66, 65, 65, 66, 64, 64, 63, 62, 60, 60, 59, 60, 58, 58, 57, 56, 55, 55,
55, 54, 54, 53, 52, 51, 51, 50, 50, 49, 48, 48, 47, 47, 47, 45, 46, 45, 44, 43,
44, 44, 43, 42, 42, 41, 40, 40, 40, 39, 39, 39, 39, 38, 39, 38, 38, 37, 37, 36,
35, 35, 35, 34, 35, 34, 34, 34, 34, 34, 33, 32, 32, 31, 30, 30, 30, 28, 29, 28,
28, 28, 27, 27, 26, 26, 26, 25, 25, 23, 23, 23, 22, 21, 20, 20, 19, 20, 18, 18,
17, 17, 16, 15, 15, 14, 13, 11, 11, 10, 9, 10, 9, 9, 7, 7, 7, 6, 5, 5, 4, 4, 3,
3, 2, 2, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -3, -3, -4, -4, -5, -4, -4, -5, -5,
-6, -6, -6, -7, -7, -8, -7, -8, -7, -8, -8, -9, -10, -10, -10, -10, -11, -10,
-11, -10, -12, -12, -12, -13, -14, -14, -14, -15, -15, -16, -16, -16, -16, -17,
-18, -18, -18, -18, -18, -19, -20, -20, -20, -20, -21, -22, -21, -21, -22, -22,
-22, -22, -23, -23, -23, -24, -25, -25, -25, -25, -25, -26, -26, -27, -26, -27,
-26, -27, -28, -28, -28, -28, -28, -29, -30, -30, -30, -31, -31, -32, -32, -33,
-32, -33, -33, -33, -33, -34, -34, -35, -35, -35, -35, -35, -36, -37, -36, -37,
-37, -36, -37, -38, -38, -38, -40, -41, -40, -40, -42, -43, -43, -43, -44, -45,
-45, -46, -45, -46, -46, -47, -48, -48, -49, -48, -48, -50, -49, -49, -50, -51,
-51, -51, -51, -52, -53, -54, -54, -55, -57, -57, -58, -59, -59, -60, -60, -61,
-61, -62, -63, -63, -65, -65, -66, -67, -68, -68, -69, -69, -71, -71, -71, -73,
-73, -74, -74, -75, -76, -77, -78, -80, -81, -82, -82, -83, -85, -85, -85, -86,
-87, -87, -89, -90, -89, -91, -93, -93, -95, -95, -97, -98, -98, -99, -100,
-101, -102, -102, -102, -104, -105, -106, -106, -107, -109, -110, -110, -112,
-112, -112, -113, -114, -116, -116, -116, -118, -118, -119, -120, -121, -122,
-122, -123, -124, -125, -125, -126, -128, -128, -128, -127, -122, -112, -101,
-91, -82, -74, -66, -58, -50, -43, -36, -30, -23, -18, -11, -6, -1, };

#endif /* AKWF_1639_512_H_ */
