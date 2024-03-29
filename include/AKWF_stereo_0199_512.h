#ifndef AKWF_stereo_0199_512_H_
#define AKWF_stereo_0199_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0199_512_NUM_CELLS 1024
#define AKWF_stereo_0199_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0199_512_DATA
[] = {1, -11, 13, -5, 26, 7, 36, 15, 48, 25, 57, 32, 66, 42, 74, 48, 80, 56, 86,
62, 91, 67, 94, 72, 97, 77, 101, 79, 102, 83, 102, 85, 101, 87, 100, 88, 99, 88,
96, 88, 92, 88, 89, 85, 85, 84, 81, 83, 76, 81, 73, 78, 68, 76, 64, 73, 61, 71,
58, 69, 54, 67, 51, 65, 50, 62, 48, 60, 47, 59, 47, 57, 48, 56, 48, 55, 50, 55,
52, 55, 54, 54, 58, 55, 59, 56, 63, 55, 67, 57, 71, 58, 74, 60, 77, 61, 80, 61,
82, 61, 85, 63, 88, 64, 89, 65, 91, 65, 92, 67, 92, 66, 92, 66, 90, 66, 89, 66,
87, 65, 85, 65, 83, 63, 80, 63, 77, 61, 73, 60, 69, 59, 66, 58, 62, 55, 58, 54,
55, 53, 51, 51, 48, 50, 46, 49, 43, 47, 41, 46, 39, 45, 37, 45, 35, 44, 34, 43,
34, 43, 33, 44, 34, 44, 35, 45, 37, 44, 38, 45, 39, 46, 42, 47, 43, 47, 44, 48,
47, 49, 47, 49, 47, 49, 47, 49, 47, 48, 47, 48, 46, 48, 44, 46, 43, 45, 41, 44,
39, 42, 37, 41, 34, 39, 32, 37, 29, 36, 25, 33, 22, 31, 18, 28, 14, 25, 11, 23,
7, 20, 4, 17, 1, 15, -1, 12, -4, 11, -6, 8, -7, 6, -8, 4, -9, 2, -8, 1, -9, -1,
-8, -2, -8, -4, -5, -5, -5, -6, -3, -7, -2, -8, 1, -9, 3, -8, 5, -8, 7, -9, 8,
-9, 10, -9, 11, -9, 13, -9, 12, -10, 12, -9, 13, -10, 12, -10, 10, -9, 10, -10,
8, -11, 6, -11, 3, -10, -1, -11, -2, -11, -7, -11, -10, -10, -14, -11, -17, -11,
-20, -11, -24, -11, -26, -9, -29, -9, -31, -8, -32, -6, -34, -5, -34, -3, -34,
-2, -35, -1, -34, 1, -33, 2, -31, 5, -30, 6, -28, 7, -24, 10, -20, 11, -16, 14,
-12, 16, -6, 17, -2, 19, 4, 21, 9, 22, 14, 23, 19, 23, 23, 24, 28, 24, 30, 22,
33, 22, 36, 20, 37, 18, 39, 17, 40, 14, 41, 11, 42, 9, 41, 7, 43, 4, 42, 0, 40,
-1, 40, -5, 38, -7, 38, -10, 37, -14, 36, -15, 34, -18, 33, -19, 32, -21, 32,
-22, 32, -23, 32, -23, 33, -23, 33, -22, 35, -21, 35, -20, 38, -18, 40, -17, 42,
-15, 45, -14, 47, -11, 49, -9, 52, -7, 54, -5, 55, -3, 58, -1, 60, 0, 59, 3, 61,
2, 61, 4, 59, 4, 58, 4, 56, 4, 53, 3, 50, 1, 46, 0, 41, -3, 35, -6, 29, -8, 23,
-11, 16, -15, 8, -19, 1, -22, -7, -26, -15, -30, -22, -34, -29, -38, -35, -41,
-42, -44, -47, -47, -53, -49, -57, -51, -59, -52, -63, -53, -64, -53, -64, -51,
-63, -49, -62, -47, -59, -44, -56, -40, -51, -37, -46, -32, -40, -26, -33, -20,
-25, -13, -16, -6, -7, 1, 2, 10, 11, 18, 21, 25, 30, 33, 40, 41, 48, 48, 55, 55,
62, 61, 67, 67, 73, 72, 76, 76, 80, 81, 81, 83, 83, 85, 83, 88, 82, 88, 81, 89,
78, 88, 75, 88, 70, 85, 66, 84, 60, 80, 53, 77, 47, 74, 40, 69, 34, 65, 26, 60,
19, 56, 13, 51, 6, 46, 0, 41, -5, 36, -10, 31, -14, 27, -18, 22, -21, 18, -24,
15, -26, 11, -28, 9, -27, 5, -27, 3, -27, 0, -25, -1, -22, -3, -21, -3, -18, -5,
-15, -6, -13, -6, -10, -6, -6, -6, -4, -7, -1, -7, 0, -6, 2, -8, 3, -7, 5, -7,
4, -8, 5, -8, 4, -9, 4, -10, 2, -11, 1, -12, -1, -13, -4, -16, -7, -17, -9, -19,
-13, -20, -16, -22, -18, -23, -22, -25, -25, -26, -27, -27, -30, -29, -31, -30,
-34, -31, -35, -31, -35, -31, -36, -32, -37, -32, -37, -32, -36, -31, -35, -30,
-33, -30, -30, -28, -27, -27, -24, -25, -22, -22, -18, -20, -14, -18, -10, -16,
-6, -14, -3, -12, 0, -10, 1, -8, 3, -7, 5, -6, 5, -5, 7, -4, 7, -3, 8, -3, 7,
-2, 7, -1, 5, -1, 5, -1, 3, -2, 2, -3, -1, -2, -3, -4, -5, -5, -8, -6, -9, -6,
-12, -8, -15, -9, -17, -9, -17, -10, -18, -11, -20, -11, -20, -12, -21, -12,
-20, -12, -20, -13, -19, -13, -17, -14, -15, -12, -15, -13, -13, -12, -11, -12,
-8, -11, -7, -11, -4, -10, -2, -8, 0, -8, 1, -7, 2, -7, 4, -6, 4, -6, 4, -5, 4,
-4, 2, -4, 1, -3, 0, -4, -3, -3, -6, -2, -9, -2, -13, -2, -16, -2, -20, -2, -25,
-2, -31, -2, -35, -2, -40, -3, -45, -2, -49, -2, -53, -2, -57, -2, -60, 0, -63,
0, -66, 1, -69, 2, -71, 2, -72, 4, -73, 4, -73, 6, -73, 6, -73, 6, -73, 7, -71,
9, -69, 8, -68, 9, -66, 10, -62, 10, -59, 10, -56, 9, -54, 10, -50, 9, -48, 8,
-46, 6, -44, 5, -43, 2, -42, -1, -42, -4, -42, -8, -42, -12, -43, -16, -43, -21,
-45, -25, -47, -30, -48, -34, -51, -39, -53, -43, -55, -49, -58, -53, -61, -57,
-64, -61, -66, -65, -69, -69, -70, -72, -72, -75, -74, -78, -75, -80, -75, -80,
-75, -82, -75, -82, -74, -83, -73, -83, -72, -83, -70, -83, -68, -82, -65, -80,
-64, -79, -61, -79, -58, -78, -56, -76, -53, -75, -51, -74, -50, -73, -48, -72,
-48, -72, -46, -72, -47, -71, -48, -72, -50, -74, -51, -75, -55, -76, -57, -78,
-61, -81, -65, -83, -71, -87, -75, -90, -80, -93, -86, -97, -92, -100, -97,
-103, -102, -107, -108, -110, -113, -113, -116, -116, -121, -117, -124, -118,
-126, -120, -128, -119, -128, -120, -128, -118, -126, -117, -125, -114, -121,
-112, -117, -108, -110, -103, -104, -97, -97, -92, -88, -85, -79, -77, -68, -70,
-57, -59, -46, -51, -32, -40, -20, -33, -6, -14, };

#endif /* AKWF_stereo_0199_512_H_ */
