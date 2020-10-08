// Program by Isabella Bond https://github.com/isabellabond

#include <iostream>  

using namespace std;

// recursive function to return the factorial of a number
int factorial(int num) {
    
    if(num == 1){
        return 1;
    }
    
    else{
        return num * factorial(num - 1);
    }
    
}

int main() {  
    
    cout<<"Please Enter a Number: ";
    int num = 0;
    cin>>num;
    
    cout<<"Factorial of " <<num<< " = " <<factorial(num)<< "\n";

  return 0;  
}  