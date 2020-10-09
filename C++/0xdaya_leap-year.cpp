#include <iostream>
#define ll long long 
using namespace std;
bool isLeap(ll y) {
	return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int main(int argc, char const *argv[])
{   ll n;
	cout << "Enter a number: ";
	cin >> n;
	if (isLeap(n))
		cout << "true";
	else 
		cout << "false";
	return 0;
}