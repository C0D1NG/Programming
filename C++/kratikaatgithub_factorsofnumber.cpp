#include<iostream>
int main(){
int a,b;
std::cout<<"Enter a number:";
std::cin>>a;
for(int i=0;i<=a;i++)
{ if (a%i==0)
std::cout<<i<<endl; 
}
return 0;  
}
