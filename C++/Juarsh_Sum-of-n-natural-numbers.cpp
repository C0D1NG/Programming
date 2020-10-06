#include<iostream>

using namespace std;

int main()
{
  int num;
  int sum=0;
  cout<<"Enter a number:";
  cin>>num;
  for(int i=1;i<=num;i++)
  {
    sum+=num;
  }
  cout<<"Sum of first "<<num<<" natural number is"<<sum;
  
  return 0;
}
