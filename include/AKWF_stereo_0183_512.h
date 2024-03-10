#ifndef AKWF_stereo_0183_512_H_
#define AKWF_stereo_0183_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0183_512_NUM_CELLS 1024
#define AKWF_stereo_0183_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0183_512_DATA
[] = {0, 35, 2, 47, 2, 41, 4, 44, 6, 41, 7, 42, 8, 40, 9, 42, 11, 38, 11, 39,
13, 37, 14, 37, 14, 35, 16, 36, 17, 34, 18, 33, 18, 32, 20, 31, 20, 31, 20, 29,
22, 28, 23, 27, 23, 26, 24, 24, 24, 23, 24, 22, 24, 21, 25, 19, 25, 18, 26, 18,
25, 18, 26, 15, 27, 15, 26, 13, 26, 13, 26, 11, 26, 10, 26, 10, 26, 8, 26, 7,
26, 6, 26, 6, 25, 5, 25, 5, 26, 4, 24, 4, 25, 4, 23, 3, 24, 2, 23, 2, 24, 1, 22,
2, 22, 1, 21, 0, 21, 0, 21, -1, 20, -1, 19, -2, 18, -2, 18, -2, 17, -3, 16, -4,
15, -4, 15, -4, 15, -5, 14, -6, 14, -7, 13, -8, 12, -9, 12, -9, 12, -9, 12, -11,
11, -11, 10, -12, 11, -13, 10, -15, 10, -14, 10, -15, 10, -16, 11, -18, 12, -19,
13, -19, 12, -19, 12, -20, 14, -20, 14, -20, 15, -20, 16, -21, 17, -20, 18, -21,
20, -21, 20, -20, 22, -20, 23, -21, 24, -20, 26, -21, 27, -20, 29, -20, 30, -21,
31, -21, 31, -21, 32, -20, 34, -20, 36, -21, 36, -21, 37, -20, 37, -21, 37, -21,
38, -21, 38, -21, 39, -22, 38, -22, 39, -23, 38, -23, 39, -23, 39, -24, 38, -25,
37, -25, 37, -25, 36, -26, 36, -26, 35, -26, 34, -27, 33, -26, 33, -27, 31, -28,
31, -28, 29, -28, 29, -28, 28, -28, 27, -27, 26, -28, 24, -28, 24, -27, 23, -27,
22, -27, 21, -27, 21, -27, 21, -26, 21, -27, 20, -26, 18, -25, 18, -25, 19, -24,
18, -23, 18, -23, 19, -21, 18, -20, 19, -20, 18, -19, 19, -18, 20, -16, 20, -16,
21, -14, 22, -13, 22, -12, 24, -11, 24, -8, 25, -7, 26, -6, 28, -5, 28, -3, 29,
-2, 30, 0, 31, 1, 32, 3, 34, 5, 36, 7, 37, 8, 38, 9, 39, 11, 40, 13, 40, 14, 42,
15, 44, 17, 44, 18, 46, 20, 46, 22, 48, 23, 49, 24, 50, 27, 51, 27, 53, 30, 53,
30, 54, 32, 55, 34, 56, 35, 56, 37, 58, 39, 59, 41, 60, 43, 61, 44, 62, 47, 64,
49, 65, 50, 66, 52, 68, 54, 68, 57, 69, 59, 70, 62, 71, 64, 73, 67, 74, 69, 75,
71, 76, 74, 78, 76, 79, 78, 80, 81, 81, 83, 82, 86, 83, 89, 85, 92, 87, 95, 88,
97, 88, 99, 89, 102, 90, 103, 92, 106, 92, 108, 94, 110, 94, 111, 95, 114, 97,
115, 97, 118, 98, 118, 98, 120, 99, 121, 100, 123, 100, 123, 101, 124, 102, 125,
102, 126, 102, 126, 103, 127, 103, 127, 104, 127, 104, 127, 104, 127, 105, 127,
104, 127, 104, 127, 105, 127, 104, 126, 103, 126, 103, 126, 102, 125, 101, 123,
101, 122, 99, 120, 99, 119, 97, 117, 96, 115, 95, 113, 92, 111, 90, 107, 87,
105, 85, 102, 82, 98, 78, 95, 75, 91, 71, 88, 67, 84, 63, 79, 59, 75, 54, 70,
49, 65, 43, 60, 38, 54, 32, 49, 28, 44, 22, 40, 17, 34, 12, 29, 7, 24, 1, 19,
-3, 14, -9, 9, -12, 6, -18, 1, -22, -4, -24, -7, -28, -10, -32, -14, -35, -17,
-37, -20, -40, -23, -42, -26, -44, -28, -45, -31, -47, -33, -49, -34, -49, -36,
-50, -38, -51, -39, -52, -41, -53, -43, -52, -44, -53, -45, -52, -46, -53, -47,
-53, -48, -53, -49, -52, -50, -52, -50, -52, -52, -52, -51, -52, -53, -51, -53,
-50, -54, -49, -54, -49, -54, -50, -54, -48, -55, -49, -55, -47, -55, -47, -55,
-46, -55, -46, -55, -45, -56, -45, -55, -45, -56, -44, -56, -43, -55, -43, -55,
-42, -55, -42, -55, -41, -55, -40, -56, -41, -55, -40, -55, -40, -56, -39, -56,
-39, -56, -39, -55, -38, -55, -38, -56, -37, -55, -36, -56, -36, -55, -36, -56,
-36, -55, -35, -54, -34, -54, -34, -54, -32, -54, -32, -53, -33, -53, -31, -53,
-31, -53, -30, -51, -29, -51, -28, -51, -26, -50, -25, -50, -24, -49, -23, -48,
-21, -49, -21, -47, -19, -46, -18, -45, -17, -45, -15, -45, -13, -43, -12, -43,
-11, -41, -10, -41, -10, -40, -8, -39, -7, -39, -6, -38, -5, -37, -3, -36, -4,
-36, -2, -35, -1, -34, 0, -34, 0, -33, 1, -33, 1, -31, 1, -31, 1, -31, 2, -31,
2, -30, 2, -30, 1, -29, 1, -29, 1, -28, 1, -29, 0, -30, -1, -29, 0, -30, -3,
-29, -3, -29, -3, -30, -6, -30, -6, -31, -8, -30, -9, -31, -12, -32, -13, -33,
-15, -32, -17, -33, -19, -35, -21, -35, -24, -37, -27, -38, -29, -38, -31, -40,
-34, -41, -37, -42, -40, -43, -43, -44, -46, -47, -50, -48, -54, -50, -57, -52,
-61, -53, -63, -55, -67, -57, -70, -59, -74, -61, -78, -63, -81, -65, -85, -66,
-87, -69, -92, -71, -94, -72, -97, -74, -100, -76, -103, -78, -106, -78, -108,
-79, -111, -80, -114, -81, -115, -81, -117, -83, -119, -83, -121, -83, -122,
-83, -123, -83, -124, -83, -124, -81, -125, -81, -126, -80, -126, -79, -126,
-78, -126, -76, -126, -75, -125, -73, -125, -72, -124, -71, -123, -69, -122,
-66, -122, -64, -120, -62, -119, -60, -117, -59, -116, -55, -114, -53, -113,
-51, -111, -48, -109, -45, -106, -44, -104, -40, -101, -38, -100, -35, -97, -32,
-94, -29, -91, -26, -89, -24, -85, -21, -83, -18, -80, -15, -76, -12, -74, -9,
-71, -7, -68, -4, -65, 0, -63, 1, -60, 4, -57, 7, -54, 10, -51, 12, -49, 15,
-46, 17, -43, 19, -40, 21, -39, 24, -36, 26, -34, 27, -32, 30, -31, 30, -28, 32,
-26, 34, -24, 36, -23, 37, -22, 39, -20, 39, -18, 40, -17, 40, -16, 43, -14, 43,
-12, 43, -11, 44, -10, 45, -8, 44, -7, 45, -5, 43, -4, 47, -3, 41, -2, 49, 0,
29, };

#endif /* AKWF_stereo_0183_512_H_ */
