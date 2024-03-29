#ifndef AKWF_1048_512_H_
#define AKWF_1048_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1048_512_NUM_CELLS 512
#define AKWF_1048_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1048_512_DATA [] = {0,
0, 1, 2, 1, 19, 25, 25, 27, 28, 29, 30, 32, 33, 33, 35, 37, 37, 39, 39, 40, 42,
43, 45, 45, 47, 48, 50, 50, 51, 52, 54, 55, 56, 57, 58, 59, 61, 61, 62, 64, 65,
66, 68, 68, 70, 71, 72, 73, 74, 76, 77, 78, 79, 80, 81, 82, 83, 84, 86, 87, 89,
89, 91, 92, 92, 94, 94, 97, 98, 99, 100, 101, 102, 103, 104, 106, 107, 108, 109,
110, 112, 112, 113, 115, 116, 117, 118, 119, 120, 122, 122, 124, 125, 126, 127,
123, 118, 118, 117, 115, 114, 114, 111, 112, 110, 109, 108, 107, 107, 105, 104,
103, 102, 101, 100, 99, 99, 98, 96, 95, 94, 93, 93, 91, 91, 90, 88, 88, 86, 85,
84, 83, 82, 82, 81, 80, 78, 78, 76, 75, 74, 73, 72, 71, 71, 69, 68, 68, 66, 65,
65, 63, 63, 62, 60, 60, 59, 57, 56, 55, 54, 54, 53, 51, 50, 50, 48, 47, 46, 45,
45, 44, 43, 42, 40, 39, 39, 37, 36, 36, 35, 34, 33, 32, 30, 30, 28, 27, 27, 25,
25, 24, 23, 21, 21, 20, 19, 18, 17, 15, 15, 14, 12, 11, 11, 10, 9, 8, 7, 6, 5,
4, 3, 2, 1, 0, -2, -1, -2, -4, -5, -6, -7, -7, -9, -10, -10, -12, -13, -14, -16,
-16, -17, -18, -19, -20, -21, -22, -22, -23, -25, -25, -27, -27, -29, -30, -30,
-31, -33, -34, -35, -36, -36, -38, -38, -40, -40, -42, -42, -44, -45, -45, -46,
-47, -49, -50, -50, -51, -52, -52, -54, -55, -56, -58, -58, -58, -60, -61, -62,
-63, -65, -66, -66, -67, -68, -68, -70, -71, -72, -73, -74, -75, -76, -76, -78,
-79, -79, -80, -82, -83, -84, -84, -85, -86, -87, -98, -100, -99, -98, -97, -97,
-96, -96, -95, -95, -94, -94, -93, -93, -93, -92, -91, -91, -90, -91, -89, -88,
-88, -88, -88, -87, -87, -85, -86, -85, -85, -84, -83, -82, -82, -82, -82, -82,
-81, -80, -80, -79, -79, -79, -78, -77, -77, -76, -76, -76, -75, -75, -74, -74,
-73, -73, -73, -71, -72, -71, -70, -70, -70, -69, -69, -68, -67, -66, -66, -66,
-66, -65, -64, -64, -63, -63, -62, -62, -61, -62, -60, -59, -60, -59, -58, -58,
-58, -56, -56, -56, -55, -55, -55, -54, -54, -53, -53, -52, -51, -51, -50, -49,
-49, -49, -48, -48, -48, -47, -47, -46, -46, -45, -46, -44, -44, -43, -42, -42,
-41, -41, -41, -40, -40, -40, -40, -39, -38, -38, -37, -36, -36, -36, -35, -35,
-35, -33, -33, -33, -32, -31, -31, -31, -30, -29, -30, -29, -29, -28, -28, -27,
-27, -26, -25, -25, -25, -24, -23, -24, -23, -22, -22, -21, -21, -20, -20, -19,
-20, -18, -18, -17, -17, -17, -16, -16, -15, -15, -14, -13, -13, -13, -12, -12,
-11, -10, -10, -9, -10, -9, -8, -8, -7, -6, -7, -7, -5, -5, -4, -3, -4, -3, -3,
-2, -2, -1, 0, 0, };

#endif /* AKWF_1048_512_H_ */
