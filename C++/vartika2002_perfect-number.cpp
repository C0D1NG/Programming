#include <iostream>
using namespace std;

int main()
{
    long long int num, sum = 0;
    cin >> num;
    for (int i = 1; i <= num / 2; i++)
        if (num % i == 0)
        {
            sum = sum + i;
        }
    if (num == sum)
    {
        cout << num << " is a perfect number." << endl;
    }
    else
        cout << num << " is not a perfect number." << endl;
    return 0;
}
