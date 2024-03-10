#ifndef AKWF_1764_512_H_
#define AKWF_1764_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1764_512_NUM_CELLS 512
#define AKWF_1764_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1764_512_DATA [] = {0,
2, 4, 5, 7, 9, 10, 11, 13, 14, 15, 16, 17, 19, 19, 21, 21, 22, 22, 23, 24, 25,
24, 25, 25, 26, 27, 27, 27, 27, 26, 27, 28, 28, 27, 28, 28, 28, 28, 29, 29, 28,
29, 28, 28, 30, 29, 29, 30, 30, 31, 30, 31, 32, 32, 32, 33, 33, 34, 33, 34, 35,
35, 35, 36, 36, 36, 37, 38, 38, 38, 39, 40, 39, 40, 40, 40, 41, 41, 41, 42, 43,
42, 43, 43, 42, 43, 43, 43, 42, 43, 44, 44, 43, 44, 44, 45, 44, 45, 45, 45, 46,
45, 46, 45, 45, 46, 47, 47, 47, 47, 48, 47, 48, 48, 49, 49, 49, 50, 50, 51, 51,
51, 52, 52, 52, 53, 53, 53, 53, 53, 54, 54, 54, 55, 54, 55, 56, 56, 57, 56, 56,
57, 56, 57, 57, 58, 57, 57, 58, 57, 59, 58, 59, 59, 59, 59, 59, 60, 60, 60, 61,
61, 61, 61, 61, 62, 62, 62, 62, 63, 63, 63, 64, 64, 64, 65, 65, 65, 65, 66, 66,
66, 66, 67, 67, 67, 67, 68, 68, 69, 69, 69, 70, 69, 69, 69, 70, 70, 70, 71, 72,
71, 71, 71, 72, 72, 72, 72, 73, 72, 74, 74, 74, 73, 74, 74, 74, 75, 75, 75, 75,
75, 76, 76, 76, 77, 77, 78, 78, 78, 77, 79, 78, 80, 79, 80, 79, 80, 80, 81, 79,
82, 81, 83, 81, 83, 82, 83, 82, 84, 84, 82, 88, 1, -21, -12, -21, -18, -26, -27,
-35, -37, -46, -51, -59, -63, -71, -76, -84, -89, -95, -102, -106, -111, -116,
-119, -123, -125, -126, -127, -128, -128, -127, -126, -124, -120, -117, -114,
-110, -106, -102, -97, -91, -86, -81, -77, -72, -67, -63, -57, -53, -50, -47,
-44, -40, -38, -36, -35, -35, -35, -35, -35, -36, -37, -39, -42, -44, -46, -50,
-53, -55, -59, -62, -65, -68, -71, -75, -77, -79, -82, -84, -85, -86, -88, -89,
-89, -89, -89, -89, -88, -87, -86, -84, -82, -80, -76, -75, -73, -70, -67, -64,
-62, -59, -57, -54, -51, -49, -46, -44, -43, -42, -41, -40, -39, -39, -38, -39,
-39, -39, -40, -41, -41, -42, -44, -45, -46, -48, -50, -50, -52, -53, -55, -57,
-58, -59, -60, -62, -62, -63, -63, -63, -63, -64, -63, -62, -62, -61, -61, -58,
-58, -57, -56, -54, -53, -52, -50, -49, -46, -45, -43, -43, -41, -39, -39, -37,
-36, -36, -35, -35, -33, -34, -33, -33, -33, -33, -34, -34, -35, -35, -35, -35,
-36, -36, -37, -38, -38, -39, -39, -40, -41, -41, -42, -42, -42, -42, -42, -42,
-42, -42, -42, -42, -41, -41, -40, -40, -39, -37, -36, -37, -35, -34, -34, -33,
-32, -31, -29, -29, -28, -27, -26, -25, -25, -25, -23, -23, -22, -22, -22, -21,
-20, -20, -20, -20, -20, -20, -20, -20, -21, -20, -19, -19, -19, -19, -20, -18,
-18, -18, -18, -17, -16, -16, -16, -15, -13, -12, -11, -9, -8, -5, -3, -1, };

#endif /* AKWF_1764_512_H_ */