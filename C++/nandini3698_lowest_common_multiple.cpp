#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcd(ll n1,ll n2){
    if(n2==0) return n1;
    return gcd(n2,n1%n2);
}

ll lowest_common_multiple(ll n1,ll n2){

    ll _gcd = gcd(n1,n2);
    ll lcm = (n1*n2)/_gcd;
    return lcm;
}

int main(){

    ll n1,n2;
    n1=50, n2=20;
    ll lcm = lowest_common_multiple(n1,n2);
    cout<<lcm<<endl;
    return 0;
}