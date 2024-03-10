#ifndef AKWF_1411_512_H_
#define AKWF_1411_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1411_512_NUM_CELLS 512
#define AKWF_1411_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1411_512_DATA [] = {0,
1, 1, 2, 3, 3, 3, 4, 5, 6, 6, 6, 7, 6, 8, 8, 8, 9, 10, 10, 11, 12, 12, 12, 13,
14, 14, 14, 15, 16, 16, 17, 17, 18, 18, 19, 18, 20, 20, 21, 21, 21, 22, 22, 23,
24, 25, 26, 25, 26, 27, 27, 28, 28, 29, 30, 30, 29, 31, 31, 32, 32, 32, 33, 33,
34, 35, 35, 36, 37, 36, 37, 37, 38, 39, 39, 40, 40, 41, 41, 42, 43, 43, 44, 44,
44, 44, 45, 46, 46, 47, 46, 47, 49, 49, 50, 50, 50, 51, 51, 52, 52, 53, 53, 53,
54, 54, 55, 56, 56, 57, 57, 57, 57, 58, 59, 59, 60, 60, 61, 61, 62, 63, 63, 63,
63, 64, 64, 65, 66, 66, 66, 67, 68, 68, 69, 68, 70, 70, 69, 71, 71, 71, 71, 72,
73, 74, 74, 74, 75, 76, 76, 76, 76, 77, 78, 79, 79, 79, 79, 80, 79, 81, 81, 81,
82, 83, 83, 83, 84, 84, 84, 85, 86, 86, 86, 87, 86, 87, 88, 88, 88, 89, 89, 89,
89, 91, 92, 91, 91, 93, 93, 93, 93, 93, 95, 94, 94, 95, 96, 96, 96, 97, 97, 98,
98, 98, 99, 100, 100, 100, 100, 101, 100, 101, 102, 102, 102, 103, 104, 103,
103, 104, 104, 105, 105, 105, 106, 106, 107, 106, 107, 106, 108, 108, 109, 108,
110, 108, 111, 109, 111, 110, 111, 110, 113, 110, 113, 112, 114, 113, 114, 113,
115, 113, -24, -114, -127, -125, -108, -106, -99, -95, -82, -75, -66, -68, -70,
-78, -83, -91, -96, -101, -104, -106, -107, -108, -108, -108, -107, -107, -107,
-106, -105, -105, -104, -104, -103, -103, -103, -102, -103, -101, -102, -101,
-101, -100, -101, -100, -100, -100, -98, -99, -98, -98, -97, -97, -96, -96, -96,
-96, -94, -94, -94, -94, -93, -93, -92, -92, -91, -91, -92, -90, -91, -89, -89,
-89, -89, -87, -87, -87, -88, -86, -86, -86, -85, -85, -85, -84, -84, -83, -83,
-83, -82, -82, -82, -80, -80, -81, -79, -79, -79, -78, -78, -77, -77, -77, -77,
-75, -75, -75, -75, -73, -74, -74, -74, -73, -71, -71, -70, -70, -70, -69, -69,
-69, -69, -68, -68, -66, -66, -66, -65, -65, -65, -64, -63, -64, -63, -63, -61,
-61, -61, -61, -60, -60, -60, -58, -58, -58, -57, -56, -56, -55, -55, -54, -55,
-53, -53, -53, -52, -52, -52, -51, -50, -50, -50, -49, -48, -48, -47, -47, -46,
-45, -46, -44, -45, -45, -44, -43, -42, -42, -41, -41, -41, -40, -39, -39, -38,
-38, -38, -37, -37, -36, -36, -35, -34, -33, -33, -33, -32, -32, -31, -31, -31,
-30, -29, -29, -28, -27, -28, -27, -27, -25, -26, -25, -24, -24, -23, -23, -22,
-21, -21, -20, -20, -19, -19, -18, -19, -17, -17, -16, -16, -15, -15, -15, -13,
-13, -13, -12, -12, -11, -11, -11, -10, -9, -8, -8, -7, -7, -7, -6, -5, -4, -4,
-4, -3, -3, -2, -1, -1, -1, 0, };

#endif /* AKWF_1411_512_H_ */
