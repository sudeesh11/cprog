#include<stdio.h>
#include <stdlib.h>
int main(){
char str[20];
int i;
printf("Enter any string=");
scanf("%s",str);
printf("\n");
printf("The string is=%s",str);
for(i=0;i<=strlen(str);i++){
if(str[i]>=97&&str[i]<=122)
str[i]=str[i]-32;
}
printf("\n");
printf("\nThe string in uppercase is=%s",str);
printf("\n");
system("pause");
return 0;
}
