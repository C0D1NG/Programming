#include<iostream>
using namespace std;

long long int Dsum(long long int n)
{
	long long int s = 0;
	while(n!=0)
	{
		s += n%10;
		n /= 10;
	}
	return s;
}
int main()
{
	long long int n;
	cout<<"Enter number = ";
	cin>>n;

	cout<<"Sum of digits of "<<n<<" = "<<Dsum(n);
}