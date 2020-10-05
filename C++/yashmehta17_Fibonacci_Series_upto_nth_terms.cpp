#include <iostream>
using namespace std;

int main()
{
    int n, a1 = 0, a2 = 1, nextTerm = 0;
    cout << "Enter the number of terms: ";
    //Takes input from user.
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << a1 << " ";
            continue;
        }
        if(i == 2)
        {
            cout << a2 << " ";
            continue;
        }
        // Prints next terms
        nextTerm = a1 + a2;
        a1 = a2;
        a2 = nextTerm;
        cout << nextTerm << " ";
    }
    return 0;
}
