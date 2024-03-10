#ifndef AKWF_1636_512_H_
#define AKWF_1636_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1636_512_NUM_CELLS 512
#define AKWF_1636_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1636_512_DATA [] =
{10, 72, 77, 82, 89, 91, 97, 100, 105, 106, 110, 111, 115, 115, 118, 118, 121,
120, 123, 124, 124, 124, 125, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 127, 126, 125,
126, 125, 124, 125, 124, 124, 124, 123, 123, 123, 123, 122, 122, 122, 122, 121,
121, 121, 120, 120, 120, 119, 119, 118, 119, 118, 117, 117, 118, 117, 117, 117,
116, 116, 116, 115, 115, 115, 115, 114, 113, 114, 113, 113, 112, 112, 111, 111,
111, 111, 111, 110, 109, 110, 109, 109, 109, 108, 108, 108, 107, 107, 105, 101,
93, 87, 80, 75, 69, 65, 61, 57, 53, 50, 47, 45, 42, 40, 38, 36, 34, 32, 31, 28,
27, 27, 26, 24, 23, 23, 23, 21, 20, 19, 20, 18, 18, 18, 17, 17, 16, 15, 15, 14,
13, 13, 12, 13, 12, 12, 12, 11, 10, 11, 10, 9, 9, 9, 9, 12, 16, 21, 24, 28, 31,
33, 36, 35, 32, 29, 27, 24, 22, 20, 19, 20, 23, 26, 28, 29, 31, 33, 34, 34, 36,
37, 38, 38, 39, 40, 40, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 41, 40, 40, 40,
39, 39, 39, 38, 36, 34, 35, 33, 32, 31, 31, 31, 29, 30, 29, 28, 28, 25, 15, 3,
-8, -18, -26, -35, -42, -48, -54, -59, -65, -68, -72, -76, -79, -82, -78, -73,
-68, -65, -62, -58, -56, -53, -51, -49, -47, -45, -44, -43, -41, -40, -39, -38,
-37, -36, -35, -35, -35, -34, -33, -33, -33, -32, -32, -32, -31, -31, -31, -31,
-30, -29, -30, -30, -30, -30, -31, -30, -30, -30, -29, -30, -30, -29, -29, -29,
-29, -30, -30, -29, -30, -29, -28, -30, -29, -29, -28, -29, -30, -29, -29, -29,
-29, -29, -29, -30, -29, -29, -29, -29, -29, -29, -28, -29, -28, -29, -29, -29,
-29, -29, -29, -30, -29, -29, -29, -29, -29, -29, -29, -29, -29, -28, -24, -16,
-11, -7, -1, 3, 7, 10, 15, 17, 20, 22, 25, 26, 28, 28, 26, 20, 17, 11, 7, 4, 1,
-3, -12, -22, -29, -37, -44, -50, -56, -60, -61, -58, -57, -55, -55, -54, -53,
-53, -52, -52, -51, -50, -50, -49, -49, -49, -48, -48, -48, -48, -48, -47, -48,
-47, -48, -47, -47, -47, -47, -46, -48, -47, -47, -47, -48, -48, -49, -48, -48,
-48, -49, -49, -48, -48, -49, -49, -49, -48, -45, -42, -37, -34, -30, -27, -25,
-23, -25, -28, -31, -33, -35, -38, -39, -41, -40, -39, -37, -36, -35, -34, -32,
-31, -32, -31, -31, -29, -29, -29, -29, -29, -28, -29, -29, -28, -28, -29, -29,
-29, -29, -30, -30, -30, -31, -31, -32, -34, -37, -42, -45, -49, -52, -55, -58,
-60, -62, -64, -65, -68, -69, -70, -71, -72, -76, -79, -82, -84, -87, -89, -91,
-93, -94, -95, -97, -98, -99, -100, -101, -95, -80, -65, -51, -39, -28, -17, -8,
0, };

#endif /* AKWF_1636_512_H_ */