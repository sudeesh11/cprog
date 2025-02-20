#include <stdio.h>
int main() {
    int num = 5, factorial = 1, i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }
    printf("Factorial: %d", factorial);
    return 0;
}
