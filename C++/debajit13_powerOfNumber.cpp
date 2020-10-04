//program to find the power a number
#include<iostream>
using namespace std;

int main()
{
	int exponent;
	float base, result = 1;

	cout << "Enter base and exponent respectively:  ";
    	cin >> base >> exponent;

    	cout << base << "^" << exponent << " = ";

    	while (exponent != 0) {
        	result *= base;
        	--exponent;
    	}

   	cout << result << endl;

	return 0;
}
