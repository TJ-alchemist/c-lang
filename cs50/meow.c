#include <stdio.h>

void meow(int n);

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

  meow(5);

  return 0;
}

void meow(int n) {
  for (int i = 0; i < n; i++) {
    printf("meow\n");
  }
}
