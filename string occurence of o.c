#include <stdio.h>

int main() {
    char str[] = "Hello World";
    char ch = 'o';
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Occurrences of '%c': %d\n", ch, count);
    return 0;
}
