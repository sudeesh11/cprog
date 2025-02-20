#include <stdio.h>

int addnum(int n);

int main() {

  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  printf("Sum = %d", addnum(n));
  return 0;
}

int addnum(int n) {
  if (n != 0)
    return n + addnum(n - 1);
  else
    return n;
}
