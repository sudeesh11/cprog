#include <stdio.h>

int main() {
    float x=3.0, y=12.5, z= 523.3, A=300.0, B=1200.5, C=5300.3;

    printf("x\ty\tz=\t%.1f%c\t\t%.1f%c\t\t%.1f%c\n",x,'|',y,'|',z,'|');
    printf("A\tB\tC=\t%4.1f%c\t\t%-.1f%c\t\t%.1f%c\n",A,'|',B,'|',C,'|');
    printf("-----------------------------------------------------------------\n");
    printf("x\ty\tz=\t%c%.2f\t\t%c%.2f\t\t%c%.2f\n",'|',x,'|',y,'|',z);
    printf("A\tB\tC=\t%c%.2f\t\t%c%.2f\t%c%.2f\n",'|',A,'|',B,'|',C);

    return 0;
}
