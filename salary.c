#include <stdio.h>
#include <stdlib.h>
int main()
{
int sal,tax;/*sal=salary*/
float total;
printf("Enter salary per year Rs:",sal);
scanf("%d",&sal);
if (sal<=100000)
printf("Tax is 0 percent,so your Salary after paying tax is Rs
%d \n\n ",sal);
else if (sal>100000 && sal<=150000)
{
total=sal-(0.15*sal);
printf("Tax is 15 percent,so your Salary after paying tax is
Rs %f \n",total);
tax=sal-total;
printf("Tax amount is Rs %d\n",tax);
}
else if(sal>150000)
{
total=sal-(0.25*sal);
printf("Tax is 25 percent,so your Salary after paying tax is Rs
%f \n ",total);
tax=sal-total;
printf("Tax amount is Rs %d\n",tax);
}
system("pause");
return(0);
}