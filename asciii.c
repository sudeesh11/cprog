
#include<stdio.h>
int main(){
   char str[100];
   int i=0;
   printf("Enter any string: ");
   scanf("%s",str);
   printf("ASCII values of each characters of given string:
\n");
    while(str[i])
    printf("%d ",str[i++]);
   system("pause");
return 0;
}
