/* Author - vibhor_376 */
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
 ll int n,count=1;
 cin>>n;
   for(int i=2;i*i<=n;i++){
            if(n%i==0){
                if(i*i!=n){
                count +=i+n/i;
            }
            else{
                count+=i;
            }
        }
    }    
        if(count==n){
            cout<<"Yes it is a perfect number.\n";
        }
        else{
            cout<<"Noh!\n";
        }
}
