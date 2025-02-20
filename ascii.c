#include <stdio.h>
int main()
{
int i;
printf("The all ASCII values are : ");
for(i=0;i<=256;i++)
{
printf("\n%d \t%c",i,i);
}
system("pause");
return(0);