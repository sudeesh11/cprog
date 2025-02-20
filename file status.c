#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (file) {
        printf("File exists\n");
        fclose(file);
    } else {
        printf("File does not exist\n");
    }
    return 0;
}
