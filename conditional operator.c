
#include <stdio.h>
int main()
{
   int A,B,ADD,SUB;
   printf("Enter the first operand:");
   scanf("%d",&A);
    printf("Enter the Second operand:");
   scanf("%d",&B);
   if(A>B)
   {
ADD=A+B;
   printf("Since A is greater than B,so on addition A+B
=%d\n",ADD);
   }
   else
   {
   SUB=A-B;
   printf("Since B is greater than A,so on Subtraction A-B
 =%d\n",SUB);
  
    }
   system("pause");
   return 0;
}