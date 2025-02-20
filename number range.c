#include <stdio.h>
int main() {
    int num = 50;
    if (num < 20) {
        printf("Number is less than 20");
    } else if (num >= 20 && num <= 50) {
        printf("Number is between 20 and 50");
    } else {
        printf("Number is greater than 50");
    }
    return 0;
}
