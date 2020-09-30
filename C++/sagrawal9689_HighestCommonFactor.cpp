#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll hcf(int a, int b)
{
    if (b == 0)
    return a;
    
    return hcf(b, a % b); 
     
}

int main()
{
	ll a,b;
	cout<<"Enter Two numbers to find their Highest Common Factor: ";
	cin>>a>>b;
	
	cout<<"Highest Common Factor of "<< a<<" and "<< b<<" is: "<<hcf(a,b)<<endl;
	return 0;
}

