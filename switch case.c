#include <stdio.h>
int main() {
    int num = 2;
    switch (num) {
        case 1:
        case 2:
        case 3:
            printf("Number is between 1 and 3");
            break;
        default:
            printf("Number is out of range");
    }
    return 0;
}
