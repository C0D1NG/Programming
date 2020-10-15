#include<stdio.h>
int main()
{
int x,y,num,result,ast,dc,n;
printf("Enter a number:");
scanf("%d",&x);
num=x;
dc=1;
while(num>9)
{
dc++;
num=num/10;
}
num=x;
ast=0;
while(num>0)
{
n=num%10;
result=1;
y=1;
while(y<=dc)
{
result=result*n;
y++;
}
ast=ast+result;
num=num/10;
}
if(ast==x)
{
printf("%d is an armstrong number",x);
}
else
{
printf("%d is not an armstrong number",x);
}
return 0;
}