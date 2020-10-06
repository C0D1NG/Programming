#include<stdio.h>
#include<conio.h>
int main()
{
 int AR[2][4],sum=0,i,j;
 clrscr();
 printf("Enter the matrix elements: ");
 for(i=0;i<2;i++)
  for(j=0;j<4;j++)
   scanf("%d",&AR[i][j]);
 printf("The matrix elements are: \n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<4;j++)
   printf("%d ",AR[i][j]);
  printf("\n");
 }
 for(i=0;i<2;i++)
  for(j=0;j<4;j++)
   sum+=AR[i][j]*AR[i][j];
 printf("Sum=%d",sum);
 getch();
 return 0 ;
}