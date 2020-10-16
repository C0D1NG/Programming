#include<stdio.h>
int main()
{
int x,y,num,n,revnum;
printf("Enter a number:");
scanf("%d",&x);
num=x;
revnum=0;
while(num>0)
{
n=num%10;
revnum=(revnum*10)+n;
num=num/10;
}
printf(" Reverse of %d is %d",x,revnum);
return 0;
}