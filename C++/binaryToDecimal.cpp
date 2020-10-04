#include <iostream>
using namespace std;

int convertToDecimal(int n)
{
	int num = n;
	int decimal_value = 0;

	//Base value initialised to 1
	int base = 1;

	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;
		decimal_value += last_digit * base;
		base = base * 2;
	}

	return decimal_value;
}

int main()
{
	int num = 1010;
	cout << "Decimal equivalent of " << num << " is " << convertToDecimal(num) << endl;
}

