#include<stdio.h>
#include<conio.h>
int main()
{
 int A[10],temp=0,i,j;
 clrscr();
 printf("Enter the elements of the array: ");
 for(i=0;i<10;i++)
  scanf("%d",&A[i]);
 for(i=0;i<10;i++)
  for(j=i+1;j<10;j++)
   if(A[i]<A[j])
   {
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
   }
 printf("The Array in descending order is: ");
 for(i=0;i<10;i++)
  printf("%d ",A[i]);
 getch();
 return 0;
}