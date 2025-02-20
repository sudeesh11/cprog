#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    fclose(file);
    return 0;
}
