//Sorting elements of an array by frequency (hashmap).
//Sort an array according to the order defined by another array
//Replace each element of the array by its rank in the array






#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Used for sorting by frequency. And if frequency is same,
// then by appearance
bool sortByVal(const pair<int, int>& a,
					const pair<int, int>& b)
{

	// If frequency is same then sort by index
	if (a.second == b.second)
		return a.first < b.first;
	
	return a.second > b.second;
}

// function to sort elements by frequency
vector<int>sortByFreq(int a[], int n)
{

	vector<int>res;
	unordered_map<int, int> m;
	vector<pair<int, int> > v;
	for (int i = 0; i < n; ++i) 
	{
		// Map m is used to keep track of count
		// of elements in array
		m[a[i]]++;	
    }
	// Copy map to vector
	copy(m.begin(), m.end(), back_inserter(v));
	// Sort the element of array by frequency
	sort(v.begin(), v.end(), sortByVal);
	for (int i = 0; i < v.size(); ++i)
		while(v[i].second--) //one by one print the frequency and reduce the count
		{
			//	res.push_back(v[i].first);
			cout<<v[i].first<<" ";
		}
	
	//return res;
	cout<<endl;
}

// Driver program
int main()
{
	int a[] = { 2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8 };
	int n = sizeof(a) / sizeof(a[0]);
	vector<int>res;
	res = sortByFreq(a, n);
	for(int i = 0;i < res.size(); i++)
			cout<<res[i]<<" ";
}





#include <iostream>
#include <algorithm>

using namespace std;

// Binary search
int first(int arr[], int low, int high, int x, int n)
{
	if (high >= low)
	{
		int mid = low + (high-low)/2; /* (low + high)/2; */
		if ((mid == 0 || x > arr[mid-1]) && arr[mid] == x)
			return mid;
		if (x > arr[mid])
			return first(arr, (mid + 1), high, x, n);
			return first(arr, low, (mid -1), x, n);
	}
	return -1;
}

// Sort according to the second array’s order
void sort_according(int arr1[], int arr2[], int m, int n)
{

	int temp[m], visited[m];
	for (int i=0; i<m; i++)
	{
		temp[i] = arr1[i];
		visited[i] = 0;
	}
	
	// Sort elements
	sort(temp, temp + m);
	
	int ind = 0;

	for (int i=0; i<n; i++)
	{
		// Find index of the first occurrence of arr2[i] in temp
		int f = first(temp, 0, m-1, arr2[i], m);
		
		// If not present, no need to proceed
		if (f == -1) continue;
		
		// Copy all occurrences of arr2[i] to arr1[]
		for (int j = f; (j<m && temp[j]==arr2[i]); j++)
		{
			arr1[ind++] = temp[j];
			visited[j] = 1;
		}
	}
	
	// Now copy all items of temp[] which are not present in arr2[]
	for (int i=0; i<m; i++)
		if (visited[i] == 0)
		arr1[ind++] = temp[i];
}

// Function to print an array
void print_array(int arr[], int n)
{
	for (int i=0; i<n; i++)
	cout << arr[i] << ” “;
	cout << endl;
}

int main()
{
	int m,n;
	cout << “\nEnter the size of array 1 : “;
	cin >> m;
	cout << “\nEnter the size of array 2 : “;
	cin >> n;
	int arr1[m];
	cout << “\nInput the array 1 elements : “;
	int i;
	for(i = 0; i < m; i++)
		cin >> arr1[i];
	
	int arr2[n];
	cout << “\nInput the array 2 elements : “;
	for(i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}
	cout << “\nThe Sorted array : “;
	sort_according(arr1, arr2, m, n);
	print_array(arr1, m);
	cout << endl;
	return 0;
}
















// C++ program  to replace each element by its rank in the given array

#include <iostream>
#include <unordered_map>

using namespace std;

void transform(int arr[], int n)
{
	map<int, int> map;
	for (int i = 0; i < n; i++)
		map[arr[i]] = i;
	int rank = 1;
	for (auto i: map)
		arr[i.second] = rank++; // i.second stores the index of element i
}

int main()
{
	int n;
	cout <<“\nEnter the number of elements : “;
	cin >> n;
	int arr[n];
	cout << “\nInput the array elements : “;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	// transform the array
	transform(arr, n);
	
	cout <<“\nAfter ranking : “;
	for (int i = 0; i < n; i++)
		cout << arr[i] << ” “;
	
	return 0;
}

