// CPP program to remove duplicates
// from unsorted array
#include <bits/stdc++.h>
using namespace std;

// Function to remove duplicate from array
void removeDuplicates(int arr[], int n)
{
	unordered_set<int> s;

	// adding elements to LinkedHashSet
	for (int i = 0; i < n; i++)
		s.insert(arr[i]);

	// Print the elements of LinkedHashSet
	cout << "[ ";
	for (auto x : s)
		cout << x << " ";
	cout << "]";
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 5, 1, 7, 2, 4, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	removeDuplicates(arr, n);
}

