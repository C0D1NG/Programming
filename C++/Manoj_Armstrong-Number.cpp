#include<stdio.h>
#include<conio.h>
int main()
{
   int i;
   scanf("%d",&i);
   int count=0;
   int k=0;
   int arr[15];
   int sum=0;
   int q=i;
	while(q!=0)
	{
		arr[k]=q%10;
		q=q/10;
		k++;
		count++;
	}
	for(int j=0;j<count;j++)
	{
		sum=sum+(arr[j]*arr[j]*arr[j]);
		
	}
	if(sum==i)
		printf("\n %d is armstrong no.",i);
		else 
		printf("\n %d is not armstrong no.",i);
	getch();
	return 0;
}
