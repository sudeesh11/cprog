
#include <stdio.h>
#include <stdlib.h>
int main()
{
int n;
printf("Enter year:");
scanf("%d",&n);
if((n%4==0 && n%100!=0)||n%400==0)
printf("\nThis is leap year");
else
printf("\nThis is not leap year ");
scanf("%d",&n);
return(1);
}