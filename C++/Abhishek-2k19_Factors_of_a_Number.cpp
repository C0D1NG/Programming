#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<long long> output;
    long long x;
    cin>>x;
    for(long long i = 1;i<=x;i++){
        if(x%i==0){
            output.push_back(i);
        }
    }

    cout<<"Factors of the given number are:"<<endl;
    for(long long i =0;i<output.size();i++){
        cout<<output.at(i)<<endl;
    }
return 0;
}
