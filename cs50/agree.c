#include "cs50.h"
#include <stdio.h>

int main(void) {
  char c = get_char("Agree? ");

  if (c == 'y' || c == 'Y') {
    printf("Agreed\n");
  } else if (c == 'n' || c == 'N') {
    printf("Not agreed\n");
  }

  return 0;
}
