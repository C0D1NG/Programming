#include <iostream>

int main()
{
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        std::cout << year << " is a leap year\n";
    else
        std::cout << year << " is not a leap year\n";
    return 0;
}
