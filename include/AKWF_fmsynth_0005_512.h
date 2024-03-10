#ifndef AKWF_fmsynth_0005_512_H_
#define AKWF_fmsynth_0005_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_fmsynth_0005_512_NUM_CELLS 512
#define AKWF_fmsynth_0005_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_fmsynth_0005_512_DATA
[] = {3, 10, 15, 21, 26, 31, 35, 40, 44, 48, 52, 56, 59, 62, 64, 68, 70, 72, 72,
74, 75, 77, 78, 78, 78, 79, 79, 79, 78, 77, 77, 77, 75, 75, 73, 73, 71, 70, 69,
68, 65, 64, 63, 61, 59, 57, 56, 53, 52, 51, 49, 48, 45, 43, 42, 41, 39, 37, 35,
34, 34, 32, 31, 30, 28, 27, 26, 25, 24, 23, 23, 21, 22, 21, 20, 21, 20, 19, 19,
19, 19, 19, 19, 19, 19, 20, 21, 21, 21, 22, 23, 23, 25, 25, 26, 28, 29, 30, 31,
32, 34, 35, 36, 38, 40, 41, 42, 44, 46, 48, 49, 51, 54, 56, 56, 58, 60, 62, 63,
66, 67, 69, 70, 70, 72, 74, 74, 76, 76, 77, 77, 78, 79, 78, 78, 78, 77, 76, 76,
75, 73, 72, 70, 68, 65, 64, 60, 57, 54, 50, 47, 42, 38, 34, 30, 25, 19, 14, 9,
3, -2, -9, -15, -21, -27, -33, -38, -45, -51, -57, -64, -70, -76, -81, -86, -92,
-97, -101, -105, -110, -114, -117, -120, -123, -124, -126, -127, -128, -128,
-128, -126, -125, -124, -121, -118, -114, -110, -106, -101, -96, -90, -84, -77,
-71, -64, -56, -50, -43, -36, -28, -22, -15, -8, 0, 7, 13, 20, 27, 32, 39, 44,
50, 53, 59, 62, 66, 69, 71, 73, 75, 76, 78, 78, 78, 78, 78, 77, 75, 73, 72, 71,
68, 66, 62, 59, 56, 54, 50, 46, 43, 40, 36, 32, 29, 24, 21, 18, 13, 10, 6, 4, 0,
-4, -7, -9, -12, -14, -18, -20, -22, -25, -28, -29, -32, -34, -35, -36, -38,
-39, -40, -41, -42, -43, -43, -44, -44, -44, -44, -44, -44, -43, -42, -42, -41,
-39, -38, -38, -36, -35, -33, -32, -29, -27, -24, -22, -19, -16, -14, -11, -8,
-4, 0, 3, 6, 11, 14, 18, 22, 27, 30, 33, 39, 41, 46, 50, 54, 58, 60, 64, 67, 70,
72, 74, 76, 77, 78, 78, 78, 77, 76, 73, 71, 68, 63, 59, 55, 48, 41, 35, 27, 19,
9, 1, -8, -18, -28, -36, -46, -56, -66, -75, -83, -92, -99, -107, -114, -118,
-122, -124, -127, -128, -128, -125, -123, -118, -114, -108, -102, -94, -84, -74,
-64, -54, -43, -31, -19, -8, 3, 14, 25, 34, 44, 52, 59, 67, 71, 75, 78, 78, 78,
76, 73, 67, 62, 54, 44, 34, 23, 12, -1, -13, -25, -36, -50, -61, -73, -83, -94,
-103, -110, -117, -121, -125, -127, -127, -127, -125, -121, -116, -110, -102,
-95, -86, -76, -66, -56, -44, -33, -22, -10, 1, 12, 21, 32, 40, 48, 56, 62, 68,
71, 76, 78, 78, 78, 77, 74, 71, 67, 60, 54, 47, 39, 30, 21, 12, 1, -7, -18, -27,
-36, -46, -55, -65, -73, -82, -90, -97, -103, -109, -114, -118, -121, -124,
-126, -126, -128, -128, -127, -125, -123, -119, -117, -113, -108, -104, -100,
-94, -88, -83, -76, -70, -63, -57, -51, -44, -37, -31, -25, -18, -12, -5, -1, };

#endif /* AKWF_fmsynth_0005_512_H_ */