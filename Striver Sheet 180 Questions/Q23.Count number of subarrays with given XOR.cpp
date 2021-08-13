// A simple C++ Program to count all subarrays having
// XOR of elements as given value m
#include <bits/stdc++.h>
using namespace std;

// Simple function that returns count of subarrays
// of arr with XOR value equals to m
long long subarrayXor(int arr[], int n, int m)
{
	long long ans = 0; // Initialize ans

	// Pick starting point i of subarrays
	for (int i = 0; i < n; i++) {
		int xorSum = 0; // Store XOR of current subarray

		// Pick ending point j of subarray for each i
		for (int j = i; j < n; j++) {
			// calculate xorSum
			xorSum = xorSum ^ arr[j];

			// If xorSum is equal to given value,
			// increase ans by 1.
			if (xorSum == m)
				ans++;
		}
	}
	return ans;
}

// Driver program to test above function
int main()
{
	int arr[] = { 4, 2, 2, 6, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int m = 6;

	cout << "Number of subarrays having given XOR is "
		<< subarrayXor(arr, n, m);
	return 0;
}
