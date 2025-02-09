#include <stdio.h>

#define PI 3.1415
#define mult(a, b) ((a) * (b))
#define sum(a, b) ((a) + (b))
#define sub(a, b) ((a) - (b))
#define div(a, b) ((a) / (b))

int main() {
    int a = 8, b = 4, c;

    c = PI * mult(a, b);
    printf("c = PI * mult(a, b) = %d\n", c);

    c = PI * sum(a, b);
    printf("c = PI * sum(a, b) = %d\n", c);

    c = PI * sub(a, b);
    printf("c = PI * sub(a, b) = %d\n", c);

    c = PI * div(a, b);
    printf("c = PI * div(a, b) = %d\n", c);

    return 0;
}
