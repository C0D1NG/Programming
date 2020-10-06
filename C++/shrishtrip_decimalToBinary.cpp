#include <bits/stdc++.h>	//Import required libraries
#include <algorithm>

using namespace std;
 

string decimalToBinary(int n){		// Function to convert binary to decimal and return in string format
	string ans = "";				// Initialise an empty string
	while(n>0){						// Loop until n > 0
		ans += (n%2==0)?"0":"1";	// If n is even add "0" else add "1"
		n /= 2;						// Decrease n by dividing it by
	}
	reverse(ans.begin(),ans.end());	// Reverse the appended string to get the final answer
	return ans;						// Return the final answer
}
 
 
 
int main()	//Driver program
{	
	cout<<"Enter a decimal number to convert to binary..."<<endl;	// Message to prompt input
	int n;										// Declare variable to scan the input
	cin>>n;										// Scanning the input 
	string binary = decimalToBinary(n); 		// Calling the helper function
	cout<<"Binary equivalent = "<<binary<<endl;	// Printing the final answer

    return 0;   
}
 