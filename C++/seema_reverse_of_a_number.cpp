//reverse of a number

#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long ll;
int main()
{
    int num;
    cout << "Enter a number:" << endl;
    cin >> num;
    int ans = 0;
    int count = 0;
    int temp = num;

    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    int k = 10;
    count = count - 1;
    while (num > 0)
    {
        int t = num % 10;
        ans = ans + pow(k, count) * t;
        num = num / 10;
        count--;
    }
    cout << "Reverse of the number is: ";
    cout << ans << endl;
}
