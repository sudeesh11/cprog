#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, dis, x, y;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    dis = b * b - 4 * a * c;
    
    if (dis > 0) {
        x = (-b + sqrt(dis)) / (2 * a);
        y = (-b - sqrt(dis)) / (2 * a);
        printf("Roots are %.2f and %.2f", x, y);
    } else if (dis == 0) {
        x = y = -b / (2 * a);
        printf("Roots are %.2f", x);
    } else {
        float real = -b / (2 * a);
        float imag = sqrt(-dis) / (2 * a);
        printf("Roots %.2f + %.2fi and %.2f - %.2fi", real, imag, real, imag);
    }
    
    return 0;
}
