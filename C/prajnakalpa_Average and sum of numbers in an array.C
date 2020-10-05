#include<stdio.h>
#include<conio.h>
int main()
{
 int AR[10],sum=0,i;
 float avg=0.0;
 clrscr();
 printf("Enter 10 numbers of the array: ");
 for(i=0;i<10;i++)
  scanf("%d",&AR[i]);
 for(i=0;i<10;i++)
  sum+=AR[i];
 avg=sum/10.0;
 printf("Sum of the numbers: %d\n",sum);
 printf("Average of the numbers: %0.1f\n",avg);
 getch();
 return 0;
}