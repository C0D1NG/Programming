#include<stdio.h>
#include<conio.h>
void swap(int a,int b);
int main()
{
 int num1,num2;
 clrscr();
 printf("Enter two numbers: ");
 scanf("%d%d",&num1,&num2);
 printf("The values before swapping are: %d and %d\n",num1,num2);
 swap(num1,num2);
 getch();
 return 0;
}
void swap(int a,int b)
{
 a+=b;
 b=a-b;
 a-=b;
 printf("The values after swapping are: %d and %d",a,b);
 return;
}

