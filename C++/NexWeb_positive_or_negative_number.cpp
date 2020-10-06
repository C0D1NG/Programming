#include <iostream>

int main()
{
 signed long num1 = 0;
	std::cout << "\n\n Check whether a number is positive or negative :\n";
	 
	std::cout << " Input a number : ";
    std::cin >> num1;
    if(num1 > 0)
    {
       std::cout << " The entered number is positive.\n\n";
    }
    else if(num1 < 0)
    {
        std::cout << " The entered number is negative.\n\n";
    }
    else
    {
        std::cout << " The number is zero.\n\n";
    }
    return 0;
}
