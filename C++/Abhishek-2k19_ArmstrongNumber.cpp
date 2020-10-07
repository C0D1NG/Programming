#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string in,out;
    int x;
    cin>>in;
    long long sum=0;
    for(int i=0;i<in.size();i++){
        x = in[i]-'0';
        //cout<<"x = "<<x<<endl;
        sum+=pow(x,in.size());
        //cout<<"sum = "<<sum<<endl;
    }
    //cout<<sum<<endl;

    out = to_string(sum);
    if(in==out){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
return 0;
}
