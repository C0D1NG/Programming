#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n;
	cout<<"Enter N : ";
	cin>>n;
	
	ll ans= ((n)*(n+1))/2;
	
	cout<<"Sum of first "<<n<<" natural numbers is:  "<<ans<<endl;
	return 0;
}
