#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }
    int count = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        count++;
    }
    printf("Total characters: %d\n", count);
    fclose(file);
    return 0;
}
