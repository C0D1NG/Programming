#include<stdio.h>
void main()
{
	int x,s=0,d;
	printf("Enter a number");
	scanf("%d",&x);
	while(x>0)
	{
		d=x%10;
		s=s+d;
		x=x/10;
	}
	printf("Sum of digits is %d",s);
}

