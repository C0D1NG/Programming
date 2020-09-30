#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

int main()
{
	cout<<lcm(15,20)<<endl;
	return 0;
}