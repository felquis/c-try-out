#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, *ptr;

  a = 10;
  b = 20;

  ptr = &a;

  printf("%d\n", *ptr);

  ptr = &b;

  printf("%d\n", *ptr);

  return 0;
}

