#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(int a, int b)
{
    if (b == 0)
    return a;
    
    return gcd(b, a % b); 
     
}

int main()
{
	ll a,b;
	cout<<"Enter Two numbers to find their Least Common Multiple: ";
	cin>>a>>b;
	
	ll ans= (a*b)/gcd(a,b);
	
	cout<<"Least Common Multiple of "<< a<<" and "<< b<<" is: "<<ans<<endl;
	return 0;
}
