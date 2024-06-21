#include "pyramid.h"
#include "cs50.h"
#include <stdio.h>

int main(void) {
  int size = get_int("Size of the pyramids: ");

  printf("Left aligned pyramid:\n");
  make_left_aligned_pyramid(size);
  printf("\n");
  printf("Right aligned pyramid:\n");
  make_right_aligned_pyramid(size);
}

void make_left_aligned_pyramid(int size) {
  int i, j;

  for (i = 0; i < size; i++) {
    for (j = 0; j < i + 1; j++) {
      printf("#");
    }
    printf("\n");
  }
}

void make_right_aligned_pyramid(int size) {
  int i, j;
  int temp_size = size;

  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      if (j >= size - i - 1) {
        printf("#");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}
