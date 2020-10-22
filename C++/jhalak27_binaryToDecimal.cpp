#include<bits/stdc++.h>
using namespace std;

//function to convert binary to decimal
long long int binaryToDecimal(long long int n){
	//to store decimal
	long long int d = 0;
	long long int t = n;
	long long int base = 1;

	while(t>0){
		int lastDigit = t%10;
		t = t/10;
		d += lastDigit*base;
		base = base * 2;
	}

	return d;
}


int main(){
	//to store binary
	long long int n;
	cout<<"Please enter the binary number to convert into decimal"<<endl;
	cin>>n;
	cout<<binaryToDecimal(n)<<endl;
	return 0;
}