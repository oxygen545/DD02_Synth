#ifndef AKWF_0901_512_H_
#define AKWF_0901_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0901_512_NUM_CELLS 512
#define AKWF_0901_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0901_512_DATA [] = {0,
1, 1, 2, 2, 3, 2, 4, 4, 5, 4, 6, 6, 6, 6, 8, 8, 9, 9, 9, 10, 11, 12, 12, 12, 14,
13, 15, 14, 16, 16, 16, 17, 17, 18, 18, 19, 20, 21, 21, 22, 22, 22, 23, 24, 25,
24, 25, 26, 27, 27, 29, 29, 30, 30, 30, 30, 32, 32, 32, 33, 34, 34, 35, 35, 36,
36, 37, 37, 37, 38, 39, 40, 40, 41, 41, 42, 42, 43, 44, 43, 44, 46, 45, 46, 47,
47, 48, 49, 48, 50, 49, 50, 51, 51, 52, 52, 53, 54, 54, 55, 56, 56, 56, 56, 57,
59, 59, 59, 59, 61, 61, 61, 62, 62, 63, 64, 64, 65, 65, 66, 66, 67, 67, 68, 69,
69, 70, 71, 71, 72, 72, 73, 73, 74, 74, 75, 76, 76, 77, 77, 78, 77, 79, 79, 80,
80, 82, 82, 82, 82, 84, 84, 84, 84, 85, 85, 87, 87, 87, 88, 89, 89, 90, 91, 91,
92, 92, 92, 93, 93, 94, 95, 95, 96, 96, 96, 98, 98, 99, 99, 100, 100, 101, 101,
102, 103, 102, 103, 104, 104, 105, 105, 106, 106, 107, 107, 109, 108, 109, 110,
111, 111, 112, 112, 113, 113, 113, 115, 115, 115, 116, 116, 117, 118, 118, 119,
119, 120, 120, 120, 121, 121, 122, 123, 123, 124, 125, 125, 126, 127, 127, 127,
127, 113, 81, 64, 63, 65, 67, 65, 62, 56, 49, 42, 36, 30, 23, 17, 12, 7, 2, -2,
-6, -9, -13, -16, -19, -23, -25, -29, -31, -34, -38, -40, -43, -46, -48, -53,
-56, -57, -61, -65, -68, -70, -74, -77, -80, -83, -87, -89, -92, -95, -97, -100,
-103, -106, -108, -111, -113, -115, -116, -118, -120, -121, -123, -123, -125,
-126, -126, -126, -128, -127, -127, -126, -127, -126, -125, -124, -123, -123,
-122, -121, -119, -119, -118, -116, -114, -112, -111, -110, -108, -106, -104,
-103, -101, -100, -98, -96, -96, -95, -93, -92, -92, -89, -89, -87, -86, -85,
-85, -85, -83, -82, -82, -82, -82, -81, -81, -81, -81, -80, -80, -81, -81, -81,
-82, -81, -81, -82, -81, -81, -82, -81, -82, -82, -81, -81, -82, -81, -81, -82,
-81, -81, -81, -81, -80, -80, -79, -79, -78, -78, -77, -76, -75, -75, -75, -75,
-73, -72, -72, -71, -70, -68, -69, -68, -66, -66, -65, -65, -63, -62, -61, -60,
-60, -59, -58, -58, -57, -55, -54, -54, -54, -53, -52, -51, -50, -50, -49, -49,
-49, -47, -48, -47, -46, -45, -46, -44, -45, -44, -44, -43, -43, -42, -42, -42,
-41, -42, -41, -40, -40, -40, -40, -39, -39, -38, -38, -37, -37, -37, -36, -36,
-34, -35, -33, -33, -33, -33, -32, -31, -31, -31, -29, -29, -28, -28, -27, -27,
-26, -25, -25, -24, -24, -23, -22, -21, -21, -20, -19, -18, -18, -18, -16, -16,
-15, -14, -14, -14, -13, -13, -11, -12, -11, -10, -9, -9, -8, -8, -8, -7, -6,
-6, -5, -6, -5, -3, -4, -3, -2, -2, -1, -1, 0, };

#endif /* AKWF_0901_512_H_ */
