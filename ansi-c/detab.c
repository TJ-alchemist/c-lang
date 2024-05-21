#include <stdio.h>

#define TABS 3

int main() {
  int c, i;
  i = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      while (i < TABS) {
        putchar(' ');
        i++;
      }
    } else {
      printf("%c", c);
    }
    i = 0;
  }
  return 0;
}
