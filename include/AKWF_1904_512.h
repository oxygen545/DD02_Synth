#ifndef AKWF_1904_512_H_
#define AKWF_1904_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1904_512_NUM_CELLS 512
#define AKWF_1904_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1904_512_DATA [] = {0,
1, 1, 3, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 9, 9, 9, 10, 10, 12, 13, 14, 14, 16, 17,
18, 20, 21, 21, 22, 24, 24, 25, 26, 28, 29, 30, 31, 31, 33, 34, 36, 36, 38, 39,
39, 40, 41, 42, 43, 44, 46, 46, 47, 49, 50, 50, 52, 53, 53, 56, 55, 57, 58, 59,
60, 61, 62, 63, 64, 65, 67, 67, 68, 70, 70, 71, 72, 74, 75, 76, 76, 78, 79, 79,
81, 82, 82, 84, 85, 86, 87, 88, 89, 90, 91, 93, 93, 95, 96, 96, 97, 98, 99, 100,
101, 102, 103, 104, 105, 107, 106, 109, 109, 110, 112, 114, 114, 115, 118, 118,
119, 121, 122, 123, 124, 124, 125, 125, 127, 127, 127, 127, 127, 127, 126, 127,
127, 126, 125, 125, 124, 124, 123, 123, 121, 121, 120, 119, 118, 117, 115, 114,
113, 112, 111, 108, 108, 106, 105, 105, 103, 101, 100, 100, 99, 98, 98, 96, 94,
93, 93, 92, 90, 90, 88, 87, 87, 85, 85, 83, 82, 82, 80, 79, 77, 77, 77, 75, 74,
73, 72, 71, 69, 69, 67, 67, 65, 65, 63, 62, 61, 60, 59, 58, 57, 55, 55, 54, 52,
52, 50, 49, 49, 48, 47, 44, 45, 43, 42, 42, 40, 38, 38, 37, 36, 35, 34, 33, 32,
31, 29, 29, 28, 27, 25, 24, 24, 22, 20, 21, 19, 19, 18, 15, 15, 14, 13, 12, 12,
9, 9, 8, 7, 5, 4, 3, 2, 1, 1, -1, -2, -4, -5, -5, -7, -7, -8, -10, -10, -12,
-12, -13, -15, -16, -17, -17, -19, -20, -21, -22, -22, -23, -25, -26, -27, -28,
-29, -29, -31, -33, -34, -33, -35, -36, -37, -38, -39, -40, -42, -42, -43, -45,
-46, -47, -47, -49, -49, -51, -51, -53, -55, -55, -56, -57, -58, -59, -60, -61,
-62, -63, -65, -65, -66, -67, -69, -69, -70, -71, -73, -73, -75, -76, -77, -77,
-79, -79, -80, -81, -82, -84, -85, -86, -87, -88, -89, -90, -91, -92, -92, -94,
-96, -96, -98, -98, -99, -101, -101, -102, -103, -105, -105, -107, -108, -108,
-110, -110, -112, -114, -114, -115, -117, -118, -119, -120, -120, -123, -123,
-124, -125, -127, -127, -128, -127, -128, -128, -128, -128, -127, -127, -127,
-126, -125, -125, -124, -123, -122, -122, -120, -119, -118, -117, -116, -116,
-115, -113, -111, -111, -109, -108, -108, -105, -105, -104, -103, -101, -100,
-100, -99, -97, -96, -94, -93, -93, -91, -91, -90, -89, -87, -86, -86, -85, -84,
-83, -81, -80, -79, -78, -78, -76, -75, -74, -73, -73, -70, -70, -69, -67, -68,
-65, -64, -63, -63, -62, -60, -60, -58, -58, -56, -55, -54, -53, -52, -52, -49,
-49, -47, -46, -45, -44, -44, -43, -42, -41, -40, -39, -37, -36, -35, -34, -33,
-32, -31, -30, -29, -27, -27, -26, -25, -23, -23, -22, -20, -19, -19, -17, -16,
-16, -13, -13, -11, -11, -9, -8, -7, -6, -6, -4, -3, -2, -1, 0, };

#endif /* AKWF_1904_512_H_ */
