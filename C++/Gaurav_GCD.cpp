#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if(a == 0)
		return b;
	return gcd(b % a, a);
}
int main()
{
	int a = 4, b = 6;
	cout << "GCD of " << a << " and " << b
		 << " is " << gcd(a, b) << endl;
}
