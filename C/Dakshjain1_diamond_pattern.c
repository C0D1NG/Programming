#include <stdio.h>

void main()
{
   int i,j,k=3;
   for(i=1;i<=4;i++)
   {
       for(j=0;j<k;j++)
       {
           printf(" ");
       }
       k--;
       for(j=1;j<=2*i-1;j++)
       {
           printf("*");
       }
       printf("\n");
   }
   int s=1;
   for(i=3;i>0;i--)
   {
       for(j=0;j<s;j++)
        {
           printf(" ");
        }
        s++;
        for(j=0;j<2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
   }
}