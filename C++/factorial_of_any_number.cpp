#include<iostream>
using namespace std;
int main()
{
	int n,product=1;
	cout<<"Enter any number"<<endl;
	cin>>n;
	for(int i=n;i>=1;i--){
		product=product*i;
	}
	cout<<"factorial of the number="<<product<<"\n";
}
