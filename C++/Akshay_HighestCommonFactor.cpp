#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	cout<<gcd(15,20)<<endl;
	return 0;
}
