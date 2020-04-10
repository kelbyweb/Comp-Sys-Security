#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void foo(char* in) {
  char buf[8];
  strcpy(buf, in);
  printf("\n");
  printf("The secret will not appear with %s\n", buf);
  printf("\n");
}

int main() {
  char buf[512];
  printf("What are you trying to do?\n");
  scanf("%s", buf);
  foo(buf);
  return 0;
}

