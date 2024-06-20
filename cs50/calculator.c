#include "cs50.h"
#include <stdio.h>

int add(int x, int y);

int main(void) {

  int x = get_int("x? ");
  int y = get_int("y? ");

  printf("x + y = %i", add(2, 5));
}

int add(int x, int y) { return x + y; }
