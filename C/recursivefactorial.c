#include<stdio.h>
#include<conio.h>
int factorial(int x);
void main()
{
int a,b;
printf("Enter a number:");
ScanF("%d",&a);
b=factorial(a);
printf("%d",b);
}
int factorial(int x)
{

if(x==1)
return 1;
else
return (x*factorial(x-1));
