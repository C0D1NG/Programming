#include<iostream>
int main()
{
 int a;
 std::cout<<"Please enter a year";
 std::cin>>a;
 if (a%4==0)
    if(a%100==0)
     if (a%400==0)
       std::cout<<" \n Year is a leap year";
  else
    std::cout<<"\n You is not a leap year";
 else
    std::cout<<"\n Year is a leap year";
 else
     std::cout<<"\n You is not a leap year";
  return 0;
}
