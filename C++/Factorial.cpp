/* Author - vibhor376 */
#include<bits/stdc++.h>
#define fastAF ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ull unsigned ll
#define ld long double
#define pb emplace_back
#define pf push_front
#define dll deque<ll>
#define vll vector<ll>
#define pll pair<ll,ll>
#define mapll map<ll,ll>
#define endl "\n"
#define all(v) v.begin(),v.end()
#define deb(x) cout<<x
#define mod (int) 1e9+7
#define pi 3.1415926536
#define deci(x) setprecision(x)
#define  rev greater<int>()
using namespace std; 
int main()
{
  ll int number,factorial=1;
  cin>>number;
  for(int i=1;i<=number;i++){
      factorial*=i;
  }
  deb(factorial)<<endl;
}
