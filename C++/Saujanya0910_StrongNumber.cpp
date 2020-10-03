#include<bits/stdc++.h>
typedef long long int ll;

using namespace std;

ll factorial(ll num)
{
    if(num > 1)
        return num*factorial(num-1);
    else
        return 1;
}

int main()
{
    ll num, sum=0, factors;
    cout<<"Enter a number to check if it is a 'Strong Number': ";
    cin>>num;

    ll copy = num;

    while(copy)
    {
        ll digit = copy%10;
        sum += factorial(digit);
        
        copy/=10;
    }

    if(sum == num)
        cout<<num<<" is a Strong Number.\n";
    else
        cout<<num<<" is not a Strong Number.\n";

    return 0;
}