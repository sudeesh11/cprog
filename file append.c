#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }
    fprintf(file, "Appended text\n");
    fclose(file);
    return 0;
}
