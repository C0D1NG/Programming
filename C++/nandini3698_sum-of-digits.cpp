#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n = 5673249;
    ll sum=0;
    ll m=n;
    while(m){
        sum += m%10;
        m = m/10;
    }
    cout<<sum<<endl;
    return 0;
}