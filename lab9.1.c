#include<stdio.h>
struct std{
int rollno;
char name[50];
char add[100];
int age;
float phy;
float c;
float math;
 };
 int main() {
struct std std[3];
float avg[3];
int i;

for (i=0; i<3; i++)
  {
printf("Enter the roll number: ");
scanf("%d", &std[i].rollno);
printf("Enter name: ");
scanf("%s", std[i].name);
printf("Enter address: ");
scanf("%s", std[i].add);
printf("Enter age: ");
scanf("%d", &std[i].age);
printf("Enter marks in Physics: ");
scanf("%f", &std[i].phy);
printf("Enter marks in C Programming: ");
scanf("%f", &std[i].c);
printf("Enter marks in Math: ");
scanf("%f", &std[i].math);

avg[i] = (std[i].phy + std[i].c + std[i].math) / 3;
}
for (i=1; i<3; i++)
{
printf("\nStudent Details:\n");
printf("Roll Number: %d\n", std[i].rollno);
printf("Name: %s\n", std[i].name);
printf("Address: %s\n", std[i].add);
printf("Age: %d\n", std[i].age);
printf("Marks in Physics: %.2f\n", std[i].phy);
printf("Marks in C Programming: %.2f\n", std[i].c);
printf("Marks in Math: %.2f\n", std[i].math);
printf("Average Marks: %.2f\n", avg[i]);
}
return 0;

 }
