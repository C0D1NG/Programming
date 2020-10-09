//sum of digits of a number C++ soln by @mgncodes
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int s = 0;
    while(n > 0)
    {
        s += (n % 10);
        n /= 10;
    }
    cout << "Sum of Digits: " << s << "\n";
}
