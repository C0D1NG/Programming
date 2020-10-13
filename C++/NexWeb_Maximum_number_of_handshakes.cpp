#include<iostream>

int main()
{
	int p;
	std::cout<<"Enter number of Persons: ";
	std::cin>>p;
	std::cout<<"Maximum number of handshakes: ";
	int max=p*(p-1)/2;
	std::cout<<max;
	return 0;
}
