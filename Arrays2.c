//Arrays are disjoint or not
//Array is a subset of another array or not
//Minimum sum of absolute difference of given array
//Array rotation - Left and right
//Equilibrium index of an array
//Longest palindrome in an array
//Non-repeating elements of an array
//Count distinct elements of an array
//Repeating elements in an array
//Remove duplicate elements in an array


//Sum of all odd frequency elements in an array (hashmap)
//Frequency of characters in a string (hashmap).
//Frequency of each element of an array (hashmap).



//Not done
//Longest subarray having an average greater than or equal to k
//Patterns of 0(1+)0 in the given string
//Count common subsequence in two strings
//Check if two strings match where one string contains wildcard characters
















//Array is disjoint or not.
//Two arrays are said to be disjoint if they have no elements in common.
// C program to check if the given arrays are disjoint

#include <stdio.h>
#include <stdlib.h>

int disjoint_arrays(int arr1[], int arr2[], int n, int m)
{
	int i,j;
	for(i = 0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr1[i] == arr2[j])
			return -1;
		}
	}
	return 1;
}

int main()
{
	int m,n;
	printf(“\nEnter the size of array 1 : “);
	scanf(“%d”,&n);
	printf(“\nEnter the size of array 2 : “);
	scanf(“%d”,&m);
	int arr1[n];
	int arr2[m];
	int i;
	printf(“\nInput Array 1 elements : “);
	for(i=0;i<n;i++)
	{
		scanf(“%d”,&arr1[i]);
	}
	printf("\nInput Array 2 elements : ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	int res = disjoint_arrays(arr1,arr2,n,m);
	
	if(res == -1)
		printf("\nThe arrays are not disjoint\n");
	else
		printf("\nThe arrays are disjoint\n");
	return 0;
}







// C program to check if an array is a subset of another array

#include<stdio.h>

int isSubset(int arr1[], int arr2[],int m, int n)
{
	int i = 0;
	int j = 0;
	//Iterate array2 in first for loop
	//Check if all the element in array2 is present in array1 or not.
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if(arr2[i] == arr1[j])
			break; //if it is present, we will come out of the loop and check for another one
		}
		
		if (j == m) //if one of the element is not present and we have analysed all the element of array1
		return 0;//false
	}
	
	return 1;
}

