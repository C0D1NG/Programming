#include <iostream>
using namespace std;

int main() {
     
    	long enteredNum,numSaved;
	int sumOfDigits;
	
	sumOfDigits = 0;
    
    cout<<"Enter a number : ";
    cin>>enteredNum;
    
    numSaved = enteredNum;
    
 	while(numSaved != 0){
 		sumOfDigits += numSaved % 10;
 		numSaved = numSaved/10;
 	}
 
 	cout<<"The sum of digits of "<<enteredNum<<" is : "<<sumOfDigits;
 	
    return 0;
}
