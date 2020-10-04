#include <cstdio>
#include <iostream.h>
using namespace std;

long Factorial(int num){
	
	long factorial = 1;
	
	while(num != 0){
 		factorial *= num;
 		num -= 1;
 	}
 	
 	return factorial;
}

int main() {
    long enteredNum = -1,savedNum,sumOfFact = 0;
    int number;
	
	while(enteredNum < 0){
		cout<<"Enter a number : ";
    	cin>>enteredNum;
    	
    	if(enteredNum < 0){
    		cout<<endl<<"Try again with a positive number ! \n";
		}
	}
    
    if(enteredNum != 0){
    	savedNum = enteredNum;
	}else {
		sumOfFact = 1;
	}	
 
 	while(savedNum != 0){
 		number = savedNum % 10;
 		
 		sumOfFact += Factorial(number);
 		
 		savedNum = savedNum / 10;
 	}
 	
 
 	if(enteredNum == sumOfFact){
 		cout<<"==> "<<enteredNum<<" is a Strong Number";
	 }
	 else{
	 	cout<<enteredNum<<" is not equal to the sum of factorials of its digits which is  "<<sumOfFact<<endl<<"==> "<<enteredNum<<" is not a Strong Number";
	 }
  
    return 0;
}