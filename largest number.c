#include <stdio.h>
int main()
{
int i,n;
float arr[100];
printf("Enter total number of elements(1 to 100): "); scanf("%d",&n);
printf("\n");
for(i=0;i<n;++i)/* Stores number entered by user*/
{
printf("Enter Number %d:",i+1);
scanf("%f",&arr[i]);
}
for(i=1;i<n;++i) /* Loop to store largest number to arr[0] */ {
if(arr[0]<arr[i]) /* Change < to > if you want to find smallest element*/
arr[0]=arr[i];
}
printf("Largest element = %f\n",arr[0]);
system("pause");
return 0;
}