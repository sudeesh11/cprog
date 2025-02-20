#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,sum=0;
printf("Enter four digit number= ");
scanf("%d",&a);
sum=sum+(a%10);
a=a/10;
sum=sum+(a%10);
a=a/10;
sum=sum+(a%10);
a=a/10;
sum=sum+(a%10);
a=a/10;
sum=sum+(a%10);
printf("sum of digits=%d \n",sum);
system("pause");
return(1);
}