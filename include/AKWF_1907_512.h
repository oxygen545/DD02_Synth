#ifndef AKWF_1907_512_H_
#define AKWF_1907_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1907_512_NUM_CELLS 512
#define AKWF_1907_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1907_512_DATA [] = {0,
2, 4, 5, 6, 7, 9, 10, 11, 13, 14, 17, 18, 20, 21, 23, 25, 27, 28, 31, 32, 35,
36, 37, 40, 41, 44, 46, 47, 49, 52, 53, 56, 57, 58, 60, 62, 64, 66, 67, 68, 69,
71, 72, 73, 74, 76, 76, 78, 78, 79, 79, 80, 81, 82, 82, 83, 84, 85, 86, 86, 86,
87, 87, 88, 88, 89, 90, 91, 92, 92, 93, 93, 95, 96, 96, 96, 98, 97, 99, 100,
100, 101, 102, 104, 104, 105, 105, 105, 107, 108, 109, 110, 111, 112, 113, 114,
115, 115, 116, 117, 118, 120, 120, 121, 122, 122, 123, 124, 125, 125, 125, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 125, 124,
124, 122, 122, 121, 119, 119, 117, 116, 114, 114, 112, 110, 110, 108, 107, 106,
104, 102, 100, 100, 97, 96, 95, 92, 90, 89, 87, 86, 84, 82, 80, 78, 76, 74, 72,
70, 68, 65, 62, 61, 58, 57, 54, 52, 49, 46, 43, 41, 39, 36, 34, 32, 28, 26, 23,
21, 18, 15, 13, 10, 8, 6, 4, 2, -1, -3, -4, -6, -9, -11, -13, -14, -15, -17,
-18, -19, -21, -23, -23, -25, -26, -27, -29, -29, -30, -31, -33, -34, -34, -36,
-37, -38, -38, -40, -40, -42, -43, -43, -45, -45, -47, -48, -49, -50, -51, -51,
-52, -53, -54, -56, -56, -57, -57, -59, -60, -60, -61, -61, -62, -63, -64, -65,
-65, -65, -66, -66, -66, -68, -68, -69, -68, -70, -71, -71, -71, -71, -72, -73,
-73, -75, -74, -75, -75, -76, -77, -77, -78, -79, -79, -80, -80, -81, -83, -83,
-83, -84, -85, -86, -86, -86, -86, -88, -88, -89, -89, -89, -91, -90, -91, -91,
-92, -92, -92, -93, -93, -92, -92, -93, -93, -93, -93, -92, -92, -93, -92, -93,
-92, -92, -92, -92, -91, -91, -91, -91, -91, -90, -90, -89, -89, -90, -89, -88,
-88, -87, -87, -86, -86, -84, -84, -84, -83, -82, -82, -81, -81, -81, -79, -79,
-78, -77, -77, -76, -76, -76, -75, -74, -74, -73, -72, -72, -72, -70, -70, -71,
-69, -69, -68, -69, -67, -66, -66, -65, -65, -65, -65, -64, -64, -63, -63, -63,
-62, -61, -61, -61, -61, -60, -59, -59, -59, -58, -59, -58, -56, -57, -56, -55,
-54, -54, -53, -53, -50, -50, -49, -48, -47, -45, -44, -43, -41, -39, -37, -36,
-34, -33, -31, -30, -28, -27, -25, -24, -22, -20, -20, -18, -17, -16, -14, -14,
-13, -12, -11, -11, -10, -9, -9, -9, -8, -7, -7, -8, -7, -7, -7, -6, -7, -6, -6,
-6, -6, -6, -6, -6, -6, -6, -5, -5, -5, -5, -4, -4, -4, -5, -4, -5, -4, -4, -4,
-4, -5, -4, -5, -4, -5, -4, -5, -5, -5, -5, -5, -5, -6, -6, -6, -7, -7, -7, -7,
-7, -8, -8, -8, -9, -8, -9, -9, -10, -9, -10, -9, -9, -8, -9, -8, -8, -7, -7,
-5, -5, -4, -4, -1, -2, 0, };

#endif /* AKWF_1907_512_H_ */
