#include <stdio.h>
int main() {
    int i = 1;
    while (i <= 10) {
        if (i % 2 == 0) {
            i++;
            continue;
        }
        printf("%d ", i);
        i++;
    }
    return 0;
}
