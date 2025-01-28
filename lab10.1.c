#include<stdio.h>

struct student{
	int roll;
	char name[100];
	char address[100];
	int age;
	float marks[3];
	float avg;
};

int main()
{
	int i;
	struct student st[3];
	FILE *fptr;
	fptr=fopen("d:/student.txt","w");
	
for(i=0; i<3; i++)
	{
		printf("Name: \t");
		scanf("%s", &st[i].name);
		fflush(stdin);
		printf("Roll Number: \t ");
		scanf("%d", &st[i].roll);
		fflush(stdin);
		
		printf("Address: \t ");
		scanf("%s", &st[i].address);
		fflush(stdin);
		printf("Age: \t");
		scanf("%d", &st[i].age);
		fflush(stdin);
		printf("Marks in Physics: \t ");
		scanf("%f", &st[i].marks[0]);
		fflush(stdin);
		printf("Marks in C: \t ");
		scanf("%f", &st[i].marks[1]);
		fflush(stdin);
		printf("Marks in Math: \t ");
		scanf("%f", &st[i].marks[2]);
		fflush(stdin);
		printf("\n");
	
	st[i].age= (st[i].marks[0]+st[i].marks[1]+st[i].marks[2])/3;
	
	fprintf(fptr,"\n\nName:%s\nRoll Number:%d \nAddress:%s \nAge:%d \nMarks in Physics: %.2f \nMarks in C: %.2f \nMarks in Maths: %.2f\nAverage:%.2f",st[i].name, st[i].roll, st[i].address, st[i].age, st[i].marks[0], st[i].marks[1], st[i].marks[2], st[i].avg);
	}
	fclose(fptr);

	return 0;
	};
