#include <stdio.h>
int main()
{
float a, b, c;
printf("Enter three numbers a b c: ");
scanf("%f %f %f",&a,&b,&c);
if(a>=b && a>=c)
printf("Largest number is a =%f\n",a);
if(b>=a && b>=c)
printf("Largest number is b=%f\n",b);
if(c>=a && c>=b)
printf("Largest number is c=%f\n",c);
system("pause");
return 0;
}
