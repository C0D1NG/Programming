#include<bits/stdc++.h>
using namespace std;

int main(){
int sum=0;
int n;
cin>>n;
while(n>0){

int ld= n%10;
sum+=ld;
n/=10;
}

cout<<"The sum of digits is: "<<sum<<endl;
return 0;
}
