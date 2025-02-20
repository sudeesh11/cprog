#include <stdio.h>

void multiplyAndPrint(int a, int b) {
    int result = a * b;
    printf("Multiplication Result: %d\n", result);
}

int main() {
    multiplyAndPrint(5, 6);
    return 0;
}
