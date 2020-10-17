/* Iterative C# program for merge
sort */
using System;

class GFG {

	/* l is for left index and r
	is right index of the sub-array 
	of arr to be sorted */
	static void mergeSort(int[] arr,int l, int r)
	{
		if (l < r)
		{
			
			// Same as (l+r)/2 but avoids 
			// overflow for large l & h
			int m = l + (r - l) / 2; 
			mergeSort(arr, l, m);
			mergeSort(arr, m+1, r);
			merge(arr, l, m, r);
	}
	}

	/* Function to merge the two haves
	arr[l..m] and arr[m+1..r] of array 
	arr[] */
	static void merge(int[] arr, int l,
						int m, int r)
	{
		int i, j, k;
		int n1 = m - l + 1;
		int n2 = r - m;
	
		/* create temp arrays */
		int []L = new int[n1];
		int []R = new int[n2];
	
		/* Copy data to temp arrays
		L[] and R[] */
		for (i = 0; i < n1; i++)
			L[i] = arr[l + i];
		for (j = 0; j < n2; j++)
			R[j] = arr[m + 1+ j];
	
		/* Merge the temp arrays back 
		into arr[l..r]*/
		i = 0;
		j = 0;
		k = l;
		while (i < n1 && j < n2)
		{
			if (L[i] <= R[j])
			{
				arr[k] = L[i];
				i++;
			}
			else
			{
				arr[k] = R[j];
				j++;
			}
			k++;
		}
	
		/* Copy the remaining elements of
		L[], if there are any */
		while (i < n1)
		{
			arr[k] = L[i];
			i++;
			k++;
		}
	
		/* Copy the remaining elements of
		R[], if there are any */
		while (j < n2)
		{
			arr[k] = R[j];
			j++;
			k++;
		}
	}
	
	/* Function to print an array */
	static void printArray(int []A, int size)
	{
		int i;
		for (i=0; i < size; i++)
			Console.Write(A[i]+" ");
		Console.Write("\n");
	}



	public static void Main()
	{
		int []arr = {12, 11, 13, 5, 6, 7};
		int arr_size = arr.Length;
	
		Console.Write("Given array is \n");
		printArray(arr, arr_size);
	
		mergeSort(arr, 0, arr_size - 1);
	
		Console.Write("\nSorted array is \n");
		printArray(arr, arr_size);
	}
}

