
#include<stdio.h> 

int factorial(int n) 
{ 
	int f = 1; 
	if (n==0||n==1) 
		return 1; 
	for (int i=2; i<=n; i++) 
		f = f*i; 
	return f; 
} 

int getSum(int arr[],int n) 
{ 
	int fact = factorial(n); 

	int digitsum = 0; 
	for (int i=0; i<n; i++) 
		digitsum += arr[i]; 
	digitsum *= (fact/n); 

	int res = 0; 
	for (int i=1, k=1; i<=n; i++) 
	{ 
		res += (k*digitsum); 
		k = k*10; 
	} 

	return res; 
} 

int main() 
{ 
	int arr[] = {1, 2, 3}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	printf("%d", getSum(arr, n)); 

	return 0; 
} 

