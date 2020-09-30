
#include<iostream>
using namespace std;

int main()
{
	int num,pow;
	cin>>num>>pow;

	int ans=1;
	for(int i=1;i<=pow;i++)
	{
		ans*=num;
	}
    
    cout<<num<<" raised to the power "<<pow<<" is "<<ans<<"\n";
	return 0;
}_