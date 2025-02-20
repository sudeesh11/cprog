#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i=2;
printf("Enter number you want to check: ");
scanf("%d",&n);
for (i=2;i<=n-1;i++)
{
if (n%i==0)
{
printf("%d is not a prime number\n",n);
break;
}
}
{
if (i==n)
printf("%d is prime number \n",n);
}
system("pause");
return(0);
}