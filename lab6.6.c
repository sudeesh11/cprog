#include <stdio.h>

void function() {
  int a = 10;
  printf("Local: %d\n", a);

  static int b = 0;
  b++;
  printf("Static: %d\n", b);
}

int c = 5;

int main() {
  printf("Global: %d\n", c);

  function();
  function();

  return 0;
}