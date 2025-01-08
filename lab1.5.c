#include<stdio.h>
#include<conio.h>
#define pi 3.1415
int main()
{
	float r,h,tsa;
	printf("Enter values of radius and height.");
	scanf("%f %f", &r, &h);
	tsa = 2*pi*r*(r+h);
	printf("\n The TSA of cyclinder is %f",tsa);
	return 0;
	
}
