#include<stdio.h>
#include<conio.h>
int main()
{
 int AR[3][4],large=-32768,small=32767,rowl,coll,rows,cols,i,j;
 clrscr();
 printf("Enter the matrix elements: ");
 for(i=0;i<3;i++)
  for(j=0;j<4;j++)
   scanf("%d",&AR[i][j]);
 printf("The matrix elements are: \n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<4;j++)
   printf("%d ",AR[i][j]);
  printf("\n");
 }
 for(i=0;i<3;i++)
  for(j=0;j<4;j++)
   if(AR[i][j]>large)
   {
    large=AR[i][j];
    rowl=i+1;
    coll=j+1;
   }
 for(i=0;i<3;i++)
  for(j=0;j<4;j++)
   if(AR[i][j]<small)
   {
    small=AR[i][j];
    rows=i+1;
    cols=j+1;
   }
 printf("Largest Element: %d at position %d and %d\n",large,rowl,coll);
 printf("Smallest Element: %d at position %d and %d",small,rows,cols);
 getch();
 return 0;
}