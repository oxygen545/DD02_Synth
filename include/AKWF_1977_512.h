#ifndef AKWF_1977_512_H_
#define AKWF_1977_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1977_512_NUM_CELLS 512
#define AKWF_1977_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1977_512_DATA [] = {2,
7, 11, 15, 18, 22, 25, 29, 31, 35, 38, 41, 46, 48, 51, 55, 59, 62, 65, 68, 72,
75, 76, 77, 80, 81, 83, 84, 86, 87, 89, 90, 92, 93, 95, 97, 98, 99, 102, 104,
103, 104, 102, 101, 101, 99, 99, 98, 97, 96, 95, 94, 94, 92, 92, 91, 90, 89, 88,
87, 87, 86, 86, 86, 84, 84, 84, 82, 82, 81, 81, 80, 79, 79, 78, 78, 77, 77, 76,
77, 78, 79, 80, 81, 82, 82, 83, 83, 84, 86, 86, 87, 87, 88, 90, 90, 91, 93, 94,
96, 97, 99, 100, 103, 104, 106, 107, 109, 111, 112, 113, 115, 117, 119, 120,
122, 124, 123, 124, 124, 124, 124, 125, 125, 125, 126, 126, 127, 126, 127, 127,
127, 127, 127, 127, 127, 126, 125, 123, 121, 120, 118, 117, 114, 113, 112, 111,
109, 107, 105, 104, 102, 101, 99, 96, 95, 94, 92, 89, 88, 86, 84, 82, 80, 78,
77, 76, 74, 71, 69, 67, 65, 64, 63, 63, 63, 62, 63, 61, 61, 61, 61, 61, 60, 60,
59, 60, 59, 59, 60, 59, 59, 59, 61, 62, 62, 64, 65, 66, 67, 68, 69, 71, 72, 72,
74, 75, 77, 77, 78, 79, 80, 79, 80, 81, 81, 81, 81, 81, 81, 82, 82, 82, 82, 82,
82, 82, 84, 83, 83, 82, 80, 77, 75, 73, 71, 68, 66, 63, 62, 59, 57, 54, 51, 49,
47, 46, 43, 40, 37, 34, 29, 26, 22, 17, 14, 10, 7, 2, -1, -4, -9, -12, -16, -20,
-24, -27, -30, -34, -37, -38, -42, -43, -47, -49, -52, -55, -57, -60, -62, -65,
-67, -70, -72, -76, -78, -80, -81, -81, -81, -81, -82, -81, -81, -81, -81, -81,
-82, -81, -82, -82, -82, -82, -82, -83, -82, -81, -80, -79, -78, -77, -75, -74,
-73, -71, -71, -70, -69, -67, -66, -66, -64, -63, -62, -60, -60, -60, -60, -60,
-60, -60, -60, -60, -60, -61, -61, -61, -61, -60, -60, -61, -61, -60, -61, -62,
-64, -66, -67, -69, -70, -72, -75, -76, -78, -79, -81, -83, -85, -86, -87, -90,
-91, -93, -95, -96, -98, -100, -102, -103, -105, -107, -109, -111, -112, -114,
-116, -118, -119, -121, -123, -125, -126, -125, -126, -125, -127, -126, -127,
-126, -126, -125, -126, -126, -125, -126, -126, -126, -125, -125, -126, -125,
-124, -122, -121, -119, -118, -116, -114, -113, -112, -110, -108, -106, -105,
-103, -102, -101, -99, -97, -96, -94, -94, -92, -92, -90, -89, -88, -88, -87,
-86, -84, -83, -83, -81, -80, -79, -78, -77, -76, -76, -78, -79, -78, -78, -80,
-80, -80, -80, -81, -82, -82, -82, -83, -84, -84, -85, -86, -86, -87, -88, -89,
-90, -90, -91, -92, -94, -94, -95, -96, -98, -98, -99, -100, -101, -102, -104,
-103, -102, -100, -100, -98, -97, -96, -95, -94, -93, -91, -91, -88, -88, -88,
-85, -85, -84, -83, -80, -74, -69, -65, -60, -55, -51, -45, -40, -35, -30, -26,
-21, -16, -11, -5, -2, };

#endif /* AKWF_1977_512_H_ */
