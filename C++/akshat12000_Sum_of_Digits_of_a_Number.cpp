#include<bits/stdc++.h>
using namespace std;
int sum_of_digits(int n)
{ 
     if(n<10)
     return n;
     return sum_of_digits(n/10)+n%10;
}
int main()
{
   int n;
   cin>>n; //taking input for a number
   int ans=sum_of_digits(n);  // recursive function to evaluate the sum of digits of a number
   cout<<ans<<"\n";
   return 0;
}
