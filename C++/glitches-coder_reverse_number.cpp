#include<iostream>
using namespace std;
int main()
{
int num, remainder, rev_num = 0;

    cout << "Enter an integer value : ";
    cin >> num;

    while(num != 0) {
        remainder = num % 10;
        rev_num = rev_num*10 + remainder;
        num /= 10;
    }

    cout << "The reversed number is = " << rev_num;

    return 0;
}
