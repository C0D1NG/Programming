#include <iostream>

int main()
{
    int num, rev = 0, a, b;
    std::cout << "Enter a positive number:";
    std::cin >> num;
    a = num;
    while (num != 0) {
        b = num % 10;
        rev = rev * 10 + b;
        num = num / 10;
     }
    if (a == rev)
        std::cout << "The number is a pallindrome";
    else
        std::cout << "The number in not a pallindrome";
    return 0;
}
