#ifndef AKWF_1967_512_H_
#define AKWF_1967_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1967_512_NUM_CELLS 512
#define AKWF_1967_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1967_512_DATA [] = {1,
2, 3, 4, 5, 6, 8, 9, 11, 13, 15, 17, 19, 20, 23, 24, 27, 28, 30, 33, 34, 36, 38,
40, 41, 44, 45, 48, 49, 51, 51, 54, 55, 57, 59, 61, 63, 64, 66, 68, 69, 71, 73,
75, 76, 78, 79, 81, 82, 82, 84, 86, 88, 88, 89, 91, 92, 94, 96, 97, 97, 99, 102,
102, 103, 105, 105, 106, 107, 108, 109, 110, 111, 111, 113, 114, 115, 116, 117,
118, 118, 119, 120, 121, 121, 122, 122, 122, 122, 123, 123, 124, 125, 125, 126,
126, 125, 126, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 125,
125, 125, 124, 124, 123, 122, 123, 122, 122, 122, 122, 121, 121, 120, 119, 118,
119, 117, 116, 117, 116, 115, 115, 114, 113, 113, 112, 111, 111, 110, 109, 109,
108, 106, 105, 105, 105, 104, 102, 102, 101, 100, 99, 99, 98, 97, 96, 95, 94,
93, 93, 92, 90, 89, 88, 88, 87, 85, 85, 83, 82, 81, 80, 79, 78, 77, 76, 76, 75,
73, 73, 71, 70, 69, 67, 66, 65, 64, 62, 62, 61, 59, 58, 57, 55, 55, 53, 52, 51,
50, 48, 47, 46, 45, 43, 41, 40, 38, 37, 36, 34, 34, 32, 31, 29, 28, 27, 25, 24,
23, 21, 19, 18, 17, 15, 13, 13, 12, 10, 8, 7, 5, 5, 3, 2, 0, -2, -2, -4, -5, -6,
-8, -9, -10, -12, -13, -15, -16, -17, -18, -20, -20, -23, -23, -25, -27, -28,
-28, -30, -31, -31, -32, -33, -34, -36, -36, -37, -38, -39, -40, -42, -42, -44,
-45, -46, -46, -47, -47, -48, -48, -49, -50, -50, -51, -51, -53, -53, -53, -54,
-55, -55, -54, -56, -57, -56, -57, -58, -57, -58, -58, -59, -58, -59, -58, -59,
-59, -59, -60, -60, -61, -61, -61, -61, -62, -62, -61, -62, -63, -61, -62, -62,
-62, -63, -63, -62, -62, -64, -64, -63, -63, -63, -64, -64, -65, -64, -65, -65,
-65, -66, -66, -66, -65, -66, -67, -66, -66, -68, -68, -68, -68, -68, -68, -69,
-70, -70, -69, -71, -72, -71, -72, -72, -73, -73, -73, -74, -74, -75, -76, -76,
-76, -76, -77, -78, -77, -78, -79, -78, -79, -80, -79, -80, -80, -81, -81, -81,
-82, -82, -82, -83, -82, -83, -83, -83, -84, -83, -84, -84, -83, -84, -84, -84,
-84, -84, -85, -85, -84, -85, -86, -84, -85, -84, -84, -83, -83, -83, -82, -82,
-82, -81, -82, -81, -81, -81, -80, -79, -79, -79, -78, -77, -76, -76, -75, -74,
-73, -73, -71, -70, -70, -69, -67, -67, -67, -65, -65, -64, -62, -61, -60, -59,
-56, -55, -54, -52, -51, -50, -48, -47, -46, -44, -43, -42, -40, -38, -38, -35,
-35, -32, -31, -31, -29, -28, -27, -25, -24, -22, -22, -21, -19, -17, -17, -16,
-15, -13, -12, -11, -10, -8, -7, -6, -5, -4, -3, -2, -1, 0, };

#endif /* AKWF_1967_512_H_ */
