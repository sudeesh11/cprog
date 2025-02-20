

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l,n;
    for(i=0;i<5;i++)
    {
        n=1;
        for(j=0;j<i;j++)
            printf(" \t");   
         for(k=5;k>i;k--)
            {					
                printf("%d\t",n);
                n++;
            }
            for(l=4-i;l>0;l--)
            printf("%d\t",l);
        printf("\n");
    }
	return 0;
}
