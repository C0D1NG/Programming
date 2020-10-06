#include<iostream>
using namespace std;

void palindrome(int n){
	int temp=n;
	int reverse=0;
	while(temp!=0){
		int d=temp%10;
		reverse=reverse*10+d;
		temp/=10;
	}
	
	if(reverse==n)
	cout<<n<<" is a palindrome\n";
	else
	cout<<n<<" is not a palindrome\n";
}

int main(){
	int n;
	cin>>n;
	palindrome(n);
	return 0;
}