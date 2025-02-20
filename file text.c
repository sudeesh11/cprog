#include <stdio.h>

int main() {
    char buffer[255];
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }
    fgets(buffer, 255, file);
    printf("%s\n", buffer);
    fclose(file);
    return 0;
}
