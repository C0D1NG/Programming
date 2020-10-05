#include<stdio.h>
#include<conio.h>
int GCD(int no1,int no2);
int main()
{
 int num1,num2,res=0;
 clrscr();
 printf("Enter two numbers: ");
 scanf("%d%d",&num1,&num2);
 res=GCD(num1,num2);
 printf("GCD of %d and %d is: %d",num1,num2,res);
 getch();
 return 0;
}
int GCD(int no1,int no2)
{
 if(no1%no2==0)
  return no2;
 else
  return(GCD(no2,no1%no2));
}