#ifndef AKWF_stereo_0200_512_H_
#define AKWF_stereo_0200_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0200_512_NUM_CELLS 1024
#define AKWF_stereo_0200_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0200_512_DATA
[] = {1, -25, 3, -33, 3, -27, 5, -29, 7, -25, 8, -26, 10, -23, 11, -23, 12, -21,
13, -19, 15, -17, 16, -17, 18, -15, 20, -14, 20, -11, 22, -10, 24, -10, 25, -8,
27, -6, 28, -4, 30, -3, 33, -1, 33, 0, 34, 3, 37, 3, 38, 5, 40, 7, 42, 9, 44,
10, 46, 13, 47, 15, 50, 17, 51, 19, 52, 22, 55, 24, 57, 25, 59, 29, 61, 30, 64,
33, 65, 35, 68, 37, 71, 41, 72, 43, 74, 46, 76, 48, 78, 52, 80, 54, 82, 58, 84,
60, 85, 63, 88, 66, 90, 68, 91, 72, 93, 74, 95, 76, 95, 79, 97, 81, 99, 84, 100,
86, 101, 87, 102, 89, 103, 92, 103, 94, 104, 96, 105, 97, 107, 99, 107, 101,
107, 102, 108, 104, 109, 106, 108, 107, 109, 108, 109, 109, 109, 110, 110, 110,
110, 112, 110, 112, 110, 114, 110, 114, 111, 114, 110, 115, 110, 116, 111, 116,
112, 117, 111, 118, 111, 118, 113, 118, 112, 117, 113, 118, 113, 120, 114, 120,
115, 120, 114, 121, 116, 120, 117, 122, 116, 122, 117, 123, 118, 122, 118, 124,
119, 125, 119, 124, 120, 124, 121, 125, 121, 126, 122, 127, 122, 127, 123, 127,
123, 127, 123, 127, 124, 127, 123, 127, 124, 127, 123, 127, 123, 127, 122, 126,
121, 126, 121, 127, 120, 125, 120, 124, 119, 125, 118, 124, 118, 123, 116, 123,
115, 121, 113, 119, 112, 119, 110, 118, 109, 116, 106, 113, 104, 111, 103, 109,
99, 108, 97, 106, 95, 104, 93, 101, 90, 99, 88, 96, 84, 94, 82, 92, 79, 90, 76,
87, 74, 84, 71, 81, 68, 79, 65, 76, 63, 74, 60, 70, 56, 67, 53, 65, 50, 62, 47,
59, 45, 57, 42, 54, 40, 51, 38, 49, 35, 47, 33, 44, 30, 41, 28, 39, 26, 36, 24,
34, 22, 32, 19, 30, 17, 27, 15, 26, 13, 23, 11, 22, 10, 20, 7, 18, 5, 16, 3, 12,
2, 10, 0, 9, -2, 7, -3, 6, -6, 2, -8, 1, -9, -1, -10, -2, -13, -4, -13, -6, -15,
-7, -17, -9, -18, -11, -21, -13, -22, -14, -23, -15, -25, -19, -26, -20, -28,
-21, -29, -23, -31, -24, -32, -26, -33, -27, -34, -29, -35, -31, -37, -32, -38,
-34, -40, -35, -40, -37, -42, -38, -43, -40, -43, -42, -44, -43, -45, -44, -47,
-46, -48, -48, -49, -48, -49, -50, -50, -52, -51, -54, -51, -55, -53, -57, -53,
-58, -53, -60, -54, -62, -54, -63, -55, -64, -56, -66, -57, -68, -58, -69, -58,
-70, -58, -72, -58, -74, -59, -75, -60, -78, -60, -79, -60, -80, -61, -80, -60,
-82, -62, -84, -61, -84, -62, -86, -63, -88, -63, -88, -63, -89, -63, -90, -65,
-91, -65, -92, -65, -92, -65, -93, -66, -94, -66, -95, -67, -94, -67, -95, -68,
-96, -69, -96, -68, -96, -70, -97, -70, -97, -70, -97, -71, -97, -71, -97, -71,
-97, -72, -96, -73, -97, -73, -97, -74, -96, -75, -97, -74, -96, -76, -96, -77,
-96, -77, -96, -77, -95, -78, -95, -78, -95, -77, -94, -79, -94, -79, -94, -79,
-93, -79, -93, -80, -93, -80, -92, -80, -91, -79, -90, -79, -90, -80, -89, -79,
-88, -79, -88, -79, -87, -79, -87, -78, -85, -77, -84, -76, -84, -75, -83, -75,
-81, -74, -80, -72, -78, -72, -76, -70, -76, -69, -74, -67, -72, -66, -70, -65,
-68, -63, -66, -61, -64, -59, -62, -57, -60, -56, -58, -54, -55, -52, -52, -50,
-51, -47, -49, -47, -45, -44, -43, -42, -41, -41, -38, -38, -35, -37, -34, -35,
-32, -33, -28, -31, -26, -31, -24, -29, -22, -29, -20, -27, -19, -26, -17, -25,
-14, -24, -13, -23, -11, -23, -9, -21, -7, -22, -6, -21, -5, -21, -4, -22, -3,
-21, -2, -21, -2, -20, -2, -22, -1, -22, 0, -23, 0, -23, -1, -24, 0, -24, 0,
-25, 1, -26, 0, -26, 1, -26, -1, -26, 0, -27, 0, -27, -1, -29, -1, -29, 0, -29,
-1, -29, -1, -30, -1, -30, -1, -29, -1, -29, -1, -29, -1, -29, -1, -29, 0, -29,
0, -29, 0, -29, 0, -29, 1, -28, 1, -28, 2, -28, 2, -27, 2, -27, 2, -26, 3, -26,
2, -25, 3, -26, 4, -26, 3, -25, 4, -25, 3, -25, 4, -24, 4, -25, 4, -25, 4, -25,
4, -26, 3, -25, 3, -25, 3, -25, 4, -27, 3, -27, 3, -27, 2, -27, 2, -29, 2, -29,
1, -29, 1, -29, -1, -31, -1, -31, -2, -31, -2, -32, -4, -32, -4, -34, -4, -34,
-5, -34, -6, -34, -7, -34, -7, -35, -9, -36, -8, -35, -9, -35, -10, -35, -10,
-36, -12, -36, -12, -37, -14, -37, -13, -37, -14, -37, -15, -37, -16, -36, -16,
-37, -17, -36, -17, -37, -17, -36, -18, -36, -18, -35, -18, -36, -18, -35, -18,
-34, -19, -34, -19, -33, -19, -33, -19, -33, -19, -33, -19, -32, -20, -32, -19,
-31, -19, -31, -19, -31, -20, -31, -20, -31, -20, -30, -19, -30, -20, -30, -20,
-30, -19, -29, -20, -30, -20, -30, -19, -30, -20, -30, -20, -30, -19, -30, -19,
-31, -20, -31, -20, -31, -20, -32, -19, -33, -21, -33, -21, -34, -21, -34, -21,
-35, -21, -35, -23, -35, -22, -35, -22, -36, -23, -37, -23, -37, -24, -37, -24,
-38, -25, -38, -25, -38, -26, -39, -27, -40, -27, -40, -28, -40, -28, -41, -30,
-41, -30, -41, -31, -42, -32, -42, -33, -41, -34, -42, -36, -42, -36, -42, -37,
-42, -37, -42, -39, -42, -39, -42, -40, -41, -41, -41, -42, -41, -43, -40, -44,
-39, -43, -38, -45, -37, -45, -37, -45, -36, -47, -34, -45, -34, -47, -32, -47,
-31, -47, -31, -47, -29, -47, -28, -47, -27, -47, -25, -47, -24, -46, -22, -46,
-21, -45, -19, -45, -18, -44, -17, -43, -15, -43, -13, -42, -12, -40, -10, -41,
-9, -38, -7, -38, -5, -36, -4, -37, -3, -32, -1, -37, 0, -20, };

#endif /* AKWF_stereo_0200_512_H_ */
