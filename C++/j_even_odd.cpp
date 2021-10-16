// check for even or odd
#include <iostream>
using namespace std;

bool isEven(int n)
{
    return (!(n & 1));
}

int main()
{
    int n = 101;
    isEven(n)? cout << "Even" :
               cout << "Odd";
    return 0;
}
