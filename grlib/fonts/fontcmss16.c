//*****************************************************************************
//
// fontcmss16.c - Font definition for the 16pt Cmss font.
//
// Copyright (c) 2011-2014 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.0.12573 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cmss
//     Size: 16 point
//     Bold: no
//     Italic: no
//     Memory usage: 1944 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 16 point Cmss font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cmss16Data[1741] =
{
      5,   6,   0,  12,  96,  12,   2,  65,  17,  17,  17,  17,
     17,  17,  17,  81, 144,   9,   4, 129,  17,  17,  17,   0,
      6,  80,  29,  12, 240, 225, 161,  49, 113,  49, 113,  33,
    129,  33,  75,  65,  49, 113,  33,  91,  49,  49, 113,  49,
    113,  33, 129,  33, 177, 240,  48,  27,   7,  33,  98,  69,
     17,  17,  33,  17,  17,  65,  17,  67,  84,  65,  18,  49,
     33,  49,  33,  17,  17,  18,  36,  65, 240, 160,  38,  12,
    210, 145,  33,  65,  49,  33,  49,  65,  33,  49,  65,  33,
     33,  98,  33, 177,  34,  97,  33,  33,  81,  33,  33,  65,
     49,  33,  65,  49,  33,  49,  65,  33, 146, 240, 240, 128,
     28,  10, 240, 114, 113,  33,  97,  33,  97,  33,  97,  17,
    114,  65,  50,  65,  33,  18,  33,  49,  36,  49,  50,  83,
     20, 240, 240, 176,   6,   2,  65,  17, 240, 192,  19,   4,
     33,  49,  33,  49,  33,  49,  49,  49,  49,  49,  49,  49,
     49,  65,  49,  65,  49,  20,   4,   1,  49,  65,  49,  65,
     49,  49,  49,  49,  49,  49,  49,  49,  33,  49,  33,  49,
     48,  15,   6,  33,  81,  49,  17,  17,  21,  49,  53,  49,
     81,   0,   7,  16,  18,  12, 240, 240, 177, 177, 177, 177,
    177, 107,  97, 177, 177, 177, 177, 240, 240, 192,   6,   2,
    240, 145,  17, 112,   8,   5, 240, 240, 244, 240, 240,  96,
      5,   2, 240, 145, 144,  20,   7,  81,  97,  81,  97,  97,
     81,  97,  97,  81,  97,  97,  81,  97,  97,  81,  97,  97,
     96,  25,   7, 240,  18,  65,  33,  33,  65,  17,  65,  17,
     65,  17,  65,  17,  65,  17,  65,  17,  65,  33,  33,  52,
    240, 240,  15,   6, 225,  51,  81,  81,  81,  81,  81,  81,
     81,  81,  53, 240, 160,  17,   7, 244,  49,  34,  17,  65,
     97,  97,  81,  97,  81,  81,  81,  86, 240, 224,  18,   7,
    240,  19,  49,  49,  97,  97,  82,  51, 113,  97,  97,  18,
     49,  51, 240, 240,  21,   7, 240,  49,  82,  65,  17,  65,
     17,  50,  17,  49,  33,  34,  33,  38,  81,  97,  97, 240,
    240,  17,   7, 245,  33,  97,  97, 100,  49,  34,  97,  97,
     97,  18,  33,  52, 240, 240,  22,   7, 240,  20,  33,  97,
     81,  97,  19,  34,  34,  17,  65,  17,  65,  17,  65,  33,
     33,  52, 240, 240,  16,   7, 230,  97,  81,  97,  81,  97,
     97,  81,  97,  97,  97, 240, 240,  32,  23,   7, 244,  34,
     34,  17,  65,  17,  65,  18,  34,  50,  50,  34,  17,  65,
     17,  65,  18,  34,  36, 240, 240,  24,   7, 240,  18,  65,
     33,  33,  65,  17,  65,  17,  65,  17,  65,  18,  34,  35,
     17,  81,  97,  36, 240, 240,  16,   5,   2, 193, 177, 144,
      7,   2, 193, 177,  17,  17,  80,  13,   2, 161,  49,  17,
     17,  17,  17,  17,  17,  17,  17,  48,  10,  11,   0,   9,
     90, 240, 138,   0,   8,  48,  16,   6, 240, 240,  33, 177,
     81,  81,  65,  81,  65,  81,  81,  49,  36, 112,  15,   6,
    211,  33,  49,  81,  81,  65,  65,  81,  81, 240,  33, 240,
    192,  31,   9, 240,  99,  81,  49,  49,  36,  17,  34,  18,
     17,  33,  49,  17,  33,  49,  17,  33,  49,  17,  34,  18,
     33,  35,  65,  65,  68, 240, 240, 128,  24,   9, 240,  98,
    114, 100,  81,  33,  81,  33,  66,  34,  49,  65,  54,  34,
     66,  17,  97,  17,  97, 240, 240, 112,  25,   9, 240,  54,
     49,  81,  33,  97,  17,  97,  17,  81,  38,  49,  81,  33,
     97,  17,  97,  17,  81,  38, 240, 240, 144,  17,   8, 240,
     68,  34,  97,  97, 113, 113, 113, 113, 129, 114, 132, 240,
    240,  48,  26,  10, 240,  86,  65,  81,  49,  97,  33, 113,
     17, 113,  17, 113,  17, 113,  17, 113,  17,  97,  33,  82,
     38, 240, 240, 224,  17,   8, 240,  22,  33, 113, 113, 113,
    118,  33, 113, 113, 113, 119, 240, 240,  48,  16,   7, 230,
     17,  97,  97,  97, 102,  17,  97,  97,  97,  97, 240, 240,
     64,  22,   9, 240, 100,  50,  65,  33, 113, 129, 129, 129,
     67,  17,  97,  33,  81,  49,  65,  68, 240, 240, 128,  27,
      9, 240,  49,  97,  17,  97,  17,  97,  17,  97,  17,  97,
     24,  17,  97,  17,  97,  17,  97,  17,  97,  17,  97, 240,
    240, 112,  14,   2,  65,  17,  17,  17,  17,  17,  17,  17,
     17,  17,  17, 144,  17,   6, 240,  17,  81,  81,  81,  81,
     81,  81,  81,  81,  17,  49,  20, 240, 176,  27,   9, 240,
     49,  81,  33,  65,  49,  50,  49,  34,  65,  18,  85,  66,
     33,  65,  50,  49,  65,  49,  81,  33,  82, 240, 240, 112,
     15,   7, 225,  97,  97,  97,  97,  97,  97,  97,  97,  97,
    102, 240, 224,  42,  10, 240,  82,  82,  18,  82,  18,  82,
     17,  17,  49,  17,  17,  17,  49,  17,  17,  17,  49,  17,
     17,  33,  17,  33,  17,  33,  17,  33,  17,  33,  17,  33,
     17,  34,  49,  17,  49,  49, 240, 240, 176,  35,   9, 240,
     50,  81,  19,  65,  17,  17,  65,  17,  18,  49,  17,  33,
     49,  17,  34,  33,  17,  49,  33,  17,  50,  17,  17,  65,
     17,  17,  67,  17,  82, 240, 240, 112,  26,  10, 240, 131,
     82,  50,  49,  81,  33, 113,  17, 113,  17, 113,  17, 113,
     17, 113,  33,  81,  50,  50,  83, 240, 240, 224,  21,   9,
    240,  54,  49,  81,  33,  97,  17,  97,  17,  81,  38,  49,
    129, 129, 129, 129, 240, 240, 224,  28,  10, 240, 131,  82,
     50,  49,  81,  33, 113,  17, 113,  17, 113,  17, 113,  17,
    113,  33,  34,  17,  50,  35,  84, 146, 145, 240, 112,  26,
      9, 240,  54,  49,  81,  33,  97,  17,  97,  17,  82,  22,
     49,  50,  49,  65,  49,  81,  33,  82,  17,  97, 240, 240,
    112,  16,   7, 244,  34,  81,  97,  98, 115,  98,  97,  97,
     17,  50,  36, 240, 240,  17,  10, 240,  89,  81, 145, 145,
    145, 145, 145, 145, 145, 145, 145, 240, 240, 240,  27,   9,
    240,  49,  97,  17,  97,  17,  97,  17,  97,  17,  97,  17,
     97,  17,  97,  17,  97,  17,  97,  33,  65,  68, 240, 240,
    144,  25,  11, 240, 114,  98,  33,  97,  50,  81,  50,  65,
     81,  65,  82,  49,  97,  33, 113,  33, 116, 130, 146,   0,
      6,  16,  40,  15, 240, 242,  66,  81,  33,  66,  66,  33,
     66,  65,  50,  49,  17,  49,  50,  33,  33,  49,  65,  33,
     33,  33,  81,  33,  34,  17,  84,  49,  17,  98,  65,  17,
     98,  66, 114,  66,   0,   8,  25,   9, 240,  49,  82,  33,
     65,  50,  33,  81,  18,  98, 114,  99,  97,  33,  65,  50,
     34,  66,  17,  97, 240, 240, 112,  22,  10, 240,  82,  97,
     33,  81,  50,  50,  65,  49,  97,  17, 115, 129, 145, 145,
    145, 145, 240, 240, 240,  17,   8, 240,  23,  98,  97,  98,
     82,  97,  98,  97,  97,  98, 103, 240, 240,  48,  18,   3,
     50,  17,  33,  33,  33,  33,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  34,  11,   5, 161,  33,  17,  33,  17,  33,
      0,   7,  80,  18,   3,  50,  33,  33,  33,  33,  33,  33,
     33,  33,  33,  33,  33,  33,  33,  33,  18,   8,   5, 178,
     33,  18,   0,   8,  32,   5,   2,  65, 240, 224,   7,   2,
     65,  17,  17, 240, 160,  15,   6, 240, 240, 115,  97,  81,
     36,  17,  49,  17,  49,  21, 240, 160,  21,   7, 225,  97,
     97,  97,  97,  19,  34,  34,  17,  65,  17,  65,  17,  65,
     17,  50,  21, 240, 240,  13,   6, 240, 240, 116,  33,  65,
     81,  81,  97,  84, 240, 160,  21,   6, 240,  17,  81,  81,
     81,  36,  18,  33,  17,  49,  17,  49,  17,  49,  18,  33,
     36, 240, 160,  15,   6, 240, 240, 115,  33,  49,  21,  17,
     81,  97,  33,  36, 240, 160,  15,   6, 227,  33,  81,  81,
     68,  49,  81,  81,  81,  81,  81, 240, 208,  20,   7, 240,
    240, 213,  17,  49,  33,  49,  33,  49,  36,  49, 101,  33,
     65,  17,  65,  36, 144,  22,   6, 193,  81,  81,  81,  81,
     18,  34,  33,  17,  49,  17,  49,  17,  49,  17,  49,  17,
     49, 240, 160,  11,   2,  65, 113,  17,  17,  17,  17,  17,
     17, 144,  14,   4, 161, 241,  49,  49,  49,  49,  49,  49,
     49,  49,  18,  96,  20,   6, 193,  81,  81,  81,  81,  34,
     17,  18,  35,  51,  49,  33,  33,  34,  17,  49, 240, 160,
     14,   2,  65,  17,  17,  17,  17,  17,  17,  17,  17,  17,
     17, 144,  28,  11,   0,   8,  33,  18,  35,  34,  34,  49,
     17,  49,  65,  17,  49,  65,  17,  49,  65,  17,  49,  65,
     17,  49,  65, 240, 240, 240,  20,   6, 240, 240,  97,  18,
     34,  33,  17,  49,  17,  49,  17,  49,  17,  49,  17,  49,
    240, 160,  18,   7, 240, 240, 212,  49,  33,  33,  65,  17,
     65,  17,  65,  33,  33,  52, 240, 240,  21,   7, 240, 240,
    193,  19,  34,  34,  17,  65,  17,  65,  17,  65,  17,  50,
     21,  33,  97,  97, 208,  20,   6, 240, 240, 116,  18,  33,
     17,  49,  17,  49,  17,  49,  18,  33,  36,  81,  81,  81,
    112,  13,   5, 240, 241,  18,  18,  49,  65,  65,  65,  65,
    240, 144,  13,   5, 240, 240,  19,  17,  65,  82,  81,  65,
     19, 240, 112,  15,   5, 240,  17,  65,  65,  52,  33,  65,
     65,  65,  65,  67, 240,  96,  19,   6, 240, 240,  97,  49,
     17,  49,  17,  49,  17,  49,  17,  49,  17,  49,  21, 240,
    160,  20,   8,   0,   6,   2,  50,  33,  49,  49,  49,  50,
     17,  81,  17,  81,  17,  97, 240, 240,  96,  27,  11,   0,
      8,  34,  34,  49,  33,  34,  34,  33,  34,  33,  49,  33,
     17,  17,  66,  33,  17,  66,  34,  82,  34,   0,   5, 112,
     18,   7, 240, 240, 194,  49,  34,  17,  67,  81,  81,  17,
     49,  34,  18,  49, 240, 224,  20,   7, 240, 240, 194,  49,
     33,  49,  34,  33,  49,  17,  65,  17,  82,  81,  97,  81,
     82, 176,  13,   7, 240, 240, 198,  81,  81,  82,  66,  81,
     86, 240, 224,   8,   9,   0,   9,   8,   0,   9,  16,   8,
     16,   0,  16,  15,   0,  16,  16,   9,   5, 177,  17,  17,
     17,   0,   8,  48,   9,   6, 210,  17,  17,  34,   0,   9,
    112,
};

//*****************************************************************************
//
// The font definition for the 16 point Cmss font.
//
//*****************************************************************************
const tFont g_sFontCmss16 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    14,

    //
    // The height of the font.
    //
    17,

    //
    // The baseline of the font.
    //
    13,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   17,   26,   55,   82,  120,  148,
         154,  173,  193,  208,  226,  232,  240,  245,
         265,  290,  305,  322,  340,  361,  378,  400,
         416,  439,  463,  468,  475,  488,  498,  514,
         529,  560,  584,  609,  626,  652,  669,  685,
         707,  734,  748,  765,  792,  807,  849,  884,
         910,  931,  959,  985, 1001, 1018, 1045, 1070,
        1110, 1135, 1157, 1174, 1192, 1203, 1221, 1229,
        1234, 1241, 1256, 1277, 1290, 1311, 1326, 1341,
        1361, 1383, 1394, 1408, 1428, 1442, 1470, 1490,
        1508, 1529, 1549, 1562, 1575, 1590, 1609, 1629,
        1656, 1674, 1694, 1707, 1715, 1723, 1732,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cmss16Data
};
