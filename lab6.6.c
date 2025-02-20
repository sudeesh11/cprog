#include <stdio.h>
int c = 5;
void function() {
  int a = 10;
  a++;
  printf("Local: %d\n", a);
  a++;

  static int b = 0;

  b++;
  printf("Static: %d\n", b);
  b++;
  
  c++;
  printf("Global: %d\n", c);
  c++;
}


int main() {

  function();
  function();

  return 0;
}