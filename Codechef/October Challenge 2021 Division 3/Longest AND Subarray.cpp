// C++ program to print the length of the longest
// subarray with all elements greater than X
#include <bits/stdc++.h>
using namespace std;

// Function to count number of segments
int longestSubarray(int a[], int n, int x)
{
	int count = 0;

	int length = 0;

	// Iterate in the array
	for (int i = 0; i < n; i++) {

		// check if array element
		// greater then X or not
		if (a[i] > x) {
			count += 1;
		}
		else {

			length = max(length, count);

			count = 0;
		}
	}

	// After iteration complete
	// check for the last segment
	if (count)
		length = max(length, count);

	return length;
}

// Driver Code
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(a) / sizeof(a[0]);
	int k = 7;

	cout << longestSubarray(a, n, k);

	return 0;
}

