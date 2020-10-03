#include <iostream>
#include<bits/stdc++.h> 

using namespace std;


// Using O(n^3)
int LargestSumSubarray_bruteforce(int* arr, int size)
{
	int maxSum = INT_MIN;
	int start = 0;
	int end = 0;

	for (int i = 0; i < size; i++)
	{
		for(int j = i; j < size; j++)
		{
			// Variable to keep track of sum for current sub array
			int curSum = 0;

			for(int k = i; k <= j; k++)
			{
				curSum += arr[k];
			}

			// Checking if current subarray has larger sum
			if(curSum > maxSum)
			{
				maxSum = curSum;
				start = i;
				end = j;
			}
		}
	}

	return maxSum;
}


// O(n^2) solution
int LargestSumSubarray_quadratic(int* arr, int size)
{

	int maxSum = INT_MIN;
	int start = 0;
	int end = 0;


	int sumArray[size];
	sumArray[0] = arr[0];

	// An array to store Partials Sums
	for (int i = 1; i < size; i++)
	{
		sumArray[i] = sumArray[i-1] + arr[i];
	}


	for (int i = 0; i < size; ++i)
	{
		for(int j = i; j < size; j++)
		{
			int curSum = sumArray[j] - sumArray[i] + arr[i];

			// Checking if current subarray has larger sum
			if(curSum > maxSum)
			{
				maxSum = curSum;
				start = i;
				end = j;
			}

		}
	}


	return maxSum;
}


// Using Kaden's Algorithm#include<bits/stdc++.h> 

int LargestSumSubarray_linear(int* arr, int size)
{

	int maxSum = INT_MIN;
	int start = 0;
	int end = 0;

	int curSum = 0;

	for (int i = 0; i < size; ++i)
	{
		curSum += arr[i];

		if(curSum > maxSum)
		{
			maxSum = curSum;
		}

		if(curSum < 0) {
			curSum = 0;
		}
	}


	return maxSum;
}




int main()
{
	
	int array[] = {1, 4, -2, 4, -1, 3, 5, -6};
	int length = 8;


	// Cubic solution
	printf("The Largest Sum is (cubic time) : %d\n", LargestSumSubarray_bruteforce(array, length) );


	// Quadratic Solution
	printf("The Largest Sum is (quadratic time) : %d\n",LargestSumSubarray_quadratic(array, length));


	//Kaden's Algorithm
	printf("The Largest Sum is (linear time using Kaden's Algo) : %d\n",LargestSumSubarray_linear(array, length) );


	return 0;
}
