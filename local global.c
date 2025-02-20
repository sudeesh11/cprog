#include <stdio.h>

int globalVar = 10;

void showValues() {
    int localVar = 20;
    printf("Local variable: %d\n", localVar);
    printf("Global variable: %d\n", globalVar);
}

int main() {
    showValues();
    return 0;
}
