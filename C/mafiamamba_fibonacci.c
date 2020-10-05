#include<stdio.h>
void main()
{
	int a,b,c=0,i,n;
	a=0;
	b=1;
	printf("Enter n for the number of times you want to generate the series\n");
	scanf("%d",&n);
	printf("\nFIBONACCI SERIES\n");
	printf("%d",b);
	for(i=1; i<n; i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf(" %d",c);
	}

}

