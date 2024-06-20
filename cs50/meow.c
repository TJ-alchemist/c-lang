#include <stdio.h>

int main(void) {

  int i = 3;
  while (i > 0) {
    printf("meow\n");
    i--;
  }

  int j = 0;
  while (j < 3) {
    printf("meow\n");
    j++;
  }

  for (int k = 0; k < 3; k++) {
    printf("meow\n");
  }

  return 0;
}
