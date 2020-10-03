#include<bits/stdc++.h>

using namespace std;
int hcf(int a,int b)
{
    if(b==0)
    return a;
    return hcf(b,a%b);
}
int main()
{
//the two number whose hcf is to be found are a and b

int  a,b;
//enter a and b
cin>>a>>b;
cout<<"Highest common factor of a and b is "<<hcf(a,b)<<endl;
return 0;

}