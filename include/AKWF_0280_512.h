#ifndef AKWF_0280_512_H_
#define AKWF_0280_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0280_512_NUM_CELLS 512
#define AKWF_0280_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0280_512_DATA [] = {2,
8, 12, 18, 23, 28, 34, 40, 45, 52, 57, 63, 67, 73, 76, 80, 83, 86, 89, 90, 91,
91, 90, 90, 88, 87, 85, 83, 81, 78, 77, 75, 73, 71, 70, 67, 66, 64, 62, 62, 61,
60, 60, 58, 58, 57, 58, 57, 57, 55, 55, 53, 52, 50, 48, 46, 44, 42, 38, 37, 34,
32, 30, 27, 25, 23, 21, 21, 19, 18, 16, 15, 15, 14, 15, 13, 13, 13, 12, 11, 10,
9, 8, 5, 3, 0, -3, -7, -10, -15, -18, -23, -28, -32, -38, -42, -47, -50, -54,
-58, -61, -64, -67, -67, -68, -67, -67, -65, -62, -60, -58, -55, -51, -48, -45,
-42, -39, -36, -33, -30, -29, -27, -25, -25, -23, -24, -25, -24, -24, -25, -26,
-25, -26, -26, -26, -27, -26, -25, -25, -24, -24, -23, -22, -22, -22, -22, -23,
-24, -25, -28, -29, -33, -37, -40, -44, -48, -52, -54, -58, -61, -64, -66, -67,
-67, -66, -66, -63, -61, -57, -52, -47, -41, -35, -29, -20, -13, -5, 2, 10, 17,
24, 32, 38, 44, 48, 54, 58, 63, 65, 68, 72, 75, 78, 82, 84, 87, 91, 94, 97, 100,
104, 107, 110, 112, 114, 116, 117, 115, 114, 112, 109, 104, 100, 94, 87, 80, 72,
64, 55, 46, 39, 31, 22, 15, 9, 2, -3, -7, -11, -15, -16, -18, -18, -17, -16,
-14, -13, -11, -8, -6, -4, -1, 0, 2, 3, 4, 4, 4, 4, 5, 3, 3, 2, 2, 1, 0, -1, -3,
-3, -3, -4, -3, -4, -3, -2, -1, -1, 0, 0, 0, 0, 0, -1, -1, -3, -5, -6, -9, -13,
-15, -19, -23, -27, -31, -37, -41, -46, -51, -55, -60, -65, -68, -71, -74, -77,
-79, -82, -82, -84, -84, -84, -85, -85, -84, -83, -83, -82, -81, -80, -81, -80,
-78, -77, -77, -76, -75, -74, -72, -71, -70, -68, -66, -64, -62, -60, -56, -53,
-49, -46, -41, -37, -34, -29, -24, -20, -17, -12, -8, -4, 0, 2, 5, 7, 9, 11, 12,
12, 13, 13, 14, 14, 14, 14, 15, 15, 16, 17, 19, 21, 22, 26, 28, 32, 37, 41, 47,
53, 58, 64, 70, 76, 82, 87, 93, 98, 102, 105, 110, 113, 115, 116, 118, 118, 118,
118, 118, 117, 115, 114, 113, 112, 110, 109, 107, 106, 104, 102, 100, 97, 94,
91, 87, 82, 79, 72, 67, 61, 54, 46, 38, 29, 21, 13, 6, -2, -10, -17, -23, -30,
-35, -39, -44, -46, -47, -50, -50, -50, -49, -47, -46, -44, -42, -40, -37, -34,
-33, -31, -28, -27, -27, -25, -24, -23, -24, -23, -23, -23, -23, -23, -22, -22,
-21, -21, -20, -19, -19, -18, -17, -17, -18, -17, -19, -20, -22, -25, -29, -33,
-38, -44, -50, -56, -64, -70, -78, -86, -94, -100, -106, -112, -117, -121, -124,
-126, -127, -128, -127, -126, -123, -120, -117, -111, -106, -99, -94, -88, -82,
-74, -68, -61, -56, -49, -43, -39, -34, -29, -24, -20, -17, -12, -8, -4, -1, };

#endif /* AKWF_0280_512_H_ */
