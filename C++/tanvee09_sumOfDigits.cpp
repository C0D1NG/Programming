#include<iostream>
using namespace std;

int sumOfDigits(long long n) {
    int sum = 0;

    while (n != 0) {
        sum += n % 10;
	n /= 10;
    }

    return sum;
}

int main() {
    long long n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Sum of digits: " << sumOfDigits(n) << endl;
    return 0;
}
