#include <iostream>
using namespace std;

int factorialRecursive(int n) {
    if (n == 0) return 1;
    return n * factorialRecursive(n-1);
}

int main() {
    int n;
    cin >> n;

    // recursive approach
    cout << factorialRecursive(n) << endl;
    return 0;
}