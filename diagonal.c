
#include<stdio.h>
int main() {
   int i, j, mat[10][10], row, col;
   int sum = 0;
   printf("\nEnter the number of Rows : ");
   scanf("%d", &row);
   printf("\nEnter the number of Columns : ");
   scanf("%d", &col);
   //Accept the Elements in m x n Matrix
   for (i = 0; i < row; i++)
{
{
 for (j = 0; j < col; j++)
printf("\nEnter the Element a[%d][%d] : ", i, j);
     scanf("%d", &mat[i][j]);
   }
}
//Addition of all Diagonal Elements
for (i = 0; i < row; i++) {
   for (j = 0; j < col; j++) {
     if (i == j)
     sum = sum + mat[i][j];
} }
printf("\nSum of Diagonal Elements in Matrix : %d\n", sum); system("pause");
return (0);
}