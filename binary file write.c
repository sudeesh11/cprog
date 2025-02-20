#include <stdio.h>

int main() {
    int x = 10;
    FILE *file = fopen("example.bin", "wb");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }
    fwrite(&x, sizeof(x), 1, file);
    fclose(file);

    FILE *file_read = fopen("example.bin", "rb");
    fread(&x, sizeof(x), 1, file_read);
    printf("%d\n", x);
    fclose(file_read);

    return 0;
}
