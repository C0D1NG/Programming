#include<stdio.h>
#include<conio.h>
int main()
{
 int A[3][4],B[4][3],i,j;
 clrscr();
 printf("Enter the matrix elements: ");
 for(i=0;i<3;i++)
  for(j=0;j<4;j++)
   scanf("%d",&A[i][j]);
 printf("The matrix elements are: \n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<4;j++)
   printf("%d ",A[i][j]);
  printf("\n");
 }
 for(i=0;i<4;i++)
  for(j=0;j<3;j++)
   B[i][j]=A[j][i];
 printf("The transposed matrix elements are: \n");
 for(i=0;i<4;i++)
 {
  for(j=0;j<3;j++)
   printf("%d ",B[i][j]);
  printf("\n");
 }
 getch();
 return 0;
}