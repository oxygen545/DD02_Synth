#ifndef AKWF_1188_512_H_
#define AKWF_1188_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1188_512_NUM_CELLS 512
#define AKWF_1188_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1188_512_DATA [] =
{21, 74, 105, 123, 127, 124, 111, 107, 102, 99, 101, 102, 98, 85, 72, 77, 89,
93, 90, 84, 85, 88, 91, 97, 97, 87, 79, 63, 45, 26, 16, 38, 68, 92, 100, 94, 83,
65, 47, 39, 36, 39, 49, 61, 67, 61, 53, 61, 73, 71, 62, 46, 36, 25, 15, 12, 3,
-10, -21, -32, -42, -52, -47, -10, 37, 73, 94, 97, 91, 77, 55, 42, 30, 21, 18,
15, 10, -7, -20, -13, 0, 5, 6, 5, 10, 17, 23, 34, 38, 35, 29, 17, 2, -15, -20,
3, 34, 58, 63, 55, 40, 21, -1, -13, -20, -21, -15, -8, -7, -18, -29, -22, -15,
-17, -28, -44, -54, -63, -69, -71, -75, -84, -89, -95, -98, -100, -86, -41, 13,
55, 82, 91, 91, 81, 64, 55, 45, 38, 37, 35, 26, 9, -7, -2, 6, 7, 2, -5, -4, -3,
-2, 5, 3, -6, -15, -30, -46, -66, -70, -45, -11, 13, 21, 16, 9, -7, -21, -24,
-24, -17, -2, 13, 21, 17, 14, 27, 41, 43, 35, 22, 16, 9, 2, 2, -5, -15, -25,
-35, -43, -50, -40, -1, 47, 83, 101, 104, 97, 80, 60, 46, 33, 23, 20, 16, 8,
-12, -25, -18, -8, -4, -7, -10, -7, -2, 3, 12, 13, 6, -3, -18, -34, -53, -57,
-32, -3, 16, 20, 8, -6, -27, -48, -58, -64, -64, -57, -50, -49, -60, -67, -58,
-50, -51, -60, -73, -79, -85, -90, -87, -89, -94, -96, -98, -98, -96, -74, -24,
33, 78, 106, 116, 119, 111, 96, 91, 83, 81, 81, 80, 74, 57, 44, 51, 60, 61, 56,
50, 51, 51, 54, 59, 54, 45, 32, 15, -4, -25, -28, -4, 27, 45, 50, 40, 28, 9, -7,
-14, -16, -13, -1, 9, 12, 4, 0, 10, 19, 18, 6, -10, -19, -30, -38, -41, -50,
-62, -73, -84, -93, -99, -88, -45, 2, 37, 54, 55, 50, 34, 14, 3, -8, -15, -14,
-16, -22, -39, -47, -35, -23, -16, -16, -16, -7, 0, 10, 23, 26, 22, 17, 6, -8,
-23, -21, 8, 40, 60, 64, 55, 41, 21, 2, -6, -11, -10, -1, 5, 5, -7, -14, -4, 3,
-2, -13, -28, -35, -45, -51, -50, -55, -62, -68, -73, -76, -77, -56, -6, 46, 86,
108, 114, 113, 99, 83, 74, 64, 58, 56, 52, 42, 22, 9, 16, 22, 21, 13, 7, 7, 7,
9, 14, 8, -2, -14, -31, -49, -69, -68, -39, -8, 11, 14, 7, -4, -21, -36, -39,
-38, -31, -17, -5, 0, -7, -8, 6, 15, 13, 3, -10, -17, -27, -33, -36, -45, -56,
-68, -79, -88, -93, -78, -36, 10, 42, 56, 55, 46, 26, 6, -8, -22, -29, -32, -38,
-49, -69, -79, -69, -61, -58, -62, -65, -59, -54, -48, -40, -41, -47, -57, -71,
-87, -105, -101, -73, -44, -27, -26, -37, -52, -74, -92, -99, -104, -100, -90,
-83, -82, -93, -95, -83, -75, -76, -86, -96, -100, -106, -106, -100, -103, -104,
-105, -105, -103, -98, -67, -15, };

#endif /* AKWF_1188_512_H_ */
