#include <stdio.h>

#define END_OF_LINE 20

int main() {
  int c, count;

  count = 0;
  while ((c = getchar()) != EOF) {
    printf("%c", c);
    if (count == END_OF_LINE) {
      putchar('\n');
    }
    count++;
  }

  return 0;
}
