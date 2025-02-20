#include <stdio.h>
int main()
{
int array[100], maximum, size, c, location1 =
1,minimum,location2=1;
printf("Enter the number of elements in array=");
scanf("%d", &size);
printf("\n");
printf("Enter %d integers=\n", size);
for (c = 0; c< size; c++)
scanf("%d", &array[c]);
maximum = array[0];
for (c=1;c<size;c++)
{
if (array[c] >maximum)
{
maximum = array[c];
location1 = c+1;
}
}
printf("\n");
printf("Maximum element is present at location %d andit'svalue is %d.\n", location1,maximum);
minimum=array[-0];
for (c=1;c<size;c++)
{
if (array[c]<minimum)
{
minimum =array[c];
location2 = c+1;
}
}
printf("Minimum element is present at location %d and it'svalueis %d.\n", location2,minimum);
system("pause");
return 0;
}
