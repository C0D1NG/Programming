// c++ program to print fibonacci series
#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a=0;
	    int b=1;
	    cout<<"Fibonaaci series"<<endl;
	    cout<<a<<" "<<b<<" ";
	    for(int i=0;i<n-2;i++)
	    {
	        int fib=a+b;
	        cout<<fib<<" ";
	        a=b;
	        b=fib;
	    }
	    
	}
	return 0;
}
