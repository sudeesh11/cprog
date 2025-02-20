#include <stdio.h>
#include <conio.h>
#include <string.h>
struct details
{
char name[30];
int age;
float salary;
};
int main()
{
struct details detail;
printf("\nEnter name: ");
gets(detail.name);
printf("\nEnter age:");
scanf("%d",&detail.age);
printf("\nEnter Salary:");
scanf("%f",&detail.salary);
printf("\n\n\n");
printf("Name of the Employee : %s \n",detail.name);
printf("Age of the Employee : %d \n",detail.age);
printf("Salary of the Employee : %f \n",detail.salary);
getch();
