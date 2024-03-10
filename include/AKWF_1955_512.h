#ifndef AKWF_1955_512_H_
#define AKWF_1955_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1955_512_NUM_CELLS 512
#define AKWF_1955_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1955_512_DATA [] = {6,
20, 29, 41, 51, 60, 70, 79, 86, 94, 100, 106, 111, 114, 119, 121, 123, 124, 125,
124, 124, 123, 122, 120, 118, 116, 114, 112, 109, 106, 104, 102, 100, 99, 96,
95, 94, 93, 93, 92, 92, 91, 92, 92, 92, 93, 93, 93, 94, 94, 94, 94, 94, 94, 95,
94, 93, 93, 92, 91, 91, 89, 88, 88, 85, 84, 84, 82, 81, 80, 79, 78, 78, 77, 76,
75, 75, 75, 74, 74, 74, 74, 74, 74, 73, 74, 73, 73, 73, 72, 72, 71, 71, 70, 69,
68, 67, 67, 65, 65, 63, 63, 62, 62, 61, 60, 58, 58, 56, 57, 56, 56, 55, 55, 54,
54, 55, 54, 53, 53, 52, 53, 53, 52, 52, 51, 51, 50, 50, 49, 49, 48, 46, 46, 46,
44, 44, 43, 42, 40, 40, 39, 38, 37, 36, 35, 35, 34, 34, 33, 33, 32, 33, 32, 31,
32, 31, 31, 31, 30, 30, 30, 30, 29, 29, 29, 28, 28, 27, 26, 25, 24, 24, 22, 21,
20, 19, 18, 18, 17, 17, 16, 15, 13, 13, 12, 12, 11, 11, 10, 10, 9, 10, 9, 8, 9,
8, 8, 7, 8, 7, 7, 7, 6, 6, 5, 5, 4, 4, 3, 3, 2, 2, 0, 0, 0, -1, -1, -2, -2, -2,
-3, -2, -3, -2, -3, -2, -2, -2, -2, -1, 0, 0, 0, 0, 1, 2, 2, 3, 3, 2, 2, 2, 3,
2, 2, 1, 1, 2, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-1, -1, 0, -1, -1, 0, 1, 0, 1, 2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 1, 1, 0, 1, 0, 0,
0, 0, -1, -2, -2, -2, -2, -2, -2, -2, -2, -1, -2, -1, -2, -1, -1, -1, 0, 1, 0,
1, 0, 0, 0, 0, 0, 0, -1, -2, -2, -3, -4, -4, -5, -7, -8, -8, -9, -10, -12, -14,
-14, -15, -16, -16, -16, -17, -18, -18, -18, -20, -19, -19, -18, -20, -20, -20,
-20, -19, -19, -20, -20, -21, -21, -22, -23, -23, -25, -25, -26, -27, -28, -29,
-30, -32, -32, -33, -35, -35, -36, -37, -39, -39, -39, -40, -40, -42, -41, -41,
-41, -42, -42, -41, -41, -41, -41, -41, -41, -41, -41, -42, -42, -42, -44, -44,
-45, -46, -47, -48, -50, -51, -52, -53, -54, -57, -57, -59, -61, -61, -62, -62,
-64, -64, -64, -66, -65, -65, -65, -64, -64, -64, -64, -63, -62, -62, -61, -61,
-62, -62, -61, -62, -62, -64, -64, -64, -66, -68, -70, -71, -73, -75, -77, -78,
-81, -82, -84, -85, -88, -89, -89, -90, -91, -90, -91, -90, -90, -89, -89, -87,
-87, -85, -84, -82, -81, -80, -80, -78, -79, -79, -78, -78, -79, -80, -81, -84,
-86, -89, -92, -94, -98, -102, -106, -109, -112, -116, -119, -122, -124, -126,
-127, -127, -128, -127, -126, -124, -120, -116, -111, -105, -99, -92, -83, -74,
-66, -55, -44, -33, -22, -11, -1, };

#endif /* AKWF_1955_512_H_ */