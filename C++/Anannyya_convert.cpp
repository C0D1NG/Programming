#include<stdio.h>
#include<conio.h>
int convert(int);
void main()
{
  int n,b;
  clrscr();
  printf("enter a decimal no=");
  scanf("%d",&n);
  b=convert(n);
  getch();
}
int convert(int n)
{
   int a[10],i;
    for(i=0;n>0;i++)
   {  a[i]=n%2;
      n=n/2;
    }
    printf("h=");
    for(i=i-1;i>=0;i--)
    {   printf("%d",a[i]);
     }
      return 0;
}
