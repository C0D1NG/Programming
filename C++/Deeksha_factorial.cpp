 #include <iostream> 
using namespace std; 

unsigned int factorial(unsigned int n) 
{ 
	int res = 1, i; 
	for (i = 2; i <= n; i++) 
		res *= i; 
	return res; 
} 

int main() 
{ 
	int n;
	cin>>n;
	cout<<factorial(n)<<"\n";
	return 0; 
} 
