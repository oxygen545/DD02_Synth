#ifndef AKWF_1298_512_H_
#define AKWF_1298_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1298_512_NUM_CELLS 512
#define AKWF_1298_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1298_512_DATA [] = {1,
3, 6, 8, 11, 12, 15, 17, 19, 22, 24, 26, 29, 31, 33, 37, 38, 40, 44, 45, 48, 50,
53, 55, 58, 60, 63, 66, 68, 71, 74, 76, 78, 81, 82, 86, 88, 90, 93, 95, 97, 99,
101, 103, 106, 107, 109, 110, 113, 115, 115, 117, 119, 120, 122, 123, 124, 124,
126, 127, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 126, 125,
124, 123, 122, 121, 120, 119, 117, 116, 115, 113, 111, 110, 108, 106, 104, 103,
100, 99, 97, 94, 92, 90, 88, 85, 83, 81, 78, 76, 73, 71, 68, 67, 63, 62, 59, 57,
54, 52, 51, 48, 44, 43, 41, 38, 36, 34, 32, 29, 28, 25, 23, 21, 18, 18, 15, 13,
11, 9, 6, 4, 3, 1, -1, -3, -5, -8, -10, -11, -13, -16, -17, -19, -20, -23, -25,
-26, -29, -29, -32, -34, -36, -37, -38, -42, -43, -44, -46, -47, -48, -50, -52,
-54, -56, -56, -58, -60, -61, -61, -63, -65, -65, -66, -67, -69, -70, -70, -71,
-72, -73, -73, -74, -75, -75, -75, -77, -76, -76, -76, -77, -77, -76, -77, -76,
-76, -76, -76, -75, -75, -75, -74, -74, -72, -72, -71, -70, -71, -70, -68, -68,
-68, -66, -65, -65, -63, -63, -62, -61, -61, -59, -59, -57, -57, -56, -55, -53,
-53, -53, -53, -51, -51, -50, -48, -48, -47, -47, -46, -45, -43, -42, -39, -38,
-36, -33, -31, -30, -30, -28, -27, -25, -24, -23, -21, -19, -18, -16, -15, -13,
-12, -11, -9, -7, -6, -4, -4, -3, -1, 0, 1, 3, 4, 6, 7, 8, 10, 11, 13, 14, 15,
17, 18, 19, 21, 22, 23, 25, 26, 28, 30, 30, 31, 32, 35, 35, 37, 38, 39, 39, 41,
42, 42, 43, 44, 45, 46, 46, 47, 48, 49, 49, 49, 50, 50, 49, 48, 49, 48, 48, 48,
48, 48, 47, 47, 46, 46, 45, 45, 43, 42, 41, 40, 39, 38, 38, 37, 34, 33, 33, 31,
29, 28, 27, 26, 25, 23, 21, 19, 18, 16, 15, 14, 12, 12, 10, 8, 6, 5, 3, 2, 0,
-2, -2, -3, -5, -6, -7, -8, -10, -10, -11, -13, -14, -14, -15, -17, -17, -19,
-19, -20, -21, -21, -23, -23, -24, -26, -26, -27, -28, -28, -30, -31, -31, -32,
-32, -34, -35, -35, -37, -37, -38, -39, -39, -40, -41, -43, -43, -44, -46, -46,
-47, -48, -49, -50, -51, -52, -53, -53, -55, -56, -56, -58, -58, -60, -60, -61,
-62, -63, -64, -65, -65, -66, -67, -67, -68, -68, -68, -69, -70, -70, -71, -71,
-71, -71, -71, -72, -72, -71, -71, -71, -72, -70, -71, -70, -69, -70, -69, -68,
-68, -67, -68, -66, -66, -64, -64, -63, -62, -62, -62, -61, -60, -58, -57, -56,
-55, -55, -54, -52, -51, -51, -49, -49, -48, -46, -45, -44, -43, -43, -41, -40,
-40, -38, -37, -36, -35, -32, -29, -28, -25, -22, -20, -17, -15, -14, -12, -10,
-7, -5, -3, -1, };

#endif /* AKWF_1298_512_H_ */
