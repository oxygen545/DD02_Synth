#ifndef AKWF_stereo_0088_512_H_
#define AKWF_stereo_0088_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0088_512_NUM_CELLS 1024
#define AKWF_stereo_0088_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0088_512_DATA
[] = {0, 12, 2, 19, 7, 19, 10, 22, 12, 23, 16, 26, 21, 28, 25, 31, 29, 33, 34,
36, 38, 39, 44, 43, 48, 45, 52, 48, 55, 51, 59, 55, 61, 56, 63, 58, 63, 62, 64,
63, 66, 65, 67, 67, 69, 68, 71, 70, 73, 71, 76, 73, 79, 75, 81, 76, 83, 78, 84,
79, 86, 81, 87, 84, 88, 84, 88, 87, 89, 88, 88, 90, 89, 91, 89, 93, 91, 95, 92,
95, 94, 97, 96, 98, 97, 99, 98, 100, 96, 99, 93, 98, 91, 97, 90, 98, 89, 98, 89,
98, 90, 99, 92, 100, 96, 102, 101, 103, 105, 105, 109, 105, 112, 107, 116, 108,
118, 111, 121, 113, 123, 114, 124, 116, 126, 118, 127, 119, 127, 120, 127, 122,
127, 123, 127, 123, 125, 122, 124, 122, 122, 122, 119, 120, 116, 119, 113, 118,
109, 116, 105, 114, 100, 113, 96, 110, 93, 108, 88, 104, 84, 102, 80, 98, 79,
94, 77, 92, 76, 88, 73, 84, 72, 82, 73, 79, 71, 76, 69, 72, 68, 70, 68, 67, 66,
64, 64, 62, 63, 59, 61, 56, 59, 52, 58, 49, 57, 46, 56, 43, 54, 40, 53, 36, 51,
33, 50, 31, 47, 27, 46, 25, 44, 23, 42, 20, 40, 18, 37, 15, 34, 12, 32, 10, 29,
7, 25, 4, 22, 2, 19, -1, 15, -5, 11, -7, 8, -9, 5, -14, 0, -15, -4, -19, -8,
-23, -13, -26, -17, -29, -22, -33, -28, -37, -33, -41, -36, -45, -41, -48, -45,
-52, -47, -54, -50, -57, -52, -60, -53, -63, -55, -65, -56, -67, -57, -70, -59,
-71, -60, -74, -61, -76, -64, -78, -67, -80, -70, -83, -74, -86, -79, -87, -83,
-89, -86, -90, -89, -93, -91, -93, -91, -95, -91, -96, -90, -97, -90, -98, -89,
-97, -88, -97, -87, -97, -86, -96, -85, -95, -85, -95, -84, -94, -84, -93, -84,
-91, -85, -92, -86, -90, -85, -90, -86, -88, -85, -87, -85, -87, -84, -86, -84,
-85, -82, -84, -82, -82, -81, -81, -80, -80, -79, -80, -79, -78, -78, -77, -77,
-76, -77, -76, -76, -75, -76, -72, -75, -71, -76, -70, -74, -70, -73, -69, -73,
-69, -73, -67, -73, -66, -73, -65, -72, -64, -72, -63, -71, -62, -70, -61, -68,
-59, -66, -58, -64, -56, -60, -55, -58, -54, -55, -52, -52, -51, -51, -49, -48,
-48, -46, -47, -44, -45, -42, -44, -40, -42, -38, -41, -35, -39, -33, -37, -29,
-37, -26, -35, -23, -34, -22, -32, -20, -31, -18, -29, -17, -28, -17, -26, -16,
-25, -15, -22, -15, -21, -12, -19, -10, -16, -7, -15, -5, -12, -1, -9, 1, -8, 3,
-5, 6, -4, 6, -3, 7, -2, 7, 0, 8, 2, 7, 2, 6, 4, 6, 5, 6, 6, 7, 8, 8, 10, 9, 10,
11, 12, 13, 14, 14, 16, 14, 17, 15, 18, 15, 21, 14, 21, 15, 23, 14, 25, 15, 25,
17, 26, 19, 27, 21, 27, 23, 28, 26, 28, 27, 29, 30, 29, 30, 31, 32, 31, 35, 33,
38, 35, 40, 37, 42, 37, 44, 39, 46, 41, 46, 43, 46, 44, 46, 46, 45, 46, 42, 48,
39, 49, 36, 50, 35, 51, 33, 52, 31, 53, 30, 54, 29, 54, 29, 56, 28, 56, 28, 57,
28, 58, 28, 59, 29, 60, 31, 61, 33, 61, 34, 63, 37, 64, 41, 64, 43, 64, 47, 67,
48, 66, 51, 67, 51, 67, 51, 68, 50, 67, 50, 68, 49, 67, 47, 67, 44, 67, 42, 65,
39, 64, 35, 62, 33, 60, 30, 58, 27, 56, 25, 52, 21, 49, 17, 46, 14, 43, 12, 40,
7, 37, 4, 34, 0, 30, -3, 26, -6, 23, -9, 20, -10, 17, -11, 14, -12, 11, -11, 7,
-12, 6, -12, 4, -11, 1, -12, 0, -13, -1, -13, -3, -14, -5, -15, -6, -15, -8,
-15, -10, -15, -12, -14, -13, -12, -14, -9, -16, -6, -16, -3, -18, 0, -19, 2,
-19, 3, -20, 4, -21, 4, -20, 3, -21, 3, -21, 1, -21, -1, -22, -3, -21, -4, -23,
-5, -24, -6, -24, -7, -24, -7, -25, -7, -26, -5, -26, -5, -26, -4, -27, -2, -27,
-2, -28, -2, -27, -2, -27, -3, -28, -4, -29, -7, -29, -9, -30, -12, -31, -15,
-33, -18, -34, -21, -35, -23, -36, -26, -37, -29, -38, -30, -39, -32, -40, -33,
-42, -36, -43, -37, -44, -38, -45, -40, -45, -41, -47, -42, -48, -43, -48, -45,
-49, -47, -51, -48, -51, -50, -53, -51, -54, -52, -54, -53, -55, -55, -57, -55,
-57, -58, -58, -58, -58, -59, -59, -58, -60, -59, -60, -59, -61, -58, -62, -57,
-63, -57, -62, -56, -63, -56, -64, -55, -64, -56, -64, -54, -64, -55, -64, -54,
-66, -54, -65, -53, -64, -52, -64, -51, -64, -49, -63, -48, -64, -46, -64, -44,
-63, -42, -62, -41, -62, -39, -60, -38, -59, -38, -58, -37, -57, -36, -56, -35,
-55, -35, -54, -33, -52, -33, -51, -32, -51, -32, -49, -31, -48, -31, -48, -31,
-46, -30, -45, -31, -45, -31, -44, -32, -43, -32, -42, -32, -41, -32, -40, -32,
-38, -32, -38, -32, -37, -31, -36, -30, -35, -29, -33, -28, -32, -27, -30, -25,
-29, -24, -28, -23, -26, -21, -24, -20, -23, -20, -20, -17, -18, -16, -17, -15,
-16, -14, -14, -15, -13, -14, -12, -14, -11, -15, -11, -16, -11, -18, -10, -17,
-10, -17, -10, -17, -10, -18, -9, -17, -9, -17, -8, -17, -7, -17, -6, -18, -6,
-19, -5, -20, -5, -22, -5, -26, -5, -28, -5, -30, -6, -32, -6, -33, -8, -34, -8,
-34, -7, -33, -8, -33, -8, -31, -7, -30, -7, -27, -8, -25, -7, -23, -7, -21, -6,
-20, -7, -19, -8, -18, -8, -18, -7, -19, -7, -18, -7, -18, -7, -18, -7, -18, -6,
-18, -5, -17, -4, -15, -4, -14, -2, -13, -1, -14, -1, -13, 0, -13, 1, -13, 2,
-12, 4, -12, 5, -11, 6, -10, 9, -7, 10, -4, 14, -2, 9, };

#endif /* AKWF_stereo_0088_512_H_ */
