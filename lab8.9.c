// Compare strings

#include<stdio.h>
#include<string.h>

int main(){
	char str1[10], str2[10];
	int len1, len2, i;
	bool a = false;
	
	printf("Enter two strings: ");
	scanf("%s %s", str1, str2 ); 

	
	len1 = strlen(str1);
	len2 = strlen(str2);
	
	if(len1 != len2)
		printf("\nDifferent strings.");
	else{
		for(i=0; i<len1; i++){
			if ( str1[i] != str2[i]){
				printf("\nDifferent strings.");
				a = false;
				break;
			}
			else
				a = true;
		}
	}
	
	if(a ==a true)
		printf("\nSame strings.");
}
