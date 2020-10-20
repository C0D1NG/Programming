//PROGRAM TO FIND SUM OF DIGITS OF NUMBER
//ISSUE NUMBER #8

#include <iostream>
using namespace std;
typedef long long int ll;


int main()
{
     ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 cout.tie(NULL);
	ll a;

	cout<<"ENTER NUMBER="<<endl;
		cin>>a;
		ll n;
		n=a;
		 ll sum=0;
    
		while(a!=0)
		{
		    sum=sum+(a%10);
		    a=a/10;
		}
   
     cout<<"SUM OF DIGITS "<<n<<" is " <<sum<<endl;
	
    return 0;
} 
