// PROGRAM TO FIND SUM ON N NATURAL NUMBERS
//ISSUE NUMBER #5

#include <iostream>
using namespace std;
typedef long long int ll;


int main()
{
     ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 cout.tie(NULL);
	ll a;
	cin>>a;
	cout<<"ENTER NUMBER="<<endl;
     ll sum=(a*(a+1))/2;
     cout<<"SUM OF FIRST "<<a<<" NATURAL NUMBERS= "<<sum<<endl;
	
    return 0;
} 
