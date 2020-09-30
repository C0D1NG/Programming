// C++ program to find maximum number of handshakes.
#include <iostream>
using namespace std;

// Calculating the maximum number of handshake
// Total number of handshake = N-1 + N-2 +….+ 1 + 0, which is equivalent to
//((N-1)*N)/2.

int maxHandshake(int n)
{
 return (n * (n - 1)) / 2;
}

int main()
{
 int n;
 cin >> n;
 cout << maxHandshake(n) << endl;

 return 0;
}