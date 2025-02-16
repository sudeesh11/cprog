#include <stdio.h>

int main() {
    int x = 6, y = 3;

    printf("x\ty\texpressions\tresults\n"); 
    printf("%d%4c\%4d%6c%8s%6c\tx=%d\n", x,'|', y,'|',"x=y+3",'|', y + 3);
    printf("%d%4c\%4d%6c%8s%6c\tx=%d\n", x,'|', y,'|',"x=y-2",'|', y - 2);
    printf("%d%4c\%4d%6c%8s%6c\tx=%d\n", x,'|', y,'|',"x=y*5",'|', y * 5);
    printf("%d%4c\%4d%6c%8s%6c\tx=%d\n", x,'|', y,'|',"x=x/y",'|', x / y);
    printf("%d%4c\%4d%6c%8s%6c\tx=%d\n", x,'|', y,'|',"x=x%y",'|', x % y);

    return 0;
}
