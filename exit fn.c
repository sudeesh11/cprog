#include <stdio.h>
int main() {
    int x = 5;
    
    if (x == 5) {
        goto exitFunction;
    }
    
    printf("This won't print\n");
    
    exitFunction:
    printf("Exiting early\n");
    return 0;
}
