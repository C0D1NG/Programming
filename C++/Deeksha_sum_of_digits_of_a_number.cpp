#include<iostream>
using namespace std;

long long int sumOfDigits(long long int n){
	long long int sum=0;
	while(n!=0){
		long long int d=n%10;
		sum=sum+d;
		n/=10;
	}
	return sum;
}

int main(){
	long long int n;
	cin>>n;
	long long int sum= sumOfDigits(n);
	cout<<sum<<"\n";
}