#include <bits/stdc++.h>
using namespace std;

// A recursive function to find all
// indices of a number
int AllIndexesRecursive(int input[], int size,int x, int output[])
{	
	// If the input array becomes empty
	if(size == 0)
		return 0;

		
	// Getting the recursive answer
	int smallAns = AllIndexesRecursive(input, size - 1, x, output);
	
	// If the last element of input array is equal to x
	if(input[size - 1] == x)
	{
	// Insert the index of last element of the input array into the output array
	// And increment ans
	output[smallAns++] = size - 1;
	}
	return smallAns;
}

// Function to find all indices of a number
void AllIndexes(int input[], int n, int x)
{
	int output[n];
	int size = AllIndexesRecursive(input, n,
								x, output);
	for (int i = 0; i < size; i++) {
		cout << output[i] << " ";
	}
}

// Driver Code
int main()
{
	int arr[] = { 1, 2, 3, 2, 2, 5 }, x = 2;
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
	// Function call
	AllIndexes(arr, n, x);
	
	return 0;
}
