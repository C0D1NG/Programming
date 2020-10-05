#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    if (number < 0)
        cout << number << " is a negative number." << endl;
    else
        cout << number << " is a positive number." << endl;
    return 0;
}
