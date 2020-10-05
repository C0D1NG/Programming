#include<iostream>
using namespace std;
int main()
{
int i,digit,number,rev;

cout<<"enter a number which is positive : "<<endl;
cin>>number;
i=number;

 do
     {
         digit = number % 10;
         rev = (rev * 10) + digit;
         number = number / 10;
     } 
     while (number != 0);

     cout << "The reverse of this number will be : " << rev << endl;

     if (i == rev)
         cout << "The given number is a palindrome.";
     else
         cout << "The given number is not a palindrome.";

    return 0;
}
