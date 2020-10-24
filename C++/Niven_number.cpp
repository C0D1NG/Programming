#include<iostream>
using namespace std;
// Harshad/ Niven Number  is an integer that is divisible by the sum of its digits.
int main(){
    int n,n1,d,s=0;
    cin>>n;
    n1=n;
    while(n>0)
    {
        d=n%10;
        s+=d;
        n=(int)n/10;
    }
    if(n%s==0)
    cout<<n<<" is a Niven/Harshad number";
    else
    {
        cout<<n<<" is not a niven/harshad number";
        
    }
}

