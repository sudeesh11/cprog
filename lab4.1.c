#include <stdio.h>

char rank(float value) {
    if (value < 40)
        printf("Fail");
    else if (value < 55)
        printf("Third Division");
    else if (value < 65)
        printf("Second Division");
    else if (value < 80)
        printf("First Division");
    else if (value < 95)
        printf("Distinction");
    else
        printf("Extra Ordinary");
}

int main() {
    int phy, chem, math, eng, bio, total;
    float percentage;
    
    printf("Enter marks for Physics: ");
    scanf("%d", &phy);
    printf("Enter marks for Chemistry: ");
    scanf("%d", &chem);
    printf("Enter marks for Math: ");
    scanf("%d", &math);
    printf("Enter marks for English: ");
    scanf("%d", &eng);
    printf("Enter marks for Biology: ");
    scanf("%d", &bio);
    
    printf("Physics: ");
	rank(phy);
	printf("\n");
    printf("Chemistry: ");
	rank(chem);
	printf("\n");
    printf("Math: ");
	rank(math);
	printf("\n");
    printf("English: ");
	rank(eng);
	printf("\n");
    printf("Biology: ");
	rank(bio);
	printf("\n");
    
    total = phy + chem + math + eng + bio;
    percentage = (total / 500.0) * 100;
    
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Rank: ");
	rank(percentage);
	printf("\n");
    
    return 0;
}
