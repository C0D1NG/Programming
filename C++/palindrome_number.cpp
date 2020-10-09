#include <bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number \n";
	cin>>num;
    int rev=0,val;
    val = num;
    while(num > 0){
      rev = rev * 10 + num % 10;
      num = num / 10;
    }
    if(val==rev)
    cout<<val<<" is a palindrome"<<endl;
    else
    cout<<val<<" is not a palindrome"<<endl;
    return 0;
}
