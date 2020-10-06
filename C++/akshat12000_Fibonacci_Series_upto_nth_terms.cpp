#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n; // taking input for no. of terms
   int fib[n+1]={0};
   fib[1]=1;
   fib[2]=1;
   for(int i=3;i<=n;i++)
   fib[i]=fib[i-1]+fib[i-2];   // formula for fibonacci series
   for(int i=1;i<=n;i++)
   cout<<fib[i]<<" ";    // printing first n terms of fibonacci series
   return 0;
}
