/*C program to display factorial of an integer if user enters
non-negative integer*/
#include <stdio.h>
int main()
{
int n,count;
unsigned long long int factorial=1;
printf("Enter an integer: ");
scanf("%d",&n);
if (n<0)
printf("Error!!! Factorial of negative number doesn't
exist\n");
else
{
for(count=1;count<=n;++count) /*for loop terminates if
count>n*/
{
factorial*=count; /*factorial=factorial*count*/
}
printf("Factorial = %lu",factorial);
}
system("pause");
return 0;
}
