#include<iostream>
using namespace std;
void print(int n)
{
int rem,s=0;
while(n!=0)
{
rem=n%10;
s=s+rem;
n=n/10;
}
cout<<"Sum of the digits "<<s;
}
int main()
{
int n;
cin>>n;
print(n);
return 0;
}
