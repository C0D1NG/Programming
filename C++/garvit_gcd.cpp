#include <iostream>
#include <bitset>
using namespace std;

//Following Eucledian algorithm
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    int ans = gcd(b, a % b);
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b; //Taking the number as input

    int ans = gcd(a, b);
    cout << ans;

    return 0;
}