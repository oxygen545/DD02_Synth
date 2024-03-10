#ifndef AKWF_0612_512_H_
#define AKWF_0612_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0612_512_NUM_CELLS 512
#define AKWF_0612_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0612_512_DATA [] = {1,
1, 2, 3, 2, 3, 4, 5, 5, 5, 5, 5, 5, 4, 4, 5, 3, 4, 3, 5, 4, 3, 5, 7, 6, 7, 6, 9,
7, 9, 8, 10, 9, 10, 8, 10, 8, 8, 9, 3, 95, 117, 107, 115, 108, 114, 109, 113,
109, 112, 110, 112, 111, 112, 112, 113, 112, 112, 112, 112, 113, 112, 113, 113,
113, 113, 113, 113, 114, 113, 114, 113, 114, 114, 114, 114, 114, 114, 114, 114,
115, 114, 115, 115, 116, 115, 115, 114, 115, 116, 116, 116, 116, 116, 115, 116,
115, 116, 116, 116, 117, 117, 117, 117, 117, 116, 118, 117, 117, 117, 117, 118,
118, 118, 119, 118, 118, 118, 118, 119, 118, 119, 119, 119, 119, 119, 119, 119,
120, 119, 119, 120, 120, 120, 121, 120, 120, 120, 120, 121, 121, 121, 120, 121,
121, 121, 122, 121, 121, 121, 122, 123, 122, 122, 122, 122, 123, 123, 122, 122,
123, 123, 123, 123, 123, 123, 123, 123, 123, 124, 123, 124, 125, 125, 124, 125,
125, 125, 125, 126, 125, 125, 124, 125, 125, 124, 126, 125, 125, 125, 126, 125,
127, 126, 127, 126, 127, 127, 127, 127, 127, 126, 127, 127, 127, 127, 127, 127,
125, 127, 122, 127, 67, 20, 36, 25, 32, 26, 29, 26, 28, 25, 26, 24, 25, 23, 24,
23, 23, 22, 21, 21, 20, 20, 20, 20, 18, 19, 18, 18, 16, 17, 15, 15, 14, 15, 13,
14, 13, 12, 10, 3, 0, -1, -3, -5, -8, -9, -12, -12, -15, -16, -18, -19, -20,
-21, -24, -23, -25, -26, -28, -28, -30, -31, -31, -34, -31, -80, -93, -87, -91,
-88, -89, -87, -90, -88, -88, -87, -88, -87, -89, -87, -88, -88, -87, -87, -87,
-87, -86, -86, -87, -86, -87, -86, -87, -85, -86, -86, -85, -86, -85, -86, -85,
-85, -85, -84, -84, -84, -84, -84, -84, -83, -84, -83, -84, -84, -83, -82, -83,
-83, -83, -82, -83, -82, -82, -82, -81, -82, -82, -82, -81, -82, -81, -81, -81,
-80, -80, -80, -81, -80, -80, -80, -80, -80, -80, -80, -79, -80, -79, -78, -79,
-78, -78, -79, -78, -78, -77, -77, -78, -79, -78, -77, -78, -77, -77, -76, -77,
-76, -76, -77, -77, -76, -76, -76, -75, -76, -76, -75, -75, -76, -75, -75, -74,
-74, -74, -75, -74, -74, -74, -74, -73, -74, -74, -74, -74, -73, -74, -72, -73,
-73, -72, -73, -73, -72, -73, -71, -73, -72, -72, -71, -72, -70, -72, -69, -72,
-68, -73, -67, -77, -54, 14, 6, 8, 7, 8, 7, 6, 7, 6, 7, 5, 6, 5, 6, 6, 5, 5, 5,
4, 4, 4, 5, 3, 4, 3, 3, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 0, 1, 0, -22, -23, -21,
-22, -19, -21, -18, -21, -10, 1, -3, -2, -3, -3, -4, -3, -4, -4, -4, -4, -4, -4,
-3, -3, -2, -3, -4, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, -1, -2, -2, -3,
-1, };

#endif /* AKWF_0612_512_H_ */