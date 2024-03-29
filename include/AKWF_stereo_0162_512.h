#ifndef AKWF_stereo_0162_512_H_
#define AKWF_stereo_0162_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0162_512_NUM_CELLS 1024
#define AKWF_stereo_0162_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0162_512_DATA
[] = {2, -28, 5, -34, 7, -27, 11, -27, 14, -21, 16, -20, 19, -16, 22, -13, 25,
-10, 27, -6, 30, -3, 34, 0, 36, 3, 39, 6, 42, 10, 45, 12, 48, 16, 50, 18, 53,
21, 55, 24, 57, 28, 61, 30, 63, 34, 66, 37, 68, 39, 70, 41, 73, 45, 75, 48, 77,
49, 79, 52, 81, 55, 83, 57, 87, 60, 89, 62, 90, 64, 92, 68, 94, 69, 96, 72, 98,
74, 99, 76, 101, 78, 103, 80, 105, 83, 107, 84, 108, 86, 110, 88, 111, 91, 113,
93, 114, 95, 115, 96, 117, 98, 119, 100, 120, 102, 121, 103, 122, 104, 123, 105,
124, 107, 125, 109, 125, 110, 127, 111, 126, 112, 127, 114, 127, 115, 127, 116,
127, 116, 127, 117, 127, 118, 127, 120, 127, 119, 127, 120, 127, 121, 126, 121,
126, 122, 125, 122, 126, 123, 124, 123, 124, 123, 123, 124, 122, 123, 122, 124,
121, 124, 119, 125, 119, 125, 118, 124, 117, 125, 115, 124, 115, 124, 114, 124,
112, 125, 110, 123, 110, 123, 108, 124, 108, 124, 107, 122, 105, 124, 103, 122,
102, 123, 101, 123, 100, 122, 98, 122, 98, 122, 96, 121, 94, 120, 93, 120, 92,
121, 89, 119, 89, 119, 87, 119, 86, 119, 86, 118, 84, 118, 83, 117, 81, 116, 80,
116, 78, 116, 77, 115, 76, 115, 75, 115, 74, 115, 72, 114, 71, 113, 70, 113, 69,
113, 68, 112, 67, 112, 66, 111, 64, 111, 63, 110, 62, 110, 62, 109, 60, 109, 60,
109, 59, 109, 57, 108, 57, 107, 55, 108, 54, 108, 53, 107, 52, 107, 52, 106, 50,
106, 50, 105, 50, 105, 48, 104, 47, 104, 47, 103, 47, 103, 45, 103, 45, 103, 44,
102, 44, 102, 43, 103, 43, 102, 41, 101, 41, 101, 40, 100, 40, 100, 39, 100, 38,
100, 37, 100, 37, 100, 37, 99, 36, 99, 36, 98, 36, 98, 35, 98, 34, 98, 35, 98,
34, 98, 33, 97, 32, 97, 32, 97, 33, 96, 32, 95, 31, 95, 31, 96, 30, 95, 30, 95,
30, 94, 29, 94, 28, 93, 28, 92, 27, 91, 26, 91, 25, 89, 25, 88, 25, 86, 23, 86,
21, 84, 21, 82, 20, 81, 19, 80, 18, 78, 17, 77, 17, 74, 14, 73, 14, 70, 13, 68,
12, 67, 11, 64, 8, 63, 7, 61, 6, 57, 4, 55, 4, 54, 2, 51, 1, 49, -1, 46, -2, 44,
-4, 42, -4, 39, -7, 37, -8, 34, -9, 31, -10, 29, -11, 26, -14, 24, -15, 22, -16,
19, -17, 17, -19, 14, -19, 12, -22, 9, -22, 7, -23, 5, -24, 4, -25, 3, -26, 0,
-27, -1, -27, -3, -28, -4, -28, -4, -30, -6, -30, -7, -30, -8, -31, -9, -31,
-10, -31, -10, -32, -10, -32, -11, -32, -12, -31, -11, -32, -11, -32, -11, -32,
-12, -32, -12, -32, -11, -31, -11, -31, -11, -30, -10, -30, -10, -30, -9, -30,
-9, -28, -8, -28, -8, -27, -7, -27, -6, -27, -5, -25, -4, -25, -4, -24, -3, -23,
-2, -23, -1, -23, 0, -22, 0, -21, 2, -21, 4, -19, 5, -19, 6, -18, 6, -17, 8,
-17, 8, -16, 10, -15, 10, -15, 10, -14, 12, -14, 12, -14, 12, -13, 12, -13, 13,
-13, 13, -14, 13, -13, 13, -12, 13, -13, 12, -13, 13, -12, 11, -13, 11, -14, 11,
-12, 10, -13, 10, -14, 9, -14, 8, -14, 7, -15, 6, -15, 5, -16, 4, -17, 3, -17,
2, -17, 2, -18, 0, -18, -1, -18, -2, -19, -3, -20, -5, -21, -6, -22, -7, -22,
-9, -22, -11, -23, -12, -24, -14, -25, -15, -25, -16, -26, -17, -27, -20, -28,
-21, -28, -22, -29, -25, -30, -26, -31, -27, -31, -29, -33, -30, -33, -32, -34,
-33, -34, -34, -36, -36, -36, -37, -36, -39, -38, -40, -38, -42, -38, -43, -40,
-45, -40, -47, -41, -48, -42, -50, -43, -50, -43, -52, -44, -53, -44, -55, -45,
-56, -46, -57, -47, -59, -47, -61, -48, -62, -49, -63, -49, -64, -50, -65, -50,
-67, -51, -68, -52, -68, -53, -70, -53, -70, -53, -72, -54, -73, -54, -74, -56,
-76, -55, -77, -56, -77, -57, -79, -57, -79, -57, -80, -58, -81, -59, -82, -59,
-84, -59, -84, -59, -85, -60, -86, -60, -87, -60, -87, -61, -88, -61, -89, -62,
-89, -61, -91, -62, -91, -62, -92, -62, -93, -64, -94, -63, -94, -64, -95, -64,
-96, -64, -97, -64, -96, -64, -98, -65, -98, -65, -99, -66, -99, -66, -100, -67,
-99, -67, -100, -66, -100, -66, -101, -67, -102, -67, -102, -67, -103, -68,
-104, -67, -103, -68, -104, -68, -104, -68, -105, -69, -105, -68, -105, -69,
-106, -69, -106, -69, -106, -68, -106, -69, -108, -68, -107, -70, -107, -70,
-108, -69, -108, -69, -108, -70, -108, -70, -108, -69, -109, -70, -110, -70,
-110, -70, -109, -70, -110, -70, -109, -70, -110, -70, -111, -70, -110, -70,
-110, -70, -111, -69, -111, -70, -111, -69, -112, -70, -111, -70, -112, -70,
-112, -70, -112, -69, -112, -70, -112, -70, -112, -70, -112, -70, -112, -71,
-113, -70, -113, -70, -113, -69, -112, -70, -113, -70, -112, -69, -112, -70,
-113, -70, -112, -70, -112, -69, -112, -70, -113, -69, -112, -69, -112, -69,
-112, -69, -112, -70, -112, -69, -112, -69, -112, -69, -112, -69, -112, -69,
-113, -69, -112, -68, -111, -68, -112, -69, -112, -69, -112, -68, -112, -68,
-112, -69, -111, -69, -112, -68, -112, -68, -111, -68, -112, -67, -112, -67,
-112, -68, -111, -68, -111, -68, -112, -67, -112, -68, -112, -67, -111, -66,
-110, -66, -108, -65, -108, -64, -107, -63, -106, -62, -105, -60, -103, -60,
-103, -58, -101, -56, -99, -56, -97, -53, -97, -52, -94, -50, -92, -48, -89,
-46, -87, -43, -86, -41, -82, -40, -80, -37, -77, -34, -75, -32, -72, -30, -70,
-27, -67, -25, -64, -22, -61, -18, -59, -17, -55, -13, -54, -10, -49, -8, -48,
-5, -41, -2, -43, 0, -23, };

#endif /* AKWF_stereo_0162_512_H_ */
