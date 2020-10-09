#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Number = ";
    cin>>n;
    int d, rev = 0;
    while(n!=0)
    {
        d = n%10;
        rev = rev*10 + d;
        n /= 10;
    }
    cout<<"Reverse = "<<rev;

}