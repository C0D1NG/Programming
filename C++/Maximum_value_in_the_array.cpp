#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int main(){
	int n;
	cin>>n;
	int a[n];
	int max_value=INT_MIN;
	for(int i=0;i<n;i++){
		cin>>a[i];
		max_value=max(max_value,a[i]);
		}
	cout<<max_value;
return 0;}

		
