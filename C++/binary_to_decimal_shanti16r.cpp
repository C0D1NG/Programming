#include <iostream>
#include <cmath>

using namespace std;

int convertBinaryToDecimal(long long);

int main()
{
long long num;
cout << "Enter a binary number: ";
cin >> num;
cout << num << " in binary = " << convertBinaryToDecimal(num) << " in decimal";
return 0;
}

int convertBinaryToDecimal(long long num)
{
int decimalNumber = 0, i = 0, remainder;
while (num!=0)
{remainder = num%10;
num /= 10;
decimalNumber += remainder*pow(2,i);
++i;
}
return decimalNumber;
}
