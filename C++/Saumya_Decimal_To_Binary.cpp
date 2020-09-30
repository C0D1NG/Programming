#include<iostream>
#include<bitset>
using namespace std;

int main()
{
      int n;
      cin>>n;                                  //Taking the number as input 
      string b= bitset<32>(n).to_string();     //Converting simply using Bitset
      cout<<b;                                 //Printing the Binary Representation

	return 0;
}