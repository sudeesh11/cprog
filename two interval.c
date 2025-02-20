include <stdio.h>
int main()
{
int i,j,n,m,c=0;
printf("Enter the value from which prime number to be start,M: ");
scanf("%d",&m);
printf("Enter the value upto which prime number to be start,N: ");
scanf("%d",&n);
if (m>n)
printf("M must be smaller than N");
for(i=m;i<=n;i++)
{
for(j=1;j<=i;j++)
{
   
 if(i%j==0)
{
c++;
}
}
if (c==2)
{
printf("\n %d \n",i);
}
c=0;
}
system("pause");
return 0;
}