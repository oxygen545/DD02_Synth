#ifndef AKWF_1942_512_H_
#define AKWF_1942_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1942_512_NUM_CELLS 512
#define AKWF_1942_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1942_512_DATA [] = {1,
5, 8, 11, 14, 17, 21, 24, 27, 30, 33, 37, 39, 43, 45, 49, 52, 54, 58, 61, 64,
68, 70, 74, 78, 80, 84, 87, 90, 94, 95, 100, 103, 105, 108, 112, 115, 118, 122,
124, 127, 126, 124, 123, 119, 117, 114, 113, 110, 108, 106, 104, 102, 99, 98,
95, 92, 91, 88, 85, 83, 81, 78, 77, 74, 72, 70, 67, 65, 63, 61, 59, 56, 54, 51,
49, 46, 45, 43, 41, 37, 36, 34, 31, 29, 27, 24, 23, 24, 25, 25, 27, 27, 28, 29,
30, 30, 31, 32, 33, 34, 34, 36, 36, 36, 38, 38, 40, 41, 41, 42, 43, 43, 44, 45,
46, 46, 48, 47, 49, 49, 50, 51, 51, 52, 54, 54, 55, 57, 57, 57, 59, 60, 60, 59,
56, 55, 53, 51, 49, 47, 46, 43, 41, 39, 38, 35, 33, 32, 30, 29, 26, 25, 23, 20,
19, 16, 14, 13, 11, 8, 7, 4, 2, 1, -1, -3, -5, -7, -9, -11, -12, -14, -16, -18,
-20, -22, -24, -26, -28, -29, -30, -30, -32, -32, -33, -33, -34, -34, -36, -36,
-37, -37, -38, -40, -40, -41, -41, -42, -42, -43, -43, -45, -46, -46, -47, -48,
-48, -50, -50, -51, -52, -52, -53, -53, -54, -55, -56, -56, -57, -57, -58, -59,
-60, -61, -61, -61, -60, -55, -53, -49, -46, -43, -40, -37, -33, -29, -26, -23,
-20, -17, -13, -9, -6, -3, 0, 3, 6, 10, 13, 17, 19, 23, 27, 30, 33, 36, 40, 42,
46, 50, 53, 56, 60, 62, 66, 69, 73, 76, 79, 82, 85, 89, 91, 87, 85, 84, 81, 79,
76, 73, 71, 68, 66, 63, 61, 59, 56, 53, 51, 49, 45, 44, 42, 39, 37, 33, 32, 28,
26, 24, 22, 19, 17, 14, 12, 9, 8, 5, 2, -1, -3, -6, -8, -10, -13, -15, -17, -20,
-22, -23, -25, -25, -27, -27, -28, -29, -30, -31, -32, -32, -33, -34, -34, -36,
-36, -37, -39, -39, -41, -41, -43, -43, -44, -44, -45, -46, -47, -48, -49, -50,
-51, -51, -52, -53, -54, -54, -56, -57, -58, -58, -59, -60, -62, -62, -63, -63,
-62, -60, -59, -59, -58, -57, -56, -56, -53, -53, -53, -51, -50, -49, -47, -47,
-46, -46, -44, -43, -42, -42, -40, -39, -39, -37, -36, -35, -34, -33, -32, -31,
-30, -29, -29, -27, -27, -25, -24, -23, -22, -21, -21, -19, -19, -18, -19, -21,
-24, -26, -28, -30, -32, -34, -36, -39, -41, -43, -45, -47, -50, -52, -55, -56,
-59, -62, -63, -66, -68, -70, -71, -74, -76, -79, -80, -83, -86, -87, -89, -92,
-94, -96, -98, -101, -103, -105, -108, -109, -111, -114, -116, -118, -119, -117,
-115, -112, -111, -108, -106, -103, -101, -99, -97, -95, -93, -91, -88, -86,
-83, -82, -80, -78, -75, -73, -71, -70, -66, -64, -62, -60, -58, -56, -54, -52,
-49, -47, -46, -42, -40, -38, -36, -35, -32, -30, -28, -25, -23, -21, -19, -16,
-13, -9, -6, -2, -1, };

#endif /* AKWF_1942_512_H_ */
