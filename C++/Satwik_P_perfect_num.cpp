
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



bool perfect_num(ll n){
    ll sum=1;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n) sum+=i;
            else sum+=(i+n/i);
        }
    }
    if(sum==1 and n!=1) return true;
    return false;
}

int main() { 
    ll n;
    cin>>n;
    if(perfect_num(n) or n==1) cout<<"It is a perfect number"<<endl;
    else cout<<"It is not a perfect number"<<endl;
} 
