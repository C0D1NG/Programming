#include<stdio.h>
#include<conio.h>
int main()
{
 int A[10],B[10],C[10],i;
 clrscr();
 printf("Enter 10 numbers of the array A: ");
 for(i=0;i<10;i++)
  scanf("%d",&A[i]);
 printf("Enter 10 numbers of the array B: ");
 for(i=0;i<10;i++)
  scanf("%d",&B[i]);
 for(i=0;i<10;i++)
  C[i]=A[i]+B[i];
 printf("Sum of two arrays A and B is: ");
 for(i=0;i<10;i++)
  printf("%d ",C[i]);
 getch();
 return 0;
}



