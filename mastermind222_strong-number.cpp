
#include<iostream>
using namespace std;

int main()
{
	int n,sum=0;
	cout<<"Enter number to check: ";
	cin>>n;
	int dn=n;
	while(dn)
	{
		int num=dn%10;
		int fact = 1;
		for(int i=num;i>0;i--)
		{
			fact=fact*i;
		}
		sum+=fact;
		dn/=10;
	}
 	if(sum==n )
	{
		cout<<n<<" is a Strong Number";
	}
	else
	{
		cout<<n<<" is not a Strong Number";
	}
 
	return 0;
}