#include<bits/stdc++.h>
using namespace std;
int main()
{
      int i,n;
      cin>>n;
      int x[n+2];
      x[1]=1;
      for(i=2;i<=n;i++)
      {
      	x[i]=x[i-1]*i;
      }
      cout<<x[n]<<"\n";
}
