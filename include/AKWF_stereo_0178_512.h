#ifndef AKWF_stereo_0178_512_H_
#define AKWF_stereo_0178_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0178_512_NUM_CELLS 1024
#define AKWF_stereo_0178_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0178_512_DATA
[] = {0, -1, 3, 0, 4, 1, 5, 0, 8, 0, 9, 1, 12, 3, 13, 3, 15, 4, 17, 4, 19, 5,
20, 6, 22, 7, 23, 8, 26, 9, 27, 10, 29, 11, 31, 11, 33, 13, 34, 13, 35, 16, 38,
16, 40, 17, 42, 18, 43, 19, 45, 21, 46, 22, 49, 23, 49, 25, 51, 27, 52, 28, 54,
29, 55, 30, 56, 32, 57, 33, 59, 34, 61, 35, 63, 37, 64, 39, 65, 40, 67, 42, 68,
42, 69, 45, 71, 46, 72, 48, 73, 50, 74, 51, 75, 52, 77, 55, 77, 56, 79, 57, 79,
59, 80, 61, 80, 62, 82, 64, 82, 66, 82, 67, 83, 68, 84, 70, 84, 72, 85, 74, 85,
76, 86, 77, 86, 78, 87, 80, 88, 82, 87, 83, 89, 86, 89, 86, 90, 88, 89, 90, 89,
91, 89, 93, 90, 94, 90, 97, 91, 97, 90, 99, 90, 100, 90, 101, 90, 103, 91, 104,
90, 106, 90, 107, 90, 109, 90, 109, 89, 110, 89, 112, 90, 113, 89, 114, 90, 115,
89, 116, 89, 116, 89, 118, 89, 119, 88, 120, 88, 121, 87, 121, 87, 122, 87, 122,
86, 124, 86, 124, 86, 124, 86, 126, 85, 125, 84, 126, 84, 127, 84, 127, 83, 127,
84, 127, 83, 127, 82, 127, 81, 127, 81, 127, 81, 127, 80, 127, 80, 127, 80, 127,
79, 127, 80, 127, 79, 127, 79, 126, 78, 126, 78, 126, 77, 126, 77, 124, 77, 123,
76, 124, 75, 123, 75, 122, 75, 120, 75, 119, 74, 119, 75, 118, 74, 117, 74, 116,
74, 115, 73, 115, 73, 113, 73, 112, 73, 112, 72, 110, 72, 109, 72, 108, 71, 105,
72, 104, 71, 102, 71, 100, 71, 98, 71, 97, 71, 95, 70, 94, 71, 91, 70, 90, 70,
88, 70, 86, 70, 84, 69, 82, 69, 80, 70, 78, 70, 76, 69, 73, 69, 71, 70, 69, 68,
67, 69, 65, 69, 62, 69, 61, 68, 58, 69, 56, 69, 54, 68, 51, 68, 49, 68, 46, 68,
43, 68, 42, 67, 40, 68, 37, 67, 34, 67, 33, 66, 30, 67, 28, 66, 25, 66, 23, 66,
21, 65, 18, 65, 17, 65, 14, 64, 11, 64, 9, 63, 7, 63, 4, 63, 3, 63, 0, 62, -2,
62, -4, 61, -7, 61, -8, 60, -10, 60, -12, 60, -15, 59, -17, 59, -18, 58, -21,
57, -22, 57, -24, 56, -26, 55, -28, 54, -30, 53, -31, 53, -33, 53, -36, 51, -37,
50, -39, 50, -40, 49, -42, 48, -43, 47, -45, 46, -46, 46, -48, 45, -50, 44, -51,
42, -52, 42, -53, 41, -55, 40, -56, 38, -57, 37, -58, 35, -59, 34, -61, 34, -62,
32, -63, 31, -63, 29, -65, 29, -65, 27, -67, 25, -67, 23, -68, 22, -68, 21, -71,
19, -70, 17, -72, 16, -72, 15, -72, 13, -73, 12, -74, 9, -75, 8, -76, 6, -75, 5,
-77, 3, -76, 2, -77, 0, -78, -2, -79, -4, -78, -6, -78, -7, -79, -9, -80, -10,
-79, -12, -80, -14, -80, -15, -81, -17, -80, -18, -81, -20, -81, -21, -81, -23,
-81, -25, -81, -27, -81, -29, -81, -32, -82, -32, -82, -34, -82, -36, -82, -38,
-83, -40, -82, -42, -83, -44, -83, -45, -82, -46, -82, -48, -83, -50, -83, -52,
-83, -54, -82, -57, -83, -57, -84, -58, -83, -61, -83, -63, -83, -63, -83, -66,
-83, -66, -83, -68, -83, -70, -83, -72, -83, -73, -82, -75, -83, -76, -83, -78,
-83, -78, -83, -80, -84, -82, -83, -82, -83, -84, -83, -85, -84, -88, -83, -88,
-84, -89, -83, -91, -84, -90, -84, -92, -83, -93, -83, -95, -83, -96, -83, -96,
-84, -97, -84, -98, -84, -98, -84, -100, -84, -100, -84, -101, -83, -102, -83,
-103, -84, -102, -83, -104, -83, -105, -84, -105, -84, -105, -84, -105, -84,
-106, -83, -106, -84, -107, -84, -107, -83, -107, -83, -107, -83, -108, -83,
-107, -82, -107, -82, -107, -81, -107, -82, -107, -81, -108, -80, -107, -80,
-107, -79, -106, -79, -107, -78, -106, -79, -105, -78, -106, -77, -105, -77,
-104, -77, -103, -76, -104, -75, -103, -75, -102, -73, -102, -73, -101, -73,
-100, -72, -99, -71, -99, -71, -98, -69, -96, -69, -96, -68, -95, -67, -95, -67,
-93, -66, -93, -65, -92, -64, -90, -62, -89, -63, -88, -61, -88, -60, -86, -59,
-85, -58, -85, -57, -83, -56, -83, -55, -80, -54, -80, -52, -79, -52, -78, -51,
-76, -50, -75, -47, -74, -46, -74, -46, -73, -45, -72, -43, -70, -42, -68, -41,
-68, -41, -66, -39, -66, -38, -63, -37, -64, -36, -62, -35, -61, -34, -61, -33,
-60, -31, -58, -31, -58, -29, -56, -28, -56, -28, -54, -26, -54, -25, -54, -23,
-52, -22, -51, -22, -51, -20, -50, -19, -49, -19, -49, -17, -49, -17, -48, -15,
-47, -15, -47, -14, -46, -13, -45, -11, -44, -10, -43, -8, -43, -8, -42, -6,
-42, -6, -42, -5, -41, -5, -42, -3, -40, -3, -41, -3, -41, -3, -41, -3, -40, -2,
-41, -2, -42, -1, -41, -2, -40, 0, -41, 0, -40, 1, -41, 1, -41, 1, -41, 0, -42,
2, -42, 2, -41, 1, -42, 2, -42, 2, -42, 1, -43, 2, -43, 2, -42, 2, -42, 2, -42,
2, -43, 1, -42, 2, -43, 2, -43, 1, -43, 1, -43, 1, -43, 2, -44, 2, -44, 1, -43,
1, -43, 1, -43, 0, -43, 1, -42, 0, -43, 0, -42, 0, -43, 0, -42, 0, -42, -1, -43,
-1, -41, 0, -42, -1, -42, -1, -42, -1, -40, -1, -40, 0, -40, -1, -39, -1, -38,
-2, -38, -2, -38, -3, -37, -2, -36, -3, -35, -4, -35, -4, -34, -3, -33, -4, -32,
-4, -32, -4, -31, -5, -30, -4, -29, -4, -28, -5, -27, -5, -25, -5, -24, -5, -23,
-5, -22, -6, -20, -6, -19, -4, -18, -5, -17, -4, -16, -4, -14, -4, -13, -4, -11,
-3, -9, -4, -8, -4, -6, -3, -4, -3, -4, -2, -3, -3, -1, -1, };

#endif /* AKWF_stereo_0178_512_H_ */
