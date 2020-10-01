#include <bits/stdc++.h>	// Import the required libraries
#include <algorithm>

using namespace std;
 

/*
	An interesting observation that  we can use is:
			LCM(a,b) X HCF(a,b) = a X b
	Now there is a library function to calculate HCF viz. __gcd(a,b)
	So we can simply divide the product of 2 nos. by their HCF to get their LCM
*/
int findingLCM(int a,int b){		// Funtion to calculate the LCM according to the above approach
	long long product = a*b;		// using long long to take care of any overflow
	int hcf = __gcd(a,b);			// Finding the HCF using the library function
	int lcm = product/hcf;			// Finding the LCM according to the above approach
	return lcm;						// Return the final answer
}
 
 
 
int main()
{
	cout<<"Enter the 1st number..."<<endl;	// Prompting for the first input
	int a;									//  Declare the variable		
	cin>>a;									// Scanning the 1st input
	cout<<"Enter the 2nd number..."<<endl;	// Prompting for the second input
	int b;									//  Declare the variable		
	cin>>b;									// Scanning the 2nd input
	int ans = findingLCM(a,b);				// Calling the helper function
	cout<<"LCM = "<<ans<<endl;				// Printing the required answer
    return 0;   
}
 