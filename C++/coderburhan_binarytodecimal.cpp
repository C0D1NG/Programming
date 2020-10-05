#include <iostream>
using namespace std;
void BinaryToDecimal(int n) {
   int decimalNumber = 0;
   int base = 1;
   int temp = n;
   while (temp) {
      int lastDigit = temp % 10;
      temp = temp/10;
      decimalNumber += lastDigit*base;
      base = base*2;
   }
   cout<<"Decimal of "<<n<<" is "<<decimalNumber<<endl;;
}
int main() {
    int n;
    cout << "Enter Binary Number: ";
    cin >> n;
    BinaryToDecimal(n);   
   return 0;
}