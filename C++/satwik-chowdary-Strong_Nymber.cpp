//Name: P Satwik Chowdary
//github ID:satwik-chowdary


#include <iostream>
#include <bits/stdc++.h> 
#include<algorithm>
#include <vector>
#include <map>
#define ll long long

using namespace std;


// Time Complexity of this program in O(n^2) where n is the no. of digits of the number.

// The while loop takes O(n) time and the factorial function will take O(n) time. 

ll factorial(ll n){ 
    if(n==0) return 1;
    return n*factorial(n-1);
}



int main(int argc, char const *argv[])
{
       
    ll n;
    cin>>n;
    ll sum=0;
    ll k=n;
    while(n>0){
        sum+=factorial(n%10);
        n=n/10;
    }
    if(k==sum) cout<<"It is a strong number"<<endl;
    else cout<<"it is not a strong number"<<endl;

    return 0;
}