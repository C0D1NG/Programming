#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t; // enter test cases 
    while (t--)
    {
      long long int n;
      cin>>n;  // enter number in decimal to know the reversed 32 bit decimal		
      long long int i=0,ans=0;
       while(i<32)
       {
          ans=ans*2+n%2;
          n/=2;
          i++;
       }
      cout<<ans<<endl;
    }
	return 0;
}