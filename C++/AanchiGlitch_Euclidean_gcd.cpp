//Implementation of Euclidean algorithm for calculating GCD

#include <iostream>
using namespace std;

int gcd(int a, int b) {
   
   //base case
   if (b == 0)
   {
       return a;
   }
   return gcd(b, a % b);
}

int main() {
   int a , b;
   cout << "Enter the values of a and b :" << endl;
   cin >> a >> b;
   cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
   return 0;
}

/*
Time complexity: O(log min(a, b))

Sample I/O:

Input:
Enter the values of a and b :
4 8
Output:
GCD of 4 and 8 is 4

Input:
Enter the values of a and b :
35 10
Output:
GCD of 35 and 10 is 5
*/
