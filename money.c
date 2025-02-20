#include <stdio.h>
int main()
{
double X1,X2,X3,X4,X5,X6,X7,X8,X9,sum;
printf("This calculates total amount you entered accordingtonumber and value of notes");
printf("\n");
printf("Enter number of Rs 1000,X1= ");
scanf("%Lf",&X1);
X1=X1*1000;
printf("\nEnter number of Rs 500,X2= ");
scanf("%Lf",&X2);
X2=X2*500;
printf("\nEnter number of Rs 100,X3= ");
scanf("%Lf",&X3);
X3=X3*100;
printf("\nEnter number of Rs 50,X4= ");
scanf("%Lf",&X4);
X4=X4*50;
printf("\nEnter number of Rs 25,X5= ");
scanf("%Lf",&X5);
X5=X5*25;
printf("\nEnter number of Rs 10,X6= ");
scanf("%Lf",&X6);
X6=X6*10;
printf("\nEnter number of Rs 5,X7= ");
scanf("%Lf",&X7);
X7=X7*5;
printf("\nEnter number of Rs 2,X8= ");
scanf("%Lf",&X8);
X7=X7*2;
printf("\nEnter number of Rs 1,X9= ");
scanf("%Lf",&X9);
X7=X7*9;
sum=X1+X2+X3+X4+X5+X6+X7,X8,X9;
printf("\nTotal amount in rupees that Jaikishan owns isRs%Lf\n",sum);
scanf("%Lf",&sum);
return(1);
}