int main()
{
	int m,n;
	printf("\nEnter the size of array 1 : ");
	scanf("%d", &m);
	printf("\nEnter the size of array 2 : ");
	scanf("%d", &n);
	int arr1[m],arr2[n];
	int i;
	printf("\nEnter the array 1 elements : ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nEnter the array 2 elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	if(isSubset(arr1, arr2, m, n))
		printf("\nArray2 is a subset of Array1\n ");
	else
		printf("\nArray2 is not a subset of Array1\n");
	
	
	return 0;
}











//The given input array is sorted.
//For the first element of the array, its minimum absolute difference is calculated using the second array element.
//For the last array element, its minimum absolute difference is calculated using the second last array element.
//For the other array elements, minimum absolute difference for an element at index is calculated as follow:
//minAbsDiff= min( abs(arr[i] arr[i-1]), abs(ar[i] arr[i+1]) ).

// C program to find the sum of minimum absolute difference of the array

#include <stdio.h>
#include <conio.h>
int min(int a, int b)
{
	if(a>b)
		return b;
	else
		return a;
}

// Function to find absolute sum
int abs_sum(int arr[], int n)
{

	int sum = 0;
	
	sum += abs(arr[0] – arr[1]); 
	sum += abs(arr[n-1] – arr[n-2]);
	
	for (int i=1; i<n-1; i++)
		sum += min(abs(arr[i] – arr[i-1]), abs(arr[i] – arr[i+1]));  // Total sum of absolute difference
	
	return sum;
}

// Function to sort the elements

void sort(int a[], int n)
{
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-i-1; j++)
		{
			if (a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main()
{
	int a[20], n, i;
	scanf(“%d”, &n);
	for(i=0; i<n; i++)
	{
		scanf(“%d”, &a[i]);
	}
	sort(a, n);
	printf(“The minimum sum of absolute is %d”,abs_sum(a, n));
	return 0;
}










//Left rotation means rotating the elements of the array in a clockwise direction to the specified number of positions.
#include <stdio.h>
#include <conio.h>


void left_rotate_by_one(int arr[], int n)
{

	/* Shift operation to the left */
	int temp = arr[0], i;
	for (i = 0; i < n - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[i] = temp;
}

void array_left_rotate(int arr[], int no_of_rotations, int n)
{
	int i;
	for (i = 0; i < no_of_rotations; i++)
		left_rotate_by_one(arr, n);   // Function is called for no_of_rotations times 
}

int main()
{
	int i;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);  
	printf("\nArray elements before rotating : ");
	for(i = 0; i < n; i++)
	{
		printf("%d",arr[i]);    
	}
	int no_of_rotations = 1;  // Number of rotations to take place
	
	array_left_rotate(arr, no_of_rotations, n);
	
	printf("\n\nArray elements after rotating : \n");
	for(i = 0; i < n; i++)
	{
		printf("%d",arr[i]);   // Printing the array elements after rotation of elements
	} 
	printf("\n");
	return 0;
}





//Right rotation means rotating the elements of the array in the anti-clockwise direction to the specified number of positions.
#include <stdio.h>


void right_rotate_by_one(int arr[], int n)
{

    /* Shift operation to the right */
	int temp = arr[n - 1], i;
	for (i = n - 1; i > 0; i--)
	    arr[i] = arr[i - 1];
	arr[0] = temp;
}
//1 3 5 7 9 11
//11 1 3 5 7 9
void array_right_rotate(int arr[], int no_of_rotations, int n) 
{
	for (int i = 0; i < no_of_rotations; i++)
		right_rotate_by_one(arr, n);      
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr) / sizeof(arr[0]);    
	
	printf("\nArray elements before rotating : \n");
	for(int i = 0; i < n; i++)
	{
	    printf("%d",arr[i]);     
	}
	
	int no_of_rotations = 1;
	
	array_right_rotate(arr, no_of_rotations, n);
	
	printf("\n\nArray elements after rotating : \n");
	
	for(int i = 0; i < n; i++)
	{
	    printf("%d",arr[i]);    // Printing the array elements after rotation of elements
	}
	printf("\n");
	return 0;
}





//Equilibrium index of an array is an index such that.
//Sum of elements at lower indexes = Sum of elements at higher indexes.
//Outer loop iterates through all the element and the inner loop check out 
//whether the current index picked by the outer loop is either equilibrium index or not.



// C program to find the equilibrium index of an array

#include <stdio.h>

int equilibrium_index(int arr[], int n)
{
	int i, j;
	int leftsum, rightsum;
	
	for (i = 0; i < n; ++i)
	{
	
	leftsum = 0;
	for (j = 0; j < i; j++)
	    leftsum += arr[j];
	
	rightsum = 0;
	for (j = i + 1; j < n; j++)
	    rightsum += arr[j];
	
	if (leftsum == rightsum)
	return i;
    }

	return -1;
}

int main()
{
	int n;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nInput the array elements : ");
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEquilibrium Index : %d\n", equilibrium_index(arr, n));
	return 0;
}





// c program to find Largest palindrome in an array
//Sort the array in ascending order.
//Start traversing the array from the end.
//The first number which is a palindrome is the required answer.
//If no palindromic number is found then print -1

#include <stdio.h>  
int main()  
{
    int n, i , j, temp, rem, num;
    printf("Enter size of both array : ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter elements of array 1 : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    //sorting of array in ascending order
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
           if(arr1[i]>arr1[j])
            {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }
    for(i=n; i>=0; i--)
    {
        num = 0;
        temp = arr1[i];
        while(arr1[i]!=0)
        {
            rem = arr1[i] % 10;
            num = num*10 + rem;
            arr1[i] = arr1[i]/10;
        }
        if(num==temp)
        {
            printf("longest pallindrome: %d",num);
            break; //so that it stops after printing the first longest pallindrome
        }
    }
    return 0;
}  





#include <stdio.h>
//Count the frequency of each element.
//If it is equal to 1, Print the elements of new array
  
int main()  
{
    int n, i , j, count=0, unique = 0;;
    printf("enter size : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        count = 0;
        for(j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}  


//Make the array unique. i.e it should contain only distinct element.
//Print the number of distinct element and distinct elements also.

#include <stdio.h>  
int main()  
{
    int n, i , j, count=0, unique = 0;;
    printf("enter size : ");
    scanf("%d",&n);
    int arr[n];
    int newarr[n];
    printf("enter elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        count = 0;
        for(j=0;j<=i;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            newarr[unique] = arr[i];
            unique++;
        }
    }
    printf("total distinct number of element : %d",unique);
    for(i=0; i<unique; i++)
    {
        printf("%d ",newarr[i]);
    }
    return 0;
}  





//Start traversing the array and check if the current element is already encountered
//If it is already encountered, print the element as a repeating element and continue
//If not, move to the next element of the array and continue

//Find repeating elements in an array
#include<stdio.h>
void repeating_element(int arr[], int n)
{
	int i, j;
	int count = 0;
	printf("Repeating elements are: ");
	for(i = 0;i < n;i++)
	{
		for(j = i+1;j < n;j++)
		{
			if(arr[i] == arr[j])
			{
				printf("%d ", arr[j]);
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	repeating_element(arr,n);
	return 0;
}




//Remove duplicate elements
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
	int arr[MAX_SIZE];
	int size;
	int i,j,k;
	
	printf("Enter size of the array:");
	scanf("%d",&size);
	
	printf("Enter elements in array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	//Find duplicate elements
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			//If duplicate element found
			if(arr[i]==arr[j])
			{
				//Delete the current duplicate element
				for(k=j;k<size-1;k++)
				{
					arr[k]=arr[k+1];
				}
				
				//Decrement size after removing duplicate element
				size--;
				
			}
		}
	}
	
	printf("Elements after deleting: ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
}






// CPP program to find the sum of all odd
// occurring elements in an array

#include <bits/stdc++.h>
using namespace std;

// Function to find the sum of all odd
// occurring elements in an array
int findSum(int arr[], int N)
{
	// Store frequencies of elements
	// of the array
	unordered_map<int, int> mp;
	for (int i = 0; i < N; i++)
		mp[arr[i]]++;

	// variable to store sum of all
	// odd occurring elements
	int sum = 0;

	// loop to iterate through map
	for (auto itr = mp.begin(); itr != mp.end(); itr++) {

		// check if frequency is odd
		if (itr->second % 2 != 0)
			sum += (itr->first) * (itr->second);
	}

	return sum;
}

// Driver Code
int main()
{
	int arr[] = { 10, 20, 20, 10, 40, 40, 10 };

	int N = sizeof(arr) / sizeof(arr[0]);

	cout << findSum(arr, N);

	return 0;
}





/* C Program to Find the Frequency of Characters in a String */

#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i;
	int freq[256] = {0};
	gets(str);
	for(i = 0; str[i] != ‘\0’; i++)
	{
		freq[str[i]]++;
	}
	for(i = 0; i < 256; i++)
	{
		if(freq[i] != 0)
		{
			printf(“%c %d\n”, i, freq[i]);
		}
	}
	return 0;
}


/* C program to find the frequency of each element of array */

#include <stdio.h>

int main()

{
	int arr[100], freq[100];
	int size, i, j, count;
	
	printf(“nEnter size of array: “);
	scanf(“%d”, &size);
	
	printf(“nEnter elements in array: “);
	for(i=0; i<size; i++)
	{
		scanf(“%d”, &arr[i]);
	/* Initially initialize frequencies to -1 */
		freq[i] = -1;
	}
	
	
	for(i=0; i<size; i++)
	{
		
		count = 1;
		for(j=i+1; j<size; j++)
		{
		    /* If duplicate element is found */
			if(arr[i]==arr[j])
			{
				count++;
			/* Make sure not to count frequency of same element again */
				freq[j] = 0;
			}
		}
		
	    /* If frequency of current element is not counted */
		if(freq[i] != 0)
		{
		freq[i] = count;
		}
	}
	
	
	/* Print frequency of each element */
	printf(“nFrequency of all elements of array : n”);
	for(i=0; i<size; i++)
	{
		if(freq[i] != 0)
		{
			printf(“%d occurs %d timesn”, arr[i], freq[i]);
		}
	}
}






/* C++ program to find the frequency of each element of an array using hashing*/

#include <bits/stdc++.h> 

using namespace std;

void countFreq(int arr[], int n) 

{ 
	unordered_map<int, int> mp;
	// Traverse through array elements and count frequencies 
	for (int i = 0; i < n; i++) 
	mp[arr[i]]++;
	// Traverse through map and print frequencies 
	for (auto x : mp) 
	cout << x.first << ” occurs ” << x.second << ” times ” << endl; 
}
int main() 
{ 
	int n;
	cout << “nEnter the number of elements : “;	
	cin >> n;
	cout << “nInput the array elements : “;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	countFreq(arr, n); 
	return 0; 
}
