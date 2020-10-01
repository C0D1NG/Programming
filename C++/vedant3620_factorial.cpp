#include<iostream>
using namespace std;

int fac(int n){
	if(n==0)return 1;
	return n*fac(n-1);
}
int main() 
{
	int num;
	cout << "Enter a positive number: ";
	cin >> num;
	cout<<"Factorial of "<<num<<": "<<fac(num);
	return 0;
}
