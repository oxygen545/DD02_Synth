#ifndef AKWF_0717_512_H_
#define AKWF_0717_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0717_512_NUM_CELLS 512
#define AKWF_0717_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0717_512_DATA [] = {1,
4, 7, 9, 11, 14, 16, 16, 18, 20, 22, 24, 25, 27, 28, 30, 31, 33, 33, 34, 36, 36,
38, 39, 40, 40, 41, 43, 43, 45, 45, 46, 46, 46, 48, 48, 49, 49, 49, 50, 51, 51,
52, 50, 52, 51, 52, 51, 53, 50, 66, 83, 87, 93, 96, 100, 103, 106, 109, 112,
113, 115, 116, 119, 121, 123, 122, 124, 124, 126, 126, 127, 126, 127, 126, 127,
125, 102, 95, 89, 84, 81, 77, 74, 71, 69, 65, 63, 60, 58, 56, 55, 53, 50, 50,
48, 47, 45, 43, 42, 41, 39, 38, 36, 36, 34, 34, 32, 31, 30, 29, 29, 28, 26, 25,
25, 24, 24, 22, 22, 21, 20, 20, 19, 19, 18, 18, 17, 17, 16, 16, 16, 15, 15, 15,
15, 14, 14, 14, 13, 13, 13, 13, 13, 14, 12, 13, 11, 5, 5, 4, 2, -1, -6, -8, -9,
-11, -20, -23, -26, -29, -29, -30, -31, -32, -32, -31, -43, -51, -54, -58, -59,
-62, -63, -66, -66, -68, -70, -70, -71, -73, -73, -75, -75, -76, -76, -75, -77,
-77, -77, -77, -83, -86, -87, -88, -89, -90, -91, -92, -92, -93, -94, -95, -94,
-95, -95, -97, -97, -97, -97, -98, -98, -98, -99, -99, -99, -99, -100, -100,
-100, -101, -101, -102, -101, -102, -101, -102, -101, -102, -102, -103, -103,
-102, -103, -102, -103, -102, -104, -101, -106, -88, -61, -56, -46, -42, -36,
-32, -27, -23, -20, -17, -12, -10, -7, -4, -2, 1, 3, 5, 7, 11, 12, 14, 16, 17,
20, 21, 23, 25, 27, 27, 29, 31, 33, 33, 34, 35, 37, 38, 39, 40, 41, 42, 43, 44,
45, 45, 45, 46, 47, 47, 48, 49, 49, 49, 49, 50, 51, 50, 51, 52, 52, 52, 51, 53,
51, 71, 84, 88, 93, 97, 101, 103, 107, 109, 112, 113, 115, 117, 119, 121, 121,
122, 124, 124, 126, 125, 127, 126, 127, 126, 127, 119, 99, 95, 87, 84, 80, 77,
72, 70, 67, 65, 62, 60, 58, 57, 54, 52, 51, 49, 47, 46, 45, 42, 42, 40, 38, 38,
36, 36, 34, 33, 32, 30, 30, 29, 29, 27, 27, 25, 25, 24, 23, 23, 21, 21, 20, 21,
19, 19, 19, 18, 17, 17, 16, 16, 16, 16, 15, 15, 14, 15, 14, 14, 14, 13, 13, 14,
13, 14, 13, 14, 9, 5, 5, 3, 2, -4, -7, -10, -9, -13, -21, -24, -26, -28, -29,
-31, -31, -32, -32, -33, -46, -51, -55, -58, -60, -63, -63, -66, -67, -69, -70,
-71, -71, -72, -73, -75, -75, -75, -76, -76, -76, -77, -77, -77, -83, -85, -87,
-88, -89, -89, -91, -92, -93, -93, -94, -94, -95, -95, -96, -97, -97, -97, -98,
-98, -98, -99, -99, -99, -99, -100, -100, -100, -101, -101, -100, -101, -101,
-102, -102, -102, -101, -102, -102, -102, -102, -103, -103, -102, -103, -102,
-104, -102, -106, -81, -58, -53, -44, -39, -33, -30, -25, -22, -17, -14, -11,
-8, -4, -2, 0, };

#endif /* AKWF_0717_512_H_ */
