#ifndef AKWF_0526_512_H_
#define AKWF_0526_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0526_512_NUM_CELLS 512
#define AKWF_0526_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0526_512_DATA [] =
{-1, 1, -3, 10, 21, 18, 19, 22, 23, 22, 34, 41, 35, 44, 58, 56, 57, 60, 62, 59,
68, 78, 75, 77, 80, 81, 79, 80, 80, 80, 79, 80, 79, 80, 80, 80, 80, 80, 79, 80,
79, 80, 80, 80, 77, 75, 76, 75, 81, 79, 80, 78, 80, 79, 85, 95, 93, 95, 94, 94,
94, 95, 94, 95, 94, 95, 93, 96, 83, 79, 80, 79, 80, 80, 80, 76, 74, 77, 69, 59,
62, 60, 57, 56, 59, 46, 40, 44, 41, 38, 37, 39, 22, 17, 21, 13, 3, 6, 4, 0, 0,
0, 1, -1, 2, -4, -15, -14, -14, -19, -19, -19, -17, -14, -15, -15, -1, 1, -1,
-1, 0, 0, 1, 5, 4, 5, 4, 5, 2, 9, 20, 18, 19, 19, 19, 19, 19, 20, 18, 20, 19,
19, 18, 20, 18, 20, 15, 3, 5, 4, 4, 4, 4, 2, -1, 1, -1, -15, -15, -14, -17, -20,
-18, -23, -39, -37, -37, -49, -54, -51, -54, -57, -56, -57, -71, -72, -71, -72,
-72, -72, -70, -71, -71, -72, -71, -72, -70, -73, -76, -75, -75, -77, -76, -75,
-74, -76, -74, -77, -91, -90, -90, -93, -96, -93, -99, -111, -108, -110, -108,
-110, -108, -111, -113, -112, -114, -114, -114, -112, -123, -128, -127, -128,
-128, -128, -128, -127, -128, -128, -128, -128, -128, -128, -128, -127, -128,
-119, -112, -115, -111, -110, -109, -110, -94, -88, -93, -83, -70, -73, -71,
-54, -52, -55, -42, -30, -37, -27, 1, 1, -2, 14, 21, 19, 20, 24, 23, 23, 36, 39,
34, 47, 59, 55, 58, 60, 62, 60, 71, 77, 75, 78, 79, 80, 79, 80, 80, 80, 79, 80,
79, 79, 79, 80, 80, 80, 79, 80, 79, 81, 79, 80, 77, 75, 76, 77, 81, 79, 81, 79,
81, 78, 89, 96, 93, 95, 93, 94, 95, 94, 94, 95, 95, 94, 94, 95, 80, 80, 80, 80,
79, 80, 79, 76, 76, 77, 66, 59, 62, 58, 57, 56, 57, 44, 41, 43, 40, 37, 38, 36,
19, 19, 20, 10, 2, 5, 4, 0, 0, 0, 1, -1, 1, -5, -17, -13, -16, -18, -19, -18,
-16, -14, -16, -12, 1, 0, 1, 0, 1, -1, 2, 5, 4, 5, 4, 5, 3, 13, 20, 18, 19, 19,
19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 17, 21, 11, 3, 4, 3, 5, 4, 4, 2, 0, 2,
-4, -16, -14, -15, -18, -20, -17, -27, -41, -36, -39, -52, -53, -52, -55, -57,
-56, -60, -73, -71, -72, -72, -72, -72, -72, -71, -71, -72, -71, -72, -71, -74,
-77, -75, -75, -76, -75, -77, -75, -76, -75, -80, -92, -90, -91, -93, -96, -93,
-102, -111, -108, -110, -108, -110, -109, -112, -113, -113, -114, -113, -113,
-113, -126, -128, -128, -128, -128, -128, -128, -127, -127, -128, -127, -128,
-127, -128, -128, -128, -128, -116, -113, -114, -111, -109, -110, -107, -91,
-89, -92, -79, -69, -74, -68, -51, -53, -54, -40, -29, -38, -21, };

#endif /* AKWF_0526_512_H_ */
