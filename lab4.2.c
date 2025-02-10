#include <stdio.h>

char check(int number) {
    if (number % 2 == 0) {
        printf(" is even.\n");
    } else {
        printf(" is odd.\n");
    }
}

int main() {
    int x, y, z,large, small;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    large = x;
    if (y > large) {
        large = y;
    }
    if (z > large) {
        large = z;
    }

    small = x;
    if (y < small) {
        small = y;
    }
    if (z < small) {
        small = z;
    }

    printf("Largest number %d", large);
    check(large);
    printf("Smallest number %d", small);
	check(small);

    return 0;
}
