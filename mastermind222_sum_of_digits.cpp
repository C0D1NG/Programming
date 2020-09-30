
#include<iostream>
using namespace std;

int main()
{
	int num;
	cin>>num;
	int sum=0;
	while(num)
	{
         sum=sum+num%10;
         num=num/10;
	}
	cout<<"Sum of digits of the number is "<<sum<<"\n";
	return 0;
}