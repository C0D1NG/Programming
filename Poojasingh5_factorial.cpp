// ISSUE-#13
// PROGRAM TO CALCULATE FACTORIAL OF A NUMBER

#include <iostream>
using namespace std;
typedef long long int ll;

ll factorial (ll n)
{
     if (n == 0) 
        return 1; 
    return n * factorial(n - 1);
}

int main()
{
     ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 cout.tie(NULL);
    ll n;
    cout<<"Enter Number="<<endl;
    cin>>n;
    ll ans=factorial(n);
    cout<<"Factorial of "<<n<<" is "<<ans<<endl;
    
     
    return 0;
} 
