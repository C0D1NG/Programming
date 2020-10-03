#include <bits/stdc++.h>
using namespace std;

int factorialofnumber(int n);

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of Entered Number " << n << " = " << factorialofnumber(n);

    return 0;
}

int factorialofnumber(int n)
{
    if(n > 1)
        return n * factorialofnumber(n - 1);
    else
        return 1;
}
