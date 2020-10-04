#include <iostream>
using namespace std;

int main() {
     
    long enteredNum,numSaved,reversedNum;
	
	reversedNum = 0;
	
    cout<<"Enter a number : ";
    cin>>enteredNum;
    
    numSaved = enteredNum;
    
 	while(numSaved != 0){
 		reversedNum *= 10;
 		reversedNum += numSaved%10;
 		numSaved = numSaved/10;
 	}
 
 	cout<<"The reverse of "<<enteredNum<<" is : "<<reversedNum;
 	
    return 0;
}
