#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }
    for (int i = 1; i <= 5; i++) {
        fprintf(file, "Line %d\n", i);
    }
    fclose(file);
    return 0;
}
