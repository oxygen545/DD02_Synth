#ifndef AKWF_0106_512_H_
#define AKWF_0106_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0106_512_NUM_CELLS 512
#define AKWF_0106_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0106_512_DATA [] =
{-1, 1, 2, 5, 5, 8, 9, 11, 12, 15, 15, 17, 18, 20, 21, 23, 25, 27, 29, 29, 32,
32, 35, 36, 38, 40, 41, 42, 44, 46, 47, 49, 51, 52, 53, 55, 56, 59, 60, 62, 63,
64, 66, 67, 68, 71, 72, 73, 75, 77, 77, 79, 80, 82, 83, 85, 86, 88, 88, 90, 92,
92, 93, 95, 97, 97, 99, 100, 101, 102, 103, 104, 106, 107, 107, 109, 109, 110,
111, 112, 114, 114, 115, 116, 116, 117, 119, 119, 120, 120, 122, 121, 122, 122,
123, 124, 124, 125, 126, 125, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126,
125, 124, 124, 124, 123, 123, 123, 122, 121, 121, 120, 119, 119, 118, 117, 117,
116, 115, 115, 114, 113, 111, 110, 109, 108, 107, 107, 106, 105, 104, 103, 101,
100, 98, 98, 96, 95, 94, 93, 92, 91, 89, 88, 86, 84, 84, 82, 81, 79, 78, 77, 76,
74, 72, 71, 69, 67, 67, 64, 63, 61, 59, 58, 57, 55, 53, 52, 50, 48, 46, 45, 44,
42, 41, 39, 37, 35, 34, 33, 31, 29, 28, 26, 24, 22, 21, 19, 18, 17, 14, 13, 11,
10, 8, 6, 5, 3, 2, 0, 0, -2, -4, -6, -8, -9, -10, -12, -13, -14, -17, -17, -18,
-21, -22, -24, -26, -26, -28, -29, -30, -32, -33, -35, -35, -37, -37, -40, -41,
-42, -43, -45, -45, -46, -48, -49, -51, -51, -52, -53, -55, -55, -56, -58, -59,
-59, -61, -61, -62, -63, -63, -64, -66, -67, -68, -69, -68, -70, -71, -71, -72,
-73, -74, -75, -75, -75, -76, -77, -77, -78, -78, -79, -79, -80, -81, -81, -82,
-83, -82, -83, -84, -83, -83, -85, -84, -84, -84, -85, -85, -85, -85, -86, -86,
-85, -87, -86, -87, -86, -86, -86, -86, -86, -87, -87, -86, -86, -87, -86, -86,
-85, -85, -86, -86, -85, -85, -85, -85, -85, -85, -85, -84, -84, -84, -84, -84,
-82, -83, -82, -82, -83, -82, -83, -82, -81, -81, -81, -81, -81, -80, -80, -81,
-81, -80, -80, -80, -80, -80, -79, -80, -79, -79, -80, -78, -79, -79, -79, -78,
-79, -77, -78, -78, -78, -78, -78, -78, -78, -78, -77, -77, -78, -78, -77, -77,
-77, -77, -78, -76, -77, -77, -76, -77, -76, -77, -77, -76, -76, -75, -76, -76,
-76, -75, -75, -75, -75, -75, -74, -75, -74, -74, -73, -73, -73, -73, -72, -72,
-73, -72, -71, -71, -70, -70, -70, -69, -69, -69, -69, -68, -68, -67, -67, -67,
-66, -65, -64, -64, -64, -62, -62, -61, -61, -62, -61, -59, -60, -58, -58, -57,
-56, -55, -54, -54, -53, -52, -51, -51, -50, -49, -48, -47, -46, -45, -44, -44,
-43, -41, -40, -39, -39, -36, -36, -35, -33, -33, -32, -30, -30, -28, -27, -25,
-25, -23, -22, -20, -19, -17, -16, -15, -13, -12, -11, -9, -9, -7, -6, -4, -2,
0, };

#endif /* AKWF_0106_512_H_ */
