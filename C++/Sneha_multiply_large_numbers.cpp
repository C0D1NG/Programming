#include<iostream>
#include<string>
using namespace std;
//Given two numbers in form of strings, we need to multiply them and store the result in another string.
string multiplyStrings(string s1, string s2) {
   //Your code here
   const int len1=s1.size();
   const int len2=s2.size();
   int in1=0,in2=0;
   int res[len1+len2]={0};  // product value stored in each step but in reverse order.
   for(int i=len1-1;i>=0;i--){
       int num1=s1[i]-'0';
       int carry=0;
       in2=0;
       for(int j=len2-1;j>=0;j--){
           int num2=s2[j]-'0';
           int sum=num1*num2+res[in1+in2]+carry;
           carry=sum/10;
           res[in1+in2]=sum%10;
           in2++;
       }
       if(carry>0)
        res[in1+in2]+=carry;
       in1++;
   }
   int i=len1+len2-1;
   while(i>=0&&res[i]==0)  //leaving zeroes in the begining
    i--;
   if(i==-1)
    return "";
   string ans;
   while(i>=0)
    ans+=to_string(res[i]);
   return ans;
}
int main(){
    string num1,num2;
    cin>>num1>>num2;
    string product=multiplyStrings(num1,num2);
    cout<<product<<endl;
    return 0;
}
