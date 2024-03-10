#ifndef AKWF_0716_512_H_
#define AKWF_0716_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0716_512_NUM_CELLS 512
#define AKWF_0716_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0716_512_DATA [] = {0,
2, 2, 5, 6, 7, 8, 10, 10, 11, 12, 14, 15, 16, 17, 18, 20, 20, 21, 22, 24, 23,
25, 26, 27, 28, 28, 29, 30, 31, 32, 32, 33, 34, 35, 35, 35, 37, 38, 38, 39, 39,
39, 40, 41, 42, 42, 43, 44, 44, 44, 45, 46, 46, 47, 47, 48, 48, 49, 49, 49, 50,
51, 51, 50, 52, 51, 52, 52, 53, 53, 54, 53, 53, 54, 55, 55, 54, 55, 55, 55, 56,
57, 57, 56, 56, 57, 56, 58, 57, 57, 57, 58, 58, 58, 58, 58, 59, 59, 58, 58, 58,
59, 59, 59, 58, 59, 60, 58, 57, 67, 78, 82, 83, 85, 89, 90, 91, 94, 95, 95, 98,
99, 101, 101, 103, 104, 104, 106, 107, 108, 107, 109, 110, 110, 111, 112, 113,
113, 114, 115, 116, 115, 117, 117, 117, 118, 118, 118, 120, 120, 120, 120, 121,
121, 122, 122, 121, 122, 123, 123, 123, 123, 124, 123, 123, 125, 125, 124, 125,
125, 123, 123, 126, 124, 123, 125, 127, 114, 97, 87, 85, 81, 76, 74, 72, 68, 65,
64, 61, 59, 57, 56, 53, 51, 49, 48, 46, 44, 43, 41, 40, 39, 37, 36, 35, 33, 31,
31, 29, 29, 27, 26, 26, 24, 23, 22, 20, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,
10, 10, 9, 8, 8, 7, 6, 5, 5, 3, 3, 2, 2, 1, 1, -1, -1, -2, -2, -4, -4, -5, -5,
-5, -7, -6, -7, -8, -8, -8, -10, -10, -11, -11, -12, -12, -12, -13, -13, -13,
-13, -15, -15, -15, -16, -16, -16, -18, -18, -17, -17, -19, -19, -19, -20, -19,
-19, -21, -21, -21, -21, -22, -21, -22, -23, -23, -23, -24, -23, -24, -23, -24,
-24, -25, -25, -25, -26, -26, -25, -25, -25, -26, -27, -26, -26, -28, -27, -26,
-27, -27, -28, -28, -27, -27, -28, -28, -28, -28, -28, -28, -28, -28, -28, -29,
-28, -29, -29, -27, -29, -36, -43, -45, -46, -48, -49, -50, -51, -54, -54, -55,
-56, -57, -57, -59, -59, -60, -61, -61, -62, -63, -63, -64, -64, -64, -65, -65,
-66, -65, -67, -66, -67, -68, -67, -68, -68, -69, -68, -68, -68, -69, -69, -69,
-69, -70, -69, -68, -70, -74, -76, -77, -77, -79, -79, -79, -80, -79, -80, -81,
-81, -82, -82, -82, -83, -82, -83, -84, -83, -84, -85, -85, -85, -85, -85, -85,
-86, -87, -86, -86, -87, -87, -87, -87, -88, -88, -88, -87, -88, -88, -88, -89,
-88, -89, -89, -89, -89, -89, -90, -89, -90, -91, -89, -90, -90, -90, -90, -90,
-91, -90, -91, -91, -92, -90, -90, -91, -91, -91, -92, -91, -91, -91, -91, -91,
-92, -92, -92, -91, -92, -92, -91, -91, -92, -92, -91, -92, -92, -92, -92, -92,
-93, -91, -92, -92, -91, -92, -93, -90, -91, -95, -92, -74, -57, -51, -50, -44,
-39, -38, -34, -30, -28, -26, -23, -21, -19, -18, -14, -14, -13, -9, -7, -7, -6,
-2, -2, 0, };

#endif /* AKWF_0716_512_H_ */
