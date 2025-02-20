#include <stdio.h>
int main() {
    int num = 7;
    
    if (num > 0) {
        if (num < 10) {
            goto smallNumber;
        }
    }
    
    printf("Large number\n");
    goto end;
    
    smallNumber:
    printf("Small number\n");
    
    end:
    return 0;
}
