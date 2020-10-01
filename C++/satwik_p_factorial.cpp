
//Name: P Satwik Chowdary
//GitHub username: satwik-chowdary

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include<bits/stdc++.h>
#define ll long long
#define mod 1e9+7
using namespace std;
 
// This program runs in O(sqrt(n))


ll factorial(ll n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

int main() { 
    ll n;
    cin>>n;
    cout<<factorial(n)<<endl;
} 
