#include <stdio.h>

int main() {
    int result = rename("example.txt", "new_example.txt");
    if (result == 0) {
        printf("File renamed successfully\n");
    } else {
        printf("Error renaming file\n");
    }
    return 0;
}
