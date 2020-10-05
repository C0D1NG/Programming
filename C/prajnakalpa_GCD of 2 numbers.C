#include<stdio.h>
#include<conio.h>
int main()
{
 int AR[10],i;
 clrscr();
 printf("Enter 10 numbers of the array: ");
 for(i=0;i<10;i++)
  scanf("%d",&AR[i]);
 printf("The 10 numbers of the array are: ");
 for(i=0;i<10;i++)
  printf("%d ",AR[i]);
 printf("\nThe 10 numbers of the array in reverse order are: ");
 for(i=9;i>=0;i--)
  printf("%d ",AR[i]);
 getch();
 return 0;
}