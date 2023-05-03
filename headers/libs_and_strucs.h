//#ifndef TEST_LIBS_AND_STRUCS_H
//#define TEST_LIBS_AND_STRUCS_H
//
//#endif //TEST_LIBS_AND_STRUCS_H
#pragma once

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <stdarg.h>
#include <png.h>
#include <string.h>


struct Png {
    int width, height;
    png_byte color_type;
    png_byte bit_depth;

    png_structp png_ptr;
    png_infop info_ptr;
//    int number_of_passes;
    png_bytep *row_pointers;
};

typedef struct png_color_struct_count {
    png_byte red;
    png_byte green;
    png_byte blue;
    int amount;
} png_colorc;