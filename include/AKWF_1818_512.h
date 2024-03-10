#ifndef AKWF_1818_512_H_
#define AKWF_1818_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_1818_512_NUM_CELLS 512
#define AKWF_1818_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_1818_512_DATA [] =
{95, 127, 112, 123, 115, 121, 116, 121, 117, 121, 117, 120, 118, 119, 118, 120,
118, 119, 119, 118, 118, 119, 120, 119, 119, 119, 120, 118, 119, 119, 119, 119,
119, 119, 119, 119, 120, 119, 119, 120, 111, 108, 109, 108, 108, 109, 108, 108,
108, 108, 107, 108, 108, 107, 109, 107, 108, 107, 109, 107, 108, 106, 109, 106,
109, 105, 109, 106, 110, 104, 110, 104, 111, 104, 112, 96, -42, -46, -42, -47,
-42, -47, -42, -46, -42, -47, -42, -46, -43, -45, -43, -45, -43, -44, -44, -44,
-43, -44, -44, -44, -44, -44, -44, -44, -44, -44, -44, -43, -43, -44, -44, -43,
-44, -43, -44, -43, -43, -44, -44, -44, -43, -43, -43, -44, -44, -44, -43, -43,
-43, -43, -44, -44, -43, -43, -43, -43, -43, -43, -43, -43, -43, -43, -43, -43,
-43, -43, -44, -43, -44, -43, -42, -43, -43, -43, -43, -43, -43, -43, -43, -43,
-43, -42, -42, -42, -43, -43, -42, -42, -42, -43, -42, -43, -42, -42, -42, -43,
-43, -43, -42, -43, -42, -43, -43, -42, -42, -43, -42, -41, -43, -42, -41, -43,
-42, -42, -41, -42, -42, -42, -42, -42, -41, -42, -42, -42, -42, -42, -42, -42,
-41, -41, -42, -42, -42, -42, -42, -42, -41, -41, -42, -41, -41, -41, -41, -42,
-41, -40, -41, -40, -41, -42, -41, -41, -41, -42, -42, -40, -42, -40, -41, -40,
-41, -41, -42, -40, -43, -40, -41, -39, -42, -40, -42, -40, -41, -40, -40, -41,
-40, -42, -39, -43, -36, -46, -31, -60, 64, 127, 117, 127, 122, 127, 124, 127,
126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
127, 127, 127, 127, 127, 127, 127, 127, 122, 97, 100, 99, 99, 99, 98, 99, 97,
99, 97, 98, 97, 100, 97, 99, 98, 98, 97, 99, 98, 97, 98, 97, 99, 96, 100, 94,
104, 89, 115, 23, -62, -35, -50, -40, -47, -41, -45, -44, -46, -43, -45, -44,
-44, -45, -44, -44, -44, -45, -44, -44, -43, -45, -43, -44, -43, -45, -44, -45,
-43, -45, -43, -44, -44, -44, -44, -44, -44, -43, -44, -44, -44, -43, -44, -44,
-44, -43, -44, -43, -45, -44, -44, -44, -44, -43, -43, -44, -43, -44, -43, -44,
-44, -43, -44, -44, -43, -43, -43, -44, -42, -44, -43, -43, -43, -43, -44, -43,
-43, -42, -44, -44, -43, -43, -43, -43, -43, -43, -43, -43, -42, -43, -43, -43,
-43, -43, -43, -43, -42, -43, -43, -42, -42, -42, -42, -42, -43, -42, -42, -42,
-43, -43, -43, -42, -43, -42, -42, -42, -42, -42, -42, -43, -42, -42, -42, -42,
-42, -42, -42, -42, -43, -42, -41, -42, -43, -42, -42, -42, -42, -42, -41, -42,
-42, -42, -41, -41, -42, -42, -41, -42, -42, -42, -41, -42, -40, -42, -41, -41,
-41, -42, -41, -42, -41, -41, -42, -41, -41, -41, -40, -41, -41, -41, -42, -41,
-41, -40, -41, -41, -42, -40, -42, -40, -43, -39, -45, -26, };

#endif /* AKWF_1818_512_H_ */
