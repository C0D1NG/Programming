#include <iostream> 
using namespace std; 
  
// function to find factorial of given number 
unsigned int factorial(unsigned int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
  
// main function - this is the starting point of the code
int main() 
{ 
    int num;
    cin >> num;
    if(num >= 0){
        cout << "Factorial of "
            << num << " is " << factorial(num) << endl;     
    }
    else{
        cout << "Can not compute factorial of negative number" << endl;
    }
    return 0; 
} 