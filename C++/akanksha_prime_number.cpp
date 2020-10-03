#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int check_prime(int n)  //function to check if prime or not
{
    int i=2;
    if(sqrt(n)*sqrt(n)==n)   //checking if number is perfect square
        return 1;
    while(i<=sqrt(n))       //iterating through all values from 2 to square root of n to check if n is divisible by it
    {
        if(n%i==0)
            return 1;
        i++;
    }
    return 0;
}

int main(void)
{
    int n,t,i;
    cin>>t;        //number of test cases
    for(i=0;i<t;i++)   //for loop for interating through all test cases
    {
        cin>>n;  //number to be checked if it is prime or not
        if(n==1)
            cout<<"1 is neither prime nor composite"<<endl;
        else if(n==2)
            cout<<"2 is a prime number"<<endl;       
        else if(check_prime(n))     
            cout<<n<<" is a composite number"<<endl;
        else
            cout<<n<<" is a prime number"<<endl;
    }
    return 0;
}