#include <iostream>


using namespace std;


bool checkPrimeNumber(long int numValue)
{

if (numValue < 2)
return false;


if (numValue > 2 && (numValue % 2) == 0)
return false ;


for(int i = 2; i < numValue; i++ )
{

cout << " divisor: " << i << endl;

if ( (numValue % i) == 0)
{

return false;

}

}


return true;

}



int main()
{

long int inputValue;

do {

cout << " Please enter a number to check is prime number or not \n Enter zero to exit " << endl;

cin >> inputValue;

if (inputValue) {

if (checkPrimeNumber(inputValue))

cout << inputValue << " : is a prime number " << endl;

else

cout << inputValue << " : is not a prime number " << endl;

}

} while (inputValue > 0);


return 0;

}




