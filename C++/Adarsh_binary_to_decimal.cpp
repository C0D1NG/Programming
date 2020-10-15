#include <iostream>
#include <math.h>
using namespace std;

int main()

{

	long int i, no;

	int x, y = 0;

	cout << "Enter any binary number: ";

	cin >> no;

	cout << "\nThe decimal conversion of " << no << " is ";

	for (i = 0; no != 0; i++)

	{

		x = no % 10;

		y = (x) *(pow(2, i)) + y;

		no = no / 10;
	}

	cout << y;

	return 0;

}