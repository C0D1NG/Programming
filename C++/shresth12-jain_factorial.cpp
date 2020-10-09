#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
	cin >> t;
	while (t--)
	{
		long long i,n;
      	cin>>n;
      	long long x[n+2];
      	x[1]=1;
      	for(i=2;i<=n;i++)
      	{
      		x[i]=x[i-1]*i;
      	}
      	cout<<x[n]<<"\n";
	}
}
