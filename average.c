#include <stdio.h>
#include <stdlib.h>
int main()
{
long int ar[90000],n,i;
float avg,sum=0;
printf("Enter the size of the array=");
scanf("%ld",&n);
printf("\n");
printf("Enter the numbers in the array to find their
average=\n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
sum=sum+ar[i];
}
avg=sum/n;
printf("\n");
printf("Average is %f\n",avg);
printf("\n");
printf("The numbers greater than the average are: \n");for(i=1;i<n;i++)
{
if(ar[i]>avg)
{
printf("%d\n",ar[i]);
}
}
printf("\n");
printf("\n");
printf("The numbers smaller than the average are: \n");
for(i=1;i<n;i++)
{
if(ar[i]<avg)
{
printf("%d\n",ar[i]);
}
}
printf("\n");
system("pause");
return(1);
