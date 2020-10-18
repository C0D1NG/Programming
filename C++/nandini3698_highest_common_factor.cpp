#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcd(ll n1,ll n2){
    if(n2==0) return n1;
    return gcd(n2,n1%n2);
}

int main(){

    ll n1,n2;
    n1=50, n2=20;
    ll hcf = gcd(n1,n2);
    cout<<hcf<<endl;
    return 0;
}