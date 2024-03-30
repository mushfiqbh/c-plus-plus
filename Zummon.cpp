// Copyright: Mushfiq R.
#include <iostream>
using namespace std;

#include <stdio.h>

// Function to find the MEX of an array
int mex(int arr[], int N)
{
	int freq[N + 1];
	for (int i = 0; i <= N; i++)
	{
		freq[i] = 0;
	}

	for (int i = 0; i < N; i++)
	{
		if (arr[i] >= 0 && arr[i] <= N)
		{
			freq[arr[i]]++;
		}
	}

	int mex = 0;
	for (int i = 0; i <= N; i++)
	{
		if (freq[i] == 0)
		{
			mex = i;
			break;
		}
	}

	return mex;
}

int main()
{
	int arr[] = {1, 0, 4};
	int N = sizeof(arr) / sizeof(arr[0]);
	printf("MEX of the array: %d\n", mex(arr, N));
	return 0;
}