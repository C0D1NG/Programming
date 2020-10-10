#include <iostream>
using namespace std;
int main(){
   int num;
   bool flag = true;
   cout<<"Enter any number(should be positive integer): ";
   cin>>num;

   for(int i = 2; i <= num / 2; i++) {
      if(num % i == 0) {
         flag = false;
         break;
      }
   }
   if (flag==true)
      cout<<num<<" is a prime number";
   else
      cout<<num<<" is not a prime number";
   return 0;
}
