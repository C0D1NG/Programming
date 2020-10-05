#include<stdio.h>
int main()
{
	int i=1,n,fact=1;

	printf("enter a number : ");
	scanf("%d",&n);

	while(i<=n)
	{
		fact=i*fact;
		i=i+1;
	}
	printf("factorial of  %d is %d",n,fact);
	return 0;
}
