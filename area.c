#include <stdio.h>
#define pie 3.14
int main()
{
float Area,Circumference,r,diameter;
printf("Enter the value of radius of Circle in cm=",r);
scanf("%f",&r);
Circumference=2*pie*r;
Area=pie*r*r;
diameter=2*r;
printf("\n");
printf("Diameter of circle is %f \n\n",diameter);
printf("Circumference of circle is %f \n\n",Circumference);
printf("Area of circle is %f \n\n",Area);
system("pause");
return(0);
}