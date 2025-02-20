#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }
    fprintf(file, "Hello, World!\n");
    fclose(file);
    return 0;
}
