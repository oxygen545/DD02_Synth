#ifndef AKWF_stereo_0084_512_H_
#define AKWF_stereo_0084_512_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define AKWF_stereo_0084_512_NUM_CELLS 1024
#define AKWF_stereo_0084_512_SAMPLERATE 512
 
const int8_t __attribute__((section(".progmem.data"))) AKWF_stereo_0084_512_DATA
[] = {30, 21, 55, 39, 58, 41, 67, 50, 68, 53, 74, 59, 75, 64, 80, 70, 80, 75,
83, 81, 84, 85, 87, 90, 88, 93, 89, 96, 92, 97, 93, 99, 94, 99, 96, 101, 97,
103, 98, 105, 98, 107, 100, 108, 101, 111, 101, 113, 103, 115, 104, 117, 104,
119, 106, 120, 105, 119, 106, 120, 108, 120, 108, 120, 109, 121, 109, 121, 110,
122, 111, 122, 112, 124, 113, 124, 113, 125, 114, 125, 115, 126, 115, 126, 116,
126, 117, 126, 117, 126, 117, 125, 117, 126, 118, 126, 119, 124, 119, 125, 120,
124, 120, 125, 120, 123, 120, 124, 121, 124, 122, 123, 122, 123, 122, 122, 122,
122, 122, 122, 122, 121, 121, 120, 122, 119, 122, 119, 122, 118, 122, 118, 121,
117, 120, 116, 121, 116, 120, 115, 121, 114, 119, 114, 118, 112, 119, 111, 117,
111, 117, 110, 116, 109, 115, 108, 114, 106, 114, 106, 113, 105, 111, 104, 111,
104, 110, 102, 109, 101, 108, 100, 107, 99, 107, 98, 106, 97, 105, 95, 104, 94,
102, 93, 101, 92, 99, 91, 98, 90, 96, 88, 94, 87, 93, 86, 92, 84, 89, 84, 87,
82, 86, 80, 84, 80, 83, 79, 81, 77, 80, 76, 78, 74, 76, 74, 75, 71, 74, 70, 71,
69, 70, 69, 69, 66, 66, 65, 65, 64, 63, 63, 62, 62, 60, 59, 59, 58, 57, 57, 56,
56, 53, 54, 52, 53, 52, 51, 49, 49, 48, 49, 47, 48, 45, 46, 44, 44, 43, 43, 40,
42, 39, 41, 39, 38, 37, 37, 35, 37, 35, 34, 32, 33, 31, 31, 30, 31, 28, 29, 28,
28, 26, 26, 26, 25, 24, 23, 22, 21, 21, 21, 19, 19, 19, 18, 17, 16, 15, 15, 15,
14, 14, 12, 13, 11, 11, 10, 10, 7, 9, 7, 7, 5, 7, 3, 6, 3, 4, 1, 4, 0, 2, -1, 1,
-3, -1, -4, -2, -5, -4, -6, -5, -9, -5, -9, -7, -11, -8, -12, -9, -13, -10, -14,
-11, -16, -13, -18, -14, -19, -16, -20, -17, -22, -18, -23, -20, -24, -21, -26,
-22, -26, -23, -28, -25, -29, -25, -31, -27, -32, -29, -32, -30, -34, -31, -35,
-33, -37, -33, -38, -36, -39, -36, -41, -38, -42, -39, -43, -40, -44, -42, -46,
-43, -46, -43, -48, -46, -48, -43, -50, -35, -53, -37, -54, -37, -54, -40, -56,
-41, -57, -44, -58, -46, -59, -49, -60, -51, -60, -53, -61, -55, -64, -58, -64,
-58, -64, -61, -66, -63, -67, -65, -68, -66, -68, -68, -70, -70, -70, -72, -71,
-73, -73, -74, -73, -76, -75, -76, -76, -77, -77, -80, -78, -80, -78, -81, -80,
-83, -80, -84, -81, -84, -82, -86, -84, -87, -83, -88, -85, -88, -86, -89, -86,
-90, -87, -91, -87, -92, -89, -93, -90, -94, -91, -95, -91, -96, -92, -96, -93,
-97, -94, -97, -94, -99, -95, -100, -96, -100, -97, -101, -98, -102, -99, -102,
-99, -102, -99, -103, -100, -104, -101, -105, -102, -105, -102, -106, -103,
-106, -104, -108, -104, -108, -106, -109, -106, -109, -106, -109, -107, -110,
-108, -110, -108, -112, -109, -111, -109, -112, -110, -112, -110, -113, -111,
-111, -109, -112, -109, -112, -110, -113, -111, -115, -112, -115, -113, -117,
-115, -117, -116, -118, -118, -119, -117, -119, -118, -120, -118, -121, -118,
-121, -118, -121, -119, -121, -119, -120, -120, -120, -120, -120, -119, -121,
-120, -121, -120, -121, -120, -122, -121, -122, -121, -123, -121, -122, -121,
-124, -122, -124, -123, -124, -123, -125, -123, -125, -123, -125, -123, -126,
-124, -126, -124, -126, -124, -125, -124, -126, -124, -126, -124, -126, -125,
-127, -124, -127, -125, -127, -125, -127, -125, -127, -126, -128, -125, -127,
-125, -128, -126, -128, -126, -128, -125, -128, -125, -128, -126, -128, -126,
-128, -125, -128, -126, -128, -125, -128, -126, -128, -126, -128, -126, -128,
-125, -128, -125, -128, -126, -128, -125, -127, -125, -128, -125, -127, -125,
-128, -125, -127, -124, -127, -124, -127, -125, -127, -124, -127, -124, -127,
-124, -127, -124, -127, -124, -126, -124, -125, -123, -125, -123, -125, -123,
-125, -123, -125, -122, -125, -122, -125, -122, -124, -122, -123, -121, -123,
-121, -123, -121, -122, -121, -122, -120, -122, -119, -122, -120, -122, -120,
-121, -119, -121, -118, -120, -119, -120, -117, -119, -117, -119, -117, -118,
-117, -118, -117, -118, -116, -117, -116, -117, -114, -116, -114, -117, -114,
-116, -114, -115, -114, -114, -113, -114, -113, -114, -113, -114, -112, -113,
-111, -112, -111, -111, -110, -111, -110, -110, -109, -111, -109, -109, -108,
-108, -108, -109, -107, -107, -107, -107, -106, -107, -105, -106, -104, -106,
-104, -105, -104, -104, -103, -104, -102, -103, -102, -100, -101, -97, -101,
-97, -101, -96, -100, -96, -99, -95, -98, -95, -97, -95, -96, -94, -96, -94,
-95, -94, -95, -93, -94, -94, -93, -92, -93, -92, -91, -92, -91, -91, -90, -91,
-89, -91, -89, -89, -88, -89, -87, -89, -87, -88, -86, -87, -85, -86, -84, -86,
-83, -85, -82, -84, -82, -83, -81, -83, -79, -82, -79, -82, -79, -81, -77, -80,
-77, -80, -76, -78, -75, -76, -74, -76, -73, -76, -73, -76, -71, -74, -71, -74,
-69, -72, -68, -72, -69, -70, -68, -70, -65, -70, -65, -68, -65, -67, -63, -66,
-63, -65, -62, -64, -61, -64, -60, -62, -59, -62, -58, -60, -58, -59, -56, -59,
-55, -58, -55, -57, -53, -57, -53, -55, -52, -54, -50, -53, -50, -52, -48, -50,
-49, -50, -47, -49, -46, -48, -45, -47, -44, -45, -43, -45, -42, -44, -41, -42,
-40, -42, -39, -40, -38, -40, -36, -39, -37, -38, -36, -37, -35, -36, -32, -35,
-33, -34, -31, -33, -30, -31, -29, -31, -28, -30, -28, -28, -26, -28, -26, -27,
-25, -26, -23, -24, -22, -22, -20, -22, -21, -22, -18, -20, -18, -19, -16, -18,
-17, -17, -15, -15, -14, -15, -13, -14, -12, -13, -11, -12, -10, -11, -9, -10,
-7, -8, -7, -8, -6, -6, -5, -6, -4, -4, -3, -4, -2, -2, 0, };

#endif /* AKWF_stereo_0084_512_H_ */
