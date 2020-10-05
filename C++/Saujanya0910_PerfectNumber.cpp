#include<bits/stdc++.h>

// give 'long long int' an alias 'll'
typedef long long int ll;

using namespace std;

int main()
{
    ll num, sum=0;
    cout<<"Enter a number to check if it is a 'Perfect Number': ";
    cin>>num;

    if( num<=0 )
    {
        cout<<num<<" is NOT a Perfect number.\n";
        return 0;
    }

    for(ll i=1;i<num;i++)
    {
        if(num % i == 0)
            sum += i;
    }
    
    if(sum == num)
        cout<<num<<" is a Perfect number.\n";
    else
        cout<<num<<" is NOT a Perfect number.\n";

    return 0;
}

// Sample I/P: -5
// Sample O/P: -5 is NOT a Perfect number.

// Sample I/P: 8128
// Sample O/P: 8128 is a Perfect number.
