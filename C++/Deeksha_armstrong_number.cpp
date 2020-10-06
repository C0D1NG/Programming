#include <iostream>
#include <cmath>
using namespace std;

int order(int n){
	int temp=n, count=0;
	while(temp!=0){
		count++;
		temp/=10;
	}
	return count;
}

void armstrong(int n){
	double sum=0;
	int temp=n;
	
	int y=order(n);
	
	while(temp!=0){
		int d=temp%10;
		sum=sum+pow(d,y);
		temp/=10;
	}
	
	if(sum==n)
	cout<<n<<" is an Armstrong number!\n";
	else
	cout<<n<<" is not an Armstrong number!\n";
}

int main(){
	int n;
	cin>>n;
	
	armstrong(n);
	
	return 0;
}