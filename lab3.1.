#include <stdio.h>

int main() {
    float x, y, result;
    char ch;

    printf("Enter the first number ");
    scanf("%f", &x);
    printf("Enter the second number ");
    scanf("%f", &y);
	
	while (getchar() != '\n'); 
	
    printf(" Enter the operator (+, -, *, /): ");
    ch = getchar();

    switch (ch) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':

                result = x / y;
            break;
        default:
            printf("Invalid operator!\n");
            return 1; 
    }
    printf("%.2f %c %.2f = %.2f\n", x, ch, y, result);

    return 0;
}
