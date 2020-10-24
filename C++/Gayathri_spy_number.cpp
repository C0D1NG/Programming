#include<iostream>
using namespace std;
//a number is said to be spy number  if the sum of digits of number is equal to the product of the digits od number
int main(){
    int n,n1,digit,sum=0,productt=1;
    cout<<"enter the number to check if spy number or not!!";
    cin>>n;
    n1=n;//we will save the number in anothe variable so as to use the input value further (while displaying)

    while(n>0){
        digit=n%10;
        sum+=digit;
        productt*=digit;
        n=(int)n/10;

    }
    if(sum==productt)
    cout<<n1<<" is a spy number";
    else
    {
        cout<<n1<<" is not a spy number";

    }
    
}