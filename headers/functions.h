#pragma once

#include "libs_and_strucs.h"

void printHelp();

void draw_square(struct Png *image, int x0, int y0, int size, int line_width, png_color line_color, int is_fill,
                 png_color fill_color);

void swapArrays(png_byte *arr1, png_byte *arr2);

void swap_pix(struct Png *image, int mode, int x0, int y0, int x1, int y1);

void inversion(struct Png *image, int x0, int y0, int x1, int y1);

void change_color(struct Png *image, png_color color);

void black_white(struct Png *image, int x0, int y0, int x1, int y1);

void vert_concat(struct Png *png1, struct Png *png2, struct Png *result);

void add_borders(struct Png *image, int border_size, png_color color);

void del_borders(struct Png *image, int border_size);

void square_with_point(struct Png *image, png_color color);

void merge(struct Png* png1,struct Png* png2, struct Png* result);