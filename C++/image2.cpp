// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to traverse the matrix
// diagonally upwards
void printDiagonalTraversal(
	vector<vector<int> >& nums)
{
	// Stores the maximum size of vector
	// from all row of matrix nums[][]
	int max_size = nums.size();

	for (int i = 0; i < nums.size(); i++) {
		if (max_size < nums[i].size()) {
			max_size = nums[i].size();
		}
	}

	// Store elements in desired order
	vector<vector<int> > v(2 * max_size - 1);

	// Store every element on the basis
	// of sum of index (i + j)
	for (int i = 0; i < nums.size(); i++) {

		for (int j = 0;
			j < nums[i].size(); j++) {
			v[i + j].push_back(nums[i][j]);
		}
	}

	// Print the stored result
	for (int i = 0; i < v.size(); i++) {

		// Reverse all sublist
		reverse(v[i].begin(), v[i].end());

		for (int j = 0; j < v[i].size(); j++)
			cout << v[i][j] << " ";
	}
}

// Driver code
int main()
{
	// Given vector of vectors arr
	vector<vector<int> > arr
		= { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

	// Function Call
	printDiagonalTraversal(arr);

	return 0;
}
