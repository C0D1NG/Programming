// program to find a number is a strong number or not

#include<stdio.h>
#include<conio.h>
int main()
{
	int n, q, rem, fact = 1, i, result = 0;
	printf("please enter a number:");
	scanf("%d",&n);
	 
	q = n;
	
	while(q != 0)
	{
		rem = q%10;
		for(i=1; i<=rem; i++)
		{
			fact = fact*i;
		}
		result =result + fact;
		fact = 1;
		q = q/10;
	}
	if(result == n)
	{
		printf("%d is a strong number",n);
	}
	else
	{
		printf("%d is NOT a strong number",n);
	}
	printf("\n\n");
	
	
	
	return 0;
}
