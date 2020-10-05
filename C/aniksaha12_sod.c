#include<stdio.h>
int main()
{
	int n,sod=0,r;
	printf("Enter a number");
	scanf("%d", &n);
	while(n!=0){
		r=n%10;
		sod=sod+r;
		n=n/10;
	}
	printf("sum is %d\n",sod);
	return 0;
}
