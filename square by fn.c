#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int num = 4;
    int result = square(num);
    printf("Square of %d: %d\n", num, result);
    return 0;
}
