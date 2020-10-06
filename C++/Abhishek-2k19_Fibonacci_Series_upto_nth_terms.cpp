#include<bits/stdc++.h>
using namespace std;
vector<long long> data;


void fib(long long n){
    data.push_back(1);
    data.push_back(1);
    long long i=2;
    cout<<"Fibonacci Series upto given no. of terms: "<<endl;
    if(n<3){
        if(n==1){
            cout<<"1"<<endl;
            return;
        }
        else {
            cout<<"1"<<endl;
            cout<<"1"<<endl;
            return;
        }
    }
    while(i<n){
        data.push_back(data.at(i-1)+data.at(i-2));
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<data.at(i)<<endl;
    }

}

int main(){
    long long n,x;
    cin>>n;
    fib(n);
return 0;
}
