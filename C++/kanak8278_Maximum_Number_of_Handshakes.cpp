#include<bits/stdc++.h>
using namespace std;
unsigned long long factorial(unsigned int n) 
{ 
    int res = 1, i; 
    for (i = 2; i <= n; i++) 
        res *= i; 
    return res; 
}

int main()
{
    int n;
    cin>>n;
    long long result;
    result = factorial(n)/(factorial(n-2)*2);
    cout<<result;
}