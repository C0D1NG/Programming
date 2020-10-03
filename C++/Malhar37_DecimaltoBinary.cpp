#include <bits/stdc++.h>
using namespace std;
#define max 100

void convertDtoB(int n);

int main()
{
	int n;
	cout<<"ENTER NUMBER :- ";
	cin>>n;
	convertDtoB(n);
}
void convertDtoB(int n)
{
	int a[max];
	
	int i=0;
	
	if(n==0)
	{
		a[0]=0;
		i++;	
	}
	
	
	while(n>0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
	}
	
	reverse(a, a+i);
	
	for(int j=0;j<i;j++)
	cout<<a[j];	
}
