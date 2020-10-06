// Write a program for fibonacci series upto nth terms.
// Algorithm: Dynamic Programming
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>

using namespace std;

// Function to find the nth fibonacci number
void fibonacci(int n) {
    // n < 0 is flagged as an invalid input.
    if(n < 1) {
        cout << "Invalid Input" << "\n";
        return;
    }

    cout << "Fibonacci series: ";
    cout << 0 << " ";

    if(n > 1)
        cout << 1 << " ";

    if(n > 1) {
        int fib[n + 1];
        fib[1] = 0;
        fib[2] = 1;

        for(int i = 3; i <= n; ++i) {
            fib[i] = fib[i - 1] + fib[i - 2];
            cout << fib[i] << " ";
        }

        cout << endl;
    }

}

int main() {
    int n;

    cin >> n;
    fibonacci(n);

    return 0;
}
