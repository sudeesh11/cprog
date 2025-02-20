/*Library function sqrt() computes the square root*/
#include <stdio.h>
#include <math.h> /*This is needed to use sqrt() function*/
int main()
{
float a,b,c,determinant,r1,r2,real,imag;
printf("Enter coefficients a,b and c: ");
scanf("%f%f%f",&a,&b,&c);
if (a==0.0)
{
printf("It is not a quadratic equation");
exit(1);
}
determinant=b*b-4*a*c;
if(determinant<0.0)
printf("\nRoots are imaginary\n");
else if(determinant>0.0)
{
printf("Roots are real and unequal");
r1=(-b+sqrt(determinant))/(2*a);
r2=(-b-sqrt(determinant))/(2*a);
printf("\nfirst root:%f",r1);
printf("\nsecond root:%f",r2);
}
else if(determinant==0)
{
r1 =r2 =-b/(2*a);
printf("Roots are real and equal\n");
printf("Roots are :%f and %f\n",r1,r2);
}
else
{
real=-b/(2*a);
imag =sqrt(-determinant)/(2*a);
printf("Roots are: %f+%fi and %f-%fi \n",real,imag,real,imag);
}
system("pause");
return (0);
}
11)/* C program to find larges