#include <stdio.h>

#define SPACES 3

int main() {
  int c, i, count;

  i = 0;
  count = 0;
  while ((c = getchar()) != EOF) {

    if (c == ' ') {
      count += 1;
      if (count == SPACES) {
        putchar('\t');
        count = 0;
      }
    } else {
      printf("%c", c);
    }
  }

  return 0;
}
