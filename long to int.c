#include <stdio.h>
int main() {
    long a = 123456789L;
    int b = (int) a;  // Explicit casting from long to int
    printf("Result: %d", b);
    return 0;
}
