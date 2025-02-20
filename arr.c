#include <stdio.h>

int main() {
    char arr[3][10] = {"Hello", "World", "C"};
    for (int i = 0; i < 3; i++) {
        printf("%s\n", arr[i]);
    }
    return 0;
}
