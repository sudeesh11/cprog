
#include<stdio.h>
int main(){
   int n,i;
   int sum=0;
   printf("Enter the n i.e. max values of series: ");
   scanf("%d",&n);
   sum = (n * (n + 1)) / 2;
   printf("Sum of the series: \n");
   for(i =1;i <= n;i++)
   {
   if (i!=n)
    printf("%d + ",i);
else
     printf("%d = %d \n",i,sum);
   }
   system("pause");
   return 0;
}
