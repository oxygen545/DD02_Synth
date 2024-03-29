#ifndef AKWF_0521_512_H_
#define AKWF_0521_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0521_512_NUM_CELLS 512
#define AKWF_0521_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0521_512_DATA [] = {0,
3, 6, 9, 10, 13, 17, 18, 22, 24, 28, 30, 33, 35, 38, 41, 44, 46, 49, 51, 55, 57,
59, 63, 65, 68, 70, 73, 75, 78, 80, 82, 85, 88, 90, 92, 94, 96, 97, 100, 102,
104, 105, 107, 108, 110, 112, 114, 115, 116, 118, 119, 120, 121, 122, 123, 123,
125, 125, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126,
126, 125, 125, 125, 123, 123, 121, 121, 119, 118, 116, 116, 113, 111, 111, 109,
107, 106, 104, 102, 100, 98, 96, 94, 91, 88, 86, 84, 82, 80, 77, 74, 71, 69, 67,
64, 62, 58, 56, 52, 50, 47, 44, 42, 39, 36, 33, 30, 27, 25, 21, 19, 16, 12, 10,
7, 3, 1, -2, -4, -8, -10, -13, -15, -18, -21, -22, -25, -27, -31, -32, -34, -37,
-39, -40, -43, -46, -47, -50, -51, -53, -55, -56, -58, -60, -61, -62, -63, -65,
-67, -68, -68, -69, -70, -71, -72, -72, -73, -73, -74, -74, -75, -75, -74, -75,
-75, -76, -75, -75, -74, -74, -74, -74, -73, -72, -72, -71, -70, -69, -68, -67,
-66, -65, -64, -63, -61, -60, -59, -58, -56, -55, -53, -51, -50, -48, -47, -45,
-43, -42, -39, -38, -36, -34, -33, -31, -29, -26, -25, -23, -21, -19, -18, -15,
-13, -11, -9, -8, -5, -4, -1, 1, 3, 4, 5, 7, 10, 11, 13, 14, 17, 18, 20, 22, 23,
25, 26, 29, 30, 31, 32, 33, 35, 36, 38, 39, 41, 41, 42, 42, 43, 45, 46, 47, 47,
48, 49, 49, 50, 51, 51, 52, 52, 52, 53, 53, 53, 53, 55, 53, 54, 54, 54, 55, 54,
53, 54, 53, 53, 53, 53, 52, 52, 52, 50, 50, 50, 49, 49, 47, 48, 47, 46, 45, 44,
44, 43, 41, 40, 40, 39, 38, 37, 35, 35, 34, 34, 31, 30, 30, 28, 27, 26, 25, 24,
22, 21, 21, 19, 18, 16, 16, 14, 12, 12, 11, 10, 8, 7, 5, 4, 3, 1, 1, 0, -2, -3,
-4, -5, -7, -8, -10, -10, -12, -13, -14, -15, -17, -18, -19, -19, -21, -22, -23,
-25, -26, -28, -28, -29, -31, -31, -33, -34, -35, -37, -37, -39, -39, -41, -41,
-44, -44, -44, -46, -47, -48, -50, -50, -51, -53, -53, -55, -55, -56, -57, -59,
-60, -61, -62, -62, -63, -64, -65, -66, -66, -68, -69, -70, -70, -72, -72, -73,
-74, -75, -76, -76, -77, -78, -79, -79, -81, -81, -81, -83, -83, -84, -83, -84,
-85, -85, -85, -87, -87, -88, -88, -88, -89, -89, -90, -90, -89, -89, -91, -91,
-90, -91, -90, -90, -91, -90, -90, -90, -90, -89, -89, -89, -89, -88, -87, -87,
-86, -86, -85, -84, -84, -82, -82, -82, -80, -79, -78, -77, -76, -74, -73, -72,
-71, -69, -68, -66, -64, -63, -61, -61, -58, -57, -54, -53, -51, -49, -47, -45,
-43, -41, -38, -35, -34, -32, -30, -26, -24, -22, -19, -18, -15, -13, -9, -7,
-3, -2, };

#endif /* AKWF_0521_512_H_ */
