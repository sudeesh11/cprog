#include <stdio.h>
int main()
{
double R1,R2,R3,R12,R23,R13;
printf(" R12\n");
printf(" *\n");
printf(" * | *\n");
printf(" * |R1*\n");
printf(" * | *\n");
printf(" *R2/ \\R3*\n");
printf(" * / \\ *\n");
printf("R23****************R13\n\n");
printf("Enter the value of R12(in ohm)=");
scanf("%Lf",&R12);
printf("Enter the value of R23(in ohm)=");
scanf("%Lf",&R23);
printf("Enter the value of R13(in ohm)=");
scanf("%Lf",&R13);
R1=(R12*R13)/(R12+R23+R13);
printf("Resistance in R1(in ohm) is %Lf\n",R1);
R2=(R12*R23)/(R12+R23+R13);
printf("Resistance in R2(in ohm) is %Lf\n",R2);
R3=(R13*R23)/(R12+R23+R13);
printf("Resistance in R3(in ohm) is %Lf\n",R3);
scanf("%lf",&R3);
return(1);
}