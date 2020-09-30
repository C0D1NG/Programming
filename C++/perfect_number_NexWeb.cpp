#include <iostream> 
#include <cctype>

int main(){
    int n,i=1,sum=0;
    std::cout << "Enter a number: ";
    std::cin >> n;
       while(i<n){
       if(n%i==0)
       sum=sum+i;
       ++i; 
}
 
if(sum==n)
    std::cout << i << " is a perfect number\n"; 
else
    std::cout << i << " is not a perfect number\n";
    return 0;
}
