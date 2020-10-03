#include <iostream>  
int main()  
{  
 int n,r,sum=0,p;    
 std::cout<<"Enter the Number=  ";    
 std::cin>>n;    
 p=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(p==sum)    
 std::cout<<"Armstrong Number."<<endl;    
else    
 std::cout<<"Not Armstrong Number."<<endl;   
return 0;  
}  
