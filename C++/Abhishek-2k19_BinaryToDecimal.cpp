#include<bits/stdc++.h>
using namespace std;

int main(){
    string in;
    int x,flag=1,decimal = 0;
    float sum=0;
    cout<<"Enter binary number: ";
    cin>>in;
    for(int i=0;i<in.size();i++){
        if(in[i]=='.'){
            decimal = i;
            flag = 0;
            break;
        }
        if(i==in.size()-1){
            decimal = in.size();
        }
    }
/*
    if(flag)
        decimal = in.size();
/*
    /*
    for(int i=0;i<s.size();i++){
        if(in[i]=='.'){
            flag = 0
            continue;
        }

        if(flag){
            x = in[i]-'0';
            sum+=
        }
    }
    */
    for(int i=0;i<decimal;i++){
        x= in[i]-'0';
        sum+=x*powf(2,decimal-1-i);
    }


    for(int i=1;i<in.size()-decimal;i++){
        x= in[decimal+i]-'0';
        sum+=x*powf(0.5,i);
        }
  //  }
    cout<<"Decimal Value of given Binary number is : ";
    cout<<fixed<<setprecision(10)<<sum<<endl;
    return 0;
}
