#include<stdio.h>
#include<conio.h>
int main()
{
 int AR[3][3],sumr=0,sumc=0,sumlft=0,sumrgt=0,i,j;
 clrscr();
 printf("Enter the matrix elements: ");
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   scanf("%d",&AR[i][j]);
 printf("The matrix elements are: \n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   printf("%d ",AR[i][j]);
  printf("\n");
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   sumr+=AR[i][j];
  printf("Sum of row %d is: %d\n",i+1,sumr);
  sumr=0;
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   sumc+=AR[j][i];
  printf("Sum of column %d is: %d\n",i+1,sumc);
  sumc=0;
 }
 for(i=0;i<3;i++)
  sumlft+=AR[i][i];
 for(i=0;i<3;i++)
  sumrgt+=AR[i][2-i];
 printf("Sum of left diagonal: %d\n",sumlft);
 printf("Sum of right diagonal: %d\n",sumrgt);
 getch();
 return 0;
}


