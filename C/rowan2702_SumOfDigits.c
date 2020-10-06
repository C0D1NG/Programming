#include<stdio.h>
#include<stdlib.h>

void main(){

	int n,p,sum=0,digit;

	printf("Enter the number \t: ");
		scanf("%d",&n);

	p=n;

	while(p){
		digit = p % 10;
		sum += digit;
		p /= 10;
	}

	printf("Sum \t : %d \n",sum);
}