#include<iostream>
typedef long long int ll;
using namespace std;
int main(){
ll n;
cin>>n;
ll ans = n*(n+1);
ans/=2;
cout<<ans;
return 0;
}
