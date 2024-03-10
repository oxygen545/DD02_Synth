#ifndef AKWF_0219_512_H_
#define AKWF_0219_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0219_512_NUM_CELLS 512
#define AKWF_0219_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0219_512_DATA [] = {1,
3, 6, 7, 9, 11, 13, 15, 16, 18, 20, 21, 24, 25, 28, 29, 31, 33, 36, 38, 40, 43,
45, 47, 49, 51, 54, 56, 58, 59, 62, 64, 67, 68, 70, 72, 74, 74, 76, 79, 80, 82,
83, 85, 86, 88, 88, 89, 90, 92, 92, 93, 94, 95, 95, 95, 97, 97, 98, 98, 98, 98,
99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 98, 98, 98, 97, 96, 96, 95, 96, 95, 95,
93, 92, 92, 91, 90, 89, 89, 87, 87, 86, 85, 84, 83, 82, 80, 80, 78, 78, 77, 75,
75, 73, 72, 71, 70, 69, 67, 67, 66, 64, 63, 63, 61, 60, 59, 59, 57, 56, 55, 54,
53, 53, 51, 51, 49, 48, 48, 47, 46, 46, 46, 46, 45, 45, 45, 45, 45, 45, 46, 47,
47, 47, 48, 48, 50, 50, 51, 53, 53, 55, 56, 58, 59, 62, 62, 65, 67, 70, 74, 78,
81, 85, 87, 91, 93, 96, 98, 101, 104, 106, 108, 111, 112, 113, 116, 117, 119,
121, 122, 123, 123, 124, 125, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127,
127, 125, 124, 122, 120, 119, 117, 115, 113, 110, 108, 106, 103, 101, 98, 96,
94, 90, 88, 86, 82, 80, 77, 74, 72, 69, 66, 63, 60, 58, 56, 52, 49, 47, 44, 41,
40, 37, 34, 32, 29, 27, 25, 22, 19, 18, 16, 13, 10, 9, 7, 5, 3, 0, -2, -4, -6,
-8, -9, -11, -13, -15, -18, -19, -21, -22, -24, -28, -29, -32, -34, -36, -38,
-41, -43, -45, -47, -50, -51, -54, -57, -59, -60, -62, -64, -67, -69, -71, -72,
-74, -76, -78, -79, -81, -82, -83, -85, -86, -87, -88, -90, -91, -91, -92, -93,
-94, -95, -96, -96, -96, -97, -97, -98, -98, -98, -98, -98, -98, -99, -99, -98,
-98, -98, -99, -98, -98, -97, -97, -95, -96, -95, -95, -94, -94, -94, -93, -91,
-90, -90, -90, -89, -88, -86, -86, -85, -85, -84, -82, -81, -80, -80, -78, -77,
-76, -76, -73, -73, -72, -71, -70, -69, -67, -67, -65, -65, -63, -62, -62, -60,
-59, -58, -58, -56, -55, -54, -53, -52, -50, -50, -49, -48, -48, -46, -45, -44,
-44, -43, -42, -41, -41, -40, -38, -39, -37, -37, -36, -37, -36, -35, -34, -34,
-35, -34, -34, -34, -34, -35, -35, -35, -36, -36, -37, -38, -39, -40, -41, -42,
-43, -45, -46, -47, -49, -50, -52, -53, -56, -58, -61, -65, -68, -71, -75, -79,
-82, -85, -88, -91, -94, -96, -99, -101, -104, -106, -107, -109, -111, -113,
-114, -116, -117, -118, -119, -120, -121, -122, -123, -123, -124, -124, -124,
-124, -125, -124, -123, -122, -121, -120, -118, -117, -115, -113, -111, -109,
-107, -104, -102, -100, -97, -94, -92, -90, -87, -84, -82, -79, -76, -73, -70,
-67, -65, -62, -60, -56, -54, -52, -49, -46, -43, -41, -38, -36, -34, -32, -28,
-27, -25, -22, -19, -17, -15, -13, -10, -8, -6, -5, -2, 0, };

#endif /* AKWF_0219_512_H_ */