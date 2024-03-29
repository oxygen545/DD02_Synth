#ifndef AKWF_1434_512_H_
#define AKWF_1434_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1434_512_NUM_CELLS 512
#define AKWF_1434_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1434_512_DATA [] = {1,
3, 4, 5, 7, 9, 11, 12, 13, 15, 16, 18, 20, 22, 23, 24, 26, 28, 29, 30, 32, 34,
35, 37, 39, 40, 43, 44, 46, 48, 50, 54, 55, 57, 57, 60, 61, 62, 64, 65, 67, 69,
69, 71, 72, 74, 76, 78, 79, 81, 83, 83, 84, 86, 87, 88, 90, 91, 93, 93, 95, 97,
98, 98, 100, 101, 101, 103, 104, 105, 105, 106, 107, 109, 109, 110, 111, 112,
113, 114, 116, 116, 116, 117, 118, 119, 119, 120, 121, 121, 122, 122, 124, 124,
125, 125, 125, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 126, 127, 126, 126, 126, 126, 125, 124, 124, 124, 123, 122,
123, 122, 122, 121, 120, 120, 119, 119, 119, 118, 118, 116, 115, 115, 115, 113,
113, 113, 112, 111, 111, 109, 108, 107, 106, 106, 107, 106, 104, 103, 102, 102,
100, 99, 99, 98, 96, 95, 93, 93, 92, 89, 89, 87, 86, 84, 83, 80, 76, 73, 72, 71,
71, 70, 68, 67, 67, 65, 64, 63, 62, 61, 60, 58, 57, 57, 55, 55, 54, 53, 51, 51,
49, 49, 49, 48, 47, 47, 45, 44, 44, 43, 43, 42, 42, 41, 40, 40, 39, 38, 38, 37,
37, 37, 36, 36, 34, 34, 33, 32, 32, 31, 31, 30, 28, 28, 27, 25, 23, 23, 22, 22,
21, 20, 19, 17, 17, 15, 14, 13, 12, 11, 11, 9, 7, 6, 4, 2, 1, -1, -5, -7, -8,
-8, -9, -11, -11, -14, -14, -16, -18, -19, -21, -22, -25, -25, -26, -29, -30,
-31, -32, -34, -36, -37, -38, -40, -42, -43, -44, -45, -47, -48, -49, -51, -52,
-53, -54, -56, -56, -57, -59, -61, -61, -62, -63, -64, -66, -67, -68, -68, -69,
-71, -72, -72, -74, -74, -76, -76, -77, -78, -78, -80, -80, -81, -82, -82, -83,
-83, -85, -85, -86, -86, -87, -87, -88, -88, -89, -89, -90, -90, -89, -89, -91,
-90, -91, -91, -92, -92, -93, -92, -93, -93, -93, -94, -93, -94, -94, -94, -94,
-95, -94, -95, -95, -94, -95, -94, -94, -95, -94, -94, -95, -95, -95, -95, -96,
-96, -96, -96, -96, -96, -96, -97, -96, -97, -97, -97, -98, -97, -99, -98, -98,
-99, -100, -98, -100, -100, -99, -100, -101, -101, -101, -102, -101, -102, -102,
-102, -103, -103, -103, -103, -104, -105, -105, -105, -105, -105, -105, -106,
-106, -106, -106, -106, -106, -106, -107, -108, -108, -108, -109, -108, -108,
-109, -108, -109, -109, -108, -108, -109, -108, -108, -109, -108, -108, -108,
-107, -108, -107, -106, -106, -105, -104, -102, -102, -101, -100, -99, -98, -98,
-96, -95, -93, -91, -90, -86, -84, -82, -82, -81, -80, -79, -78, -76, -74, -72,
-71, -69, -68, -66, -65, -63, -61, -60, -58, -55, -55, -52, -51, -49, -47, -44,
-42, -39, -36, -36, -34, -32, -31, -29, -27, -26, -24, -23, -21, -20, -18, -16,
-15, -12, -11, -9, -8, -6, -5, -4, -2, 0, };

#endif /* AKWF_1434_512_H_ */
