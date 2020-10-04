//progran to find the maximum number of handshake if there are N persons
#include<iostream>
using namespace std;

int main() 
{
	int N,max;

	cout << "Enter number of persons: ";
	cin >> N;

	cout << "Maximum number of handshakes: ";
	max=N*(N-1)/2;
	cout << max << endl;
	
	return 0;
}
