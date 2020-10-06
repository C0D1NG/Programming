#include <bits/stdc++.h>	// Import the reqquied libraries
#include <algorithm>

using namespace std;
 
 

string decimalToBinary(int n){		// Funtion to convert given decimal and return answer string
	string ans = "";				// Initialise the empty string
	while(n>0){						// Check n>0
		ans += n%2==0?"0":"1";		// If n is even append "0" else "1" to the ans string
		n /= 2;						// Decrease n by dividing it by 2
	}
	reverse(ans.begin(),ans.end());	// Reverse the ans string to get the correct order
	return ans;						// Return the final answer
}
 
 
 
int main()
{
	cout<<"Enter a decimal number to convert to binary..."<<endl;	// Prompting for the input
	int n;															//  Declare the variable		
	cin>>n;															// Scanning the input 
	string binary = decimalToBinary(n); 							// Calling the helper function
	cout<<binary<<endl;												// Printing the required answer
    return 0;   
}
 