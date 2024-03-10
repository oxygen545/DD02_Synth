#ifndef AKWF_1972_512_H_
#define AKWF_1972_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1972_512_NUM_CELLS 512
#define AKWF_1972_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1972_512_DATA [] = {1,
1, 2, 3, 4, 5, 5, 6, 7, 7, 8, 9, 10, 9, 10, 11, 12, 12, 13, 15, 14, 16, 17, 17,
19, 19, 20, 21, 21, 22, 23, 24, 24, 26, 26, 27, 27, 28, 30, 31, 32, 32, 33, 34,
35, 35, 36, 37, 37, 38, 39, 40, 40, 41, 42, 43, 43, 45, 45, 46, 46, 48, 48, 50,
50, 51, 52, 52, 54, 54, 55, 55, 56, 57, 58, 58, 59, 60, 60, 62, 63, 63, 64, 65,
65, 65, 66, 67, 68, 68, 69, 70, 70, 72, 72, 74, 74, 74, 76, 75, 76, 78, 78, 78,
79, 81, 82, 82, 82, 83, 84, 85, 85, 86, 86, 88, 87, 89, 89, 90, 91, 91, 92, 93,
94, 93, 94, 95, 96, 96, 97, 98, 98, 99, 99, 100, 100, 101, 101, 103, 103, 103,
104, 105, 105, 105, 107, 107, 108, 108, 108, 109, 109, 111, 111, 111, 112, 113,
112, 113, 113, 114, 115, 115, 115, 117, 116, 118, 117, 119, 118, 119, 120, 121,
120, 121, 121, 122, 121, 122, 122, 123, 123, 123, 123, 123, 123, 124, 124, 125,
124, 124, 126, 125, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 125, 125, 125, 125, 123, 123,
123, 123, 122, 121, 121, 120, 119, 120, 118, 118, 117, 117, 116, 115, 115, 114,
113, 112, 112, 110, 110, 110, 109, 108, 107, 107, 106, 101, 96, 90, 84, 79, 73,
68, 62, 56, 51, 44, 39, 34, 29, 22, 17, 12, 6, 0, -5, -12, -18, -25, -31, -38,
-44, -50, -56, -63, -69, -75, -81, -88, -95, -101, -106, -113, -119, -121, -120,
-121, -122, -122, -123, -122, -123, -123, -124, -124, -124, -125, -125, -125,
-126, -126, -126, -127, -126, -127, -127, -126, -126, -126, -127, -127, -126,
-127, -127, -127, -127, -127, -127, -127, -126, -127, -126, -127, -126, -125,
-125, -125, -126, -125, -125, -124, -123, -123, -123, -123, -122, -123, -122,
-122, -122, -121, -121, -119, -120, -120, -119, -119, -118, -118, -116, -116,
-116, -114, -114, -114, -113, -113, -112, -112, -111, -110, -110, -110, -109,
-108, -108, -108, -107, -107, -106, -106, -105, -105, -105, -103, -103, -103,
-102, -101, -101, -100, -100, -99, -98, -98, -96, -96, -96, -95, -93, -93, -93,
-92, -91, -90, -89, -89, -88, -88, -87, -86, -86, -85, -85, -84, -83, -82, -82,
-82, -81, -80, -80, -79, -79, -77, -77, -76, -75, -75, -73, -73, -72, -72, -70,
-70, -69, -69, -67, -67, -66, -66, -64, -64, -63, -61, -62, -61, -59, -60, -58,
-58, -57, -56, -56, -55, -54, -54, -53, -52, -51, -51, -49, -48, -49, -47, -46,
-45, -45, -44, -44, -43, -41, -41, -40, -40, -39, -38, -38, -35, -36, -34, -34,
-33, -32, -32, -30, -30, -29, -28, -28, -27, -25, -25, -24, -24, -23, -22, -21,
-21, -20, -18, -17, -17, -16, -15, -14, -12, -12, -10, -10, -9, -8, -6, -6, -4,
-4, -2, -2, -1, };

#endif /* AKWF_1972_512_H_ */
