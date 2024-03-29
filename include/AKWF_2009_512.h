#ifndef AKWF_2009_512_H_
#define AKWF_2009_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_2009_512_NUM_CELLS 512
#define AKWF_2009_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_2009_512_DATA [] = {0,
1, 4, 6, 7, 10, 11, 12, 15, 17, 18, 20, 23, 24, 26, 29, 31, 31, 34, 36, 39, 40,
42, 44, 46, 49, 51, 52, 54, 56, 59, 60, 64, 66, 68, 70, 72, 74, 77, 79, 80, 84,
85, 89, 90, 93, 96, 98, 99, 102, 104, 106, 107, 109, 111, 113, 114, 116, 118,
120, 121, 121, 123, 124, 125, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 125, 125, 123, 122, 120, 119, 117, 115, 114, 112, 109, 107, 105, 101,
99, 96, 94, 90, 87, 84, 80, 77, 74, 71, 67, 64, 61, 56, 53, 50, 46, 42, 40, 36,
33, 29, 26, 23, 21, 17, 15, 11, 9, 7, 4, 2, -1, -2, -5, -6, -7, -10, -10, -11,
-13, -14, -14, -16, -16, -16, -16, -17, -17, -17, -17, -17, -17, -17, -16, -16,
-16, -15, -13, -13, -12, -11, -10, -8, -7, -6, -5, -3, -2, 1, 1, 3, 5, 7, 9, 10,
12, 13, 16, 17, 19, 22, 23, 26, 27, 29, 31, 34, 35, 37, 40, 42, 44, 47, 49, 51,
53, 55, 58, 60, 64, 66, 68, 71, 73, 76, 79, 80, 84, 87, 88, 91, 95, 96, 99, 100,
103, 105, 107, 110, 111, 113, 116, 117, 118, 120, 121, 123, 123, 125, 126, 126,
127, 127, 127, 127, 127, 127, 126, 127, 125, 125, 123, 123, 121, 120, 118, 117,
115, 113, 110, 109, 105, 103, 101, 97, 94, 91, 89, 85, 82, 78, 75, 72, 68, 65,
60, 57, 53, 50, 45, 41, 39, 35, 31, 27, 23, 20, 17, 12, 9, 5, 2, -1, -4, -8,
-11, -13, -16, -20, -22, -25, -27, -30, -32, -35, -37, -39, -41, -43, -45, -48,
-49, -50, -53, -55, -56, -58, -58, -60, -62, -62, -63, -66, -66, -67, -67, -70,
-70, -71, -72, -73, -74, -74, -75, -76, -77, -77, -78, -79, -79, -80, -80, -81,
-81, -82, -82, -83, -83, -84, -84, -84, -86, -86, -86, -87, -87, -88, -88, -88,
-89, -89, -90, -90, -90, -91, -89, -90, -91, -91, -91, -91, -91, -91, -92, -91,
-91, -91, -91, -92, -90, -91, -91, -92, -92, -92, -91, -91, -92, -92, -91, -91,
-90, -91, -91, -91, -91, -91, -91, -90, -91, -91, -90, -91, -90, -91, -90, -91,
-91, -91, -90, -90, -90, -91, -91, -91, -91, -91, -90, -91, -91, -91, -92, -91,
-91, -91, -92, -92, -91, -92, -92, -93, -92, -92, -91, -91, -92, -91, -92, -91,
-92, -91, -90, -91, -91, -91, -90, -90, -90, -89, -90, -88, -88, -87, -88, -87,
-87, -86, -85, -85, -85, -84, -84, -83, -83, -82, -81, -81, -80, -79, -78, -78,
-77, -76, -75, -74, -74, -74, -72, -72, -70, -70, -69, -67, -66, -66, -64, -63,
-63, -61, -61, -59, -58, -57, -55, -54, -52, -52, -51, -49, -48, -47, -44, -44,
-42, -41, -40, -38, -36, -35, -33, -32, -30, -29, -28, -26, -24, -23, -21, -19,
-18, -16, -14, -13, -11, -10, -8, -6, -4, -2, 0, };

#endif /* AKWF_2009_512_H_ */
