#include <iostream>
using namespace std;

int main() {
	
  int naturalNumber, sum;
	
  cout<<"Please insert N: ";
  cin >> naturalNumber;
  
  for(int i = naturalNumber; i > 0; i--) {
  	sum += i;
  }
  
  cout << "Total = " << sum;
  
  return 0;
}
