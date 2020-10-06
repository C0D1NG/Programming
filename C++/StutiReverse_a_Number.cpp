#include <iostream>
using namespace std;
int main() {
   int N;
   cin>>N;
   cout<<"The Reversed Number is: ";
   while(N>0)
   {
      int temp=N%10;
      cout<<temp;
      N=N/10;
   }
   return 0;
}
