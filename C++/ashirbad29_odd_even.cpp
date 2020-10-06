#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  // using bit-wise and operator here 
  if(!n & 1) {
    cout << n << " is a even no";
  } else {
    cout << n << " is a odd no";
  }
  return 0;
}