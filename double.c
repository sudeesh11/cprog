#include <stdio.h>
int main() {
    double num;
    printf("Enter a double: ");
    scanf("%lf", &num);
    printf("You entered: %.2lf", num);
    return 0;
}
