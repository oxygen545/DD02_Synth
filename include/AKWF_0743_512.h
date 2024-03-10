#ifndef AKWF_0743_512_H_
#define AKWF_0743_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0743_512_NUM_CELLS 512
#define AKWF_0743_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0743_512_DATA [] = {1,
1, 2, 3, 4, 4, 5, 5, 6, 8, 9, 9, 9, 11, 11, 12, 13, 13, 14, 15, 16, 17, 17, 19,
19, 20, 21, 22, 24, 25, 25, 27, 27, 28, 30, 31, 32, 33, 34, 36, 37, 38, 40, 40,
42, 44, 44, 45, 47, 49, 49, 51, 52, 54, 55, 56, 59, 60, 61, 62, 64, 65, 66, 68,
69, 71, 72, 73, 75, 75, 77, 78, 78, 81, 81, 83, 83, 84, 86, 87, 87, 89, 90, 91,
91, 91, 93, 93, 94, 95, 95, 95, 96, 96, 96, 96, 97, 97, 96, 97, 97, 98, 98, 97,
97, 97, 97, 97, 96, 96, 96, 95, 95, 94, 94, 93, 93, 92, 92, 91, 90, 89, 88, 88,
86, 85, 84, 83, 82, 82, 80, 79, 78, 77, 76, 75, 73, 71, 70, 70, 68, 68, 65, 65,
63, 62, 60, 59, 57, 57, 54, 53, 52, 50, 49, 47, 46, 43, 42, 41, 40, 38, 36, 34,
32, 31, 29, 27, 26, 24, 23, 20, 18, 17, 15, 13, 11, 9, 8, 6, 4, 3, 0, -2, -4,
-5, -7, -9, -11, -14, -14, -17, -19, -20, -21, -24, -25, -28, -29, -30, -32,
-33, -35, -36, -39, -40, -41, -43, -44, -45, -46, -47, -48, -49, -50, -51, -53,
-53, -54, -54, -55, -55, -55, -56, -56, -57, -57, -56, -56, -56, -56, -56, -55,
-54, -54, -53, -53, -52, -51, -50, -49, -48, -47, -46, -45, -43, -42, -40, -38,
-37, -36, -33, -32, -31, -28, -25, -24, -22, -20, -17, -16, -14, -11, -9, -7,
-5, -2, -1, 2, 4, 6, 8, 10, 12, 15, 16, 19, 22, 23, 26, 28, 30, 32, 34, 36, 38,
39, 41, 44, 45, 47, 49, 50, 51, 53, 55, 56, 59, 59, 60, 62, 62, 63, 64, 65, 66,
67, 68, 68, 69, 69, 70, 70, 69, 70, 70, 70, 70, 69, 69, 69, 68, 68, 67, 67, 66,
65, 63, 62, 61, 60, 58, 56, 56, 54, 52, 50, 49, 47, 44, 43, 41, 38, 36, 34, 31,
29, 26, 24, 21, 19, 16, 14, 10, 7, 4, 1, -2, -5, -8, -10, -13, -17, -20, -23,
-26, -30, -32, -35, -38, -42, -45, -49, -51, -54, -57, -60, -62, -66, -68, -71,
-74, -76, -79, -81, -85, -86, -90, -92, -94, -96, -98, -101, -102, -105, -106,
-109, -110, -112, -114, -115, -116, -118, -119, -120, -121, -123, -123, -124,
-125, -126, -126, -126, -127, -127, -128, -127, -128, -128, -128, -128, -128,
-128, -127, -127, -125, -125, -125, -124, -123, -121, -121, -120, -119, -118,
-117, -115, -114, -112, -111, -110, -108, -107, -105, -103, -101, -100, -99,
-97, -94, -93, -91, -89, -87, -85, -83, -81, -79, -77, -75, -73, -72, -69, -68,
-65, -63, -61, -60, -59, -56, -54, -53, -51, -49, -47, -45, -43, -42, -40, -38,
-37, -35, -34, -32, -30, -28, -27, -25, -25, -23, -22, -20, -19, -18, -17, -15,
-14, -13, -11, -11, -11, -9, -7, -6, -5, -5, -4, -3, -3, -2, -1, 0, };

#endif /* AKWF_0743_512_H_ */
