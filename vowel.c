
#include<stdio.h>
int main()
{
 char ch;
 printf("Enter a single character: ");
 scanf("%c",&ch);
if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(c
h=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
 {
  printf("The given Character '%c' is a Vowel\n\n ",ch);
} else {
  printf("The given Character '%c' is a Consonant\n\n ",ch);
 }
 system("pause");
return 0;
}