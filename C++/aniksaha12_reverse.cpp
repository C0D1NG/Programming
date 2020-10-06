#include<iostream>
using namespace std;

int main()
{
	int num,reverse=0,remainder;

	cout << "Enter a number: ";
	cin >> num;

	while(num != 0) {
		remainder = num % 10;
		reverse = reverse + remainer * 10;
		num = num / 10;
	}

	cout << "Reverse is :" << reverse << endl;

	return 0;
}
