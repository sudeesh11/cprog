#include <stdio.h>
int main()
{
float a,b,temp;
printf("Enter value of a: ");
scanf("%f",&a);
printf("Enter value of b: ");
scanf("%f",&b);
temp=a; /*Value of a is stored in variable temp */
a=b; /*Value of b is stored in variable a*/
b=temp;/*Value of temp(which contains initial value of a) is
stored in variable b*/
printf("After swapping,value of a = %f\n",a);
printf("After swapping,value of b = %f\n",b);
system("pause");
return (0);
}