#include <stdio.h>

struct person{
	char name[50];
    int age;
    float height;
};
int main() {
    int n,i;
    FILE *fptr;
    fptr=fopen("person.txt","w+");
    
    printf("Enter how many members?");
    scanf("%d",&n);
    
    struct person person[n];

    for(i=0;i<n;i++){
	
    printf("Enter name: ");
    scanf("%s", person[i].name);
    printf("Enter age: ");
    scanf("%d", &person[i].age);
    printf("Enter height: ");
    scanf("%f", &person[i].height);

    fprintf(fptr, "Name: %s\nAge: %d\nHeight: %.2f cm\n",     person[i].name, person[i].age, person[i].height);
}
    
    for(i=0;i<n;i++){
    fscanf(fptr, "Name: %s\nAge: %d\nHeight: %f cm\n", person[i].name, &person[i].age, &person[i].height);
    printf("Name: %s\nAge: %d\nHeight: %.2f cm\n", person[i].name, person[i].age, person[i].height);
}
    fclose(fptr); 

    return 0;
}
