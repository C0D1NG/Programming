#include <iostream>
using namespace std;
int main()
{
    long long int number;
    cin >> number;
    if (number % 2 == 0)
        cout << number << " is an even number." << endl;
    else
        cout << number << " is an odd number." << endl;
    return 0;
}
