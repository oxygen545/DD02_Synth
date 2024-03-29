#ifndef AKWF_1935_512_H_
#define AKWF_1935_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1935_512_NUM_CELLS 512
#define AKWF_1935_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1935_512_DATA [] = {0,
6, 11, 17, 22, 27, 33, 38, 43, 48, 53, 58, 62, 67, 71, 76, 81, 85, 89, 92, 96,
99, 103, 106, 109, 111, 115, 117, 119, 121, 122, 123, 124, 126, 126, 127, 127,
127, 127, 127, 127, 127, 127, 125, 125, 123, 121, 120, 118, 116, 115, 113, 109,
108, 106, 103, 101, 98, 94, 92, 89, 87, 84, 81, 77, 74, 71, 69, 66, 63, 60, 57,
55, 52, 49, 46, 44, 42, 40, 37, 35, 32, 31, 29, 27, 26, 24, 23, 22, 21, 20, 20,
19, 18, 18, 17, 17, 17, 17, 18, 18, 19, 19, 20, 21, 22, 22, 23, 24, 26, 27, 28,
29, 31, 32, 33, 35, 36, 38, 39, 40, 42, 44, 45, 46, 48, 50, 50, 52, 53, 54, 55,
56, 56, 58, 59, 60, 60, 60, 61, 60, 62, 61, 61, 61, 60, 59, 59, 59, 57, 56, 55,
54, 53, 51, 49, 48, 45, 44, 42, 40, 38, 35, 32, 30, 27, 24, 21, 18, 15, 13, 9,
7, 3, 0, -3, -6, -11, -14, -17, -20, -23, -27, -31, -34, -37, -40, -44, -47,
-50, -53, -57, -59, -62, -66, -68, -72, -74, -76, -79, -81, -83, -86, -88, -90,
-92, -93, -95, -96, -99, -99, -100, -101, -102, -103, -104, -104, -103, -104,
-105, -104, -104, -103, -103, -102, -101, -101, -99, -98, -98, -96, -94, -92,
-90, -89, -87, -85, -82, -80, -78, -75, -72, -70, -67, -64, -61, -58, -55, -52,
-49, -45, -42, -38, -35, -32, -28, -25, -21, -17, -14, -11, -7, -4, 0, 3, 7, 10,
14, 17, 20, 24, 27, 30, 33, 37, 39, 43, 45, 47, 50, 52, 55, 58, 61, 62, 65, 66,
68, 69, 70, 73, 74, 76, 77, 76, 78, 78, 79, 79, 79, 80, 79, 80, 79, 78, 77, 76,
76, 75, 74, 72, 71, 69, 67, 67, 63, 62, 60, 58, 55, 53, 51, 48, 45, 43, 40, 37,
35, 32, 29, 26, 22, 20, 16, 13, 9, 6, 4, 1, -3, -5, -9, -11, -14, -17, -19, -23,
-26, -29, -30, -33, -35, -38, -40, -42, -44, -45, -47, -49, -51, -52, -52, -54,
-56, -56, -57, -58, -59, -59, -59, -60, -60, -60, -59, -60, -59, -58, -58, -57,
-56, -56, -54, -53, -54, -52, -50, -50, -49, -46, -45, -44, -42, -41, -40, -38,
-36, -35, -34, -32, -31, -30, -29, -27, -26, -24, -25, -22, -23, -21, -21, -20,
-19, -18, -19, -19, -18, -19, -18, -19, -20, -20, -21, -22, -22, -23, -25, -26,
-28, -29, -30, -32, -34, -36, -39, -41, -43, -47, -49, -51, -54, -56, -59, -62,
-65, -68, -70, -74, -76, -79, -82, -85, -88, -91, -93, -97, -100, -102, -104,
-107, -109, -110, -113, -116, -118, -119, -121, -123, -123, -125, -126, -126,
-127, -128, -128, -128, -128, -127, -127, -125, -125, -124, -122, -121, -119,
-116, -114, -113, -110, -107, -104, -100, -98, -95, -90, -87, -82, -78, -74,
-69, -65, -59, -56, -49, -45, -40, -35, -30, -24, -19, -14, -8, -3, };

#endif /* AKWF_1935_512_H_ */
