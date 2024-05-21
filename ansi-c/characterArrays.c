#include <stdio.h>
#define MAXLINE 1000 /* Maximum input line length*/

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);

int main() {
  // printf("%d\n", getline("abc", 10));
  int len;
  extern int max;
  extern char longest[MAXLINE];

  max = 0;

  while ((len = getline()) > 0) {
    if (len > max) {
      max = len;
      copy();
    }
  }

  if (max > 0) {
    printf("%s", longest);
  }

  return 0;
}

/* Read a line s and return length*/
int getline(void) {
  int c, i;
  extern char line[];

  printf("%c", i);
  for (i = 0; i < MAXLINE - 1 & (c = getchar()) != EOF & c != '\n'; ++i) {
    line[i] = c;
  }

  printf("%s", line);
  printf("\n");

  if (c == '\n') {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';

  return i;
}

void copy(void) {
  int i;
  extern char line[], longest[];

  i = 0;
  while ((longest[i] = line[i]) != '\0') {
    ++i;
  }
}
