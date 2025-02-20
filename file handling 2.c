#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }
    fseek(file, 5, SEEK_SET);
    char ch = fgetc(file);
    printf("%c\n", ch);
    fclose(file);
    return 0;
}
