#ifndef AKWF_0823_512_H_
#define AKWF_0823_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_0823_512_NUM_CELLS 512
#define AKWF_0823_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_0823_512_DATA [] = {1,
2, 4, 7, 10, 11, 15, 17, 19, 22, 24, 27, 30, 32, 35, 38, 40, 43, 47, 49, 52, 55,
59, 62, 64, 67, 70, 73, 76, 78, 82, 84, 88, 90, 92, 94, 97, 99, 102, 103, 106,
108, 109, 112, 114, 114, 115, 117, 118, 120, 122, 121, 122, 124, 125, 126, 126,
126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
126, 127, 126, 125, 124, 125, 124, 123, 123, 122, 122, 120, 120, 120, 119, 117,
118, 116, 117, 115, 114, 114, 113, 112, 111, 110, 109, 108, 108, 106, 105, 104,
103, 102, 101, 100, 99, 99, 97, 96, 95, 94, 92, 90, 89, 87, 86, 85, 83, 80, 80,
77, 76, 74, 71, 70, 68, 66, 64, 62, 61, 58, 56, 54, 52, 50, 47, 45, 43, 40, 39,
37, 34, 32, 29, 27, 25, 22, 21, 19, 17, 14, 13, 10, 8, 5, 4, 1, 0, -3, -4, -6,
-8, -10, -12, -14, -16, -18, -19, -21, -23, -24, -27, -28, -29, -30, -33, -35,
-36, -37, -39, -40, -40, -42, -44, -44, -46, -47, -49, -49, -50, -52, -52, -53,
-52, -53, -54, -54, -54, -54, -54, -53, -54, -53, -52, -52, -52, -51, -50, -49,
-48, -47, -47, -46, -45, -43, -42, -41, -39, -38, -37, -36, -34, -33, -32, -30,
-29, -27, -26, -25, -24, -22, -21, -19, -18, -16, -15, -15, -14, -13, -11, -9,
-8, -8, -7, -6, -5, -4, -4, -3, -2, -1, -1, -1, 1, 1, 3, 2, 3, 4, 5, 4, 5, 6, 6,
8, 8, 8, 9, 9, 10, 10, 11, 12, 12, 13, 14, 14, 15, 15, 16, 17, 16, 17, 17, 17,
18, 18, 17, 18, 17, 18, 17, 17, 17, 16, 15, 15, 14, 13, 13, 12, 11, 10, 9, 8, 7,
7, 5, 4, 3, 2, 1, 0, -2, -3, -4, -5, -6, -7, -8, -10, -11, -12, -13, -15, -16,
-16, -16, -17, -19, -20, -21, -22, -22, -24, -24, -25, -27, -27, -27, -28, -30,
-29, -31, -31, -32, -32, -34, -34, -34, -35, -36, -35, -36, -37, -37, -37, -38,
-39, -40, -39, -40, -41, -41, -42, -42, -43, -43, -44, -43, -45, -45, -46, -47,
-47, -47, -48, -50, -50, -51, -52, -52, -52, -53, -55, -56, -56, -58, -58, -58,
-60, -60, -61, -62, -63, -63, -64, -65, -66, -66, -67, -68, -69, -69, -70, -71,
-72, -73, -73, -74, -75, -75, -77, -77, -78, -78, -79, -79, -81, -81, -81, -83,
-83, -83, -84, -84, -85, -85, -86, -86, -87, -88, -88, -89, -89, -90, -90, -91,
-90, -91, -92, -92, -92, -93, -92, -93, -94, -93, -93, -93, -93, -94, -93, -92,
-91, -91, -90, -90, -89, -88, -87, -86, -85, -84, -82, -81, -79, -78, -77, -75,
-74, -71, -71, -69, -67, -65, -63, -61, -60, -58, -56, -54, -53, -50, -48, -46,
-44, -42, -40, -39, -37, -35, -33, -30, -28, -26, -24, -21, -20, -17, -16, -14,
-11, -9, -7, -5, -3, 0, };

#endif /* AKWF_0823_512_H_ */
