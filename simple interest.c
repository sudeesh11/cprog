
#include<stdio.h>
int main() {
   int amount, rate, time, si;
   printf("\nEnter Principal Amount(Rs): ");
   scanf("%d",&amount);
   printf("\nEnter Rate of Interest : ");
   scanf("%d",&rate);
   printf("\nEnter Period of Time(Years): ");
   scanf("%d", &time);
   si =((amount * rate * time) / 100);
   printf("\nSimple Interest :%d\n",si);
   
  system("pause");
return(0);
}