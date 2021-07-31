//Basic array operations (Insert, delete and search an element)
//Smallest and largest element in an array
//Sum of elements in an array
//Check if two arrays are the same or not
//Finding the array type
//Sum of positive square elements in an array
//Sorting the elements of an array
//Reversing an array
//Merge two sorted arrays
//Minimum scalar product of two vectors
//Maximum scalar product of two vectors
//Triplets with a given sum (hashmap)
//Symmetric pairs in a 2D array (hashing).
//Given a 2D Array swap the two rows in the matrix.
//Median of two sorted arrays
//Rearrange positive and negative elements in array.














//To find the array type (even, odd or mixed array)
#include<stdio.h>
int main()
{

	int n;
	scanf(“%d”,&n);
	int arr[n];
	int i;
	int odd = 0, even = 0;
	for(i = 0; i < n; i++)
	{
		scanf(“%d”,&arr[i]);
	}
	for(i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 1)
		odd++;
		if(arr[i] % 2 == 0)
		even++;
	}
	if(odd == n)
		printf(“Odd”);
	else if(even == n)
		printf(“Even”);
	else
		printf(“Mixed”);
	return 0;
}




//Sum of positive square elements in an array

#include <stdio.h>
#include <math.h>

int perfect(int num)
{
	int i;
    float f;
    f=sqrt((double)num);
    
    i=f;
    if(i==f) //Check if its an integer
    return num;
    else
    return 0;
	
}



int main()
{
	int num,sqnum,i,n,arr[10];
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum + perfect(arr[i]);
	}
	
	printf("The sum is: %d",sum);
	
}




#include <stdio.h>

void bubble_sort(int arr[], int n)
{
    int i, j, temp;
    //the first for loop n elements and n-1 passes
	for(i = 0; i < n; i++)  
    {
        // comparisons done at each pass
		for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
	int i,n,a[10];
	printf("Enter the size: ");
	scanf("%d",&n);
	printf("Enter the elements of an array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a,n);
	printf("The array after sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}





// C program to reverse an array

#include<stdio.h>
int main()
{

	int n;
	scanf(“%d”,&n);
	int arr[n];
	int i;
	for(i = 0; i < n; i++)
	{
		scanf(“%d”,&arr[i]);
	}
	printf(“Reversed array is:\n”);
	for(i = n-1; i >= 0; i–)
	{
		printf(“%d\n”,arr[i]);
	}
	return 0;
}



//Merge two sorted arrays
#include <stdio.h>
#include<stdlib.h>
int merge_arrays(int arr1[], int arr2[], int arr3[], int m, int n)
{
	int i,j;
	for(i = 0; i < m; i++)
	{
		arr3[i] = arr1[i]; //Array1 elements are copied
	}
	for(i = m, j = 0 ; i < m + n; i++, j++)
	{
		arr3[i] = arr2[j]; //Array2 elements are copied
	}
}


int main()
{
	int n,m,i,j;
	printf("\nEnter the size of Array 1 : ");
	scanf("%d",&m);
	printf("\nEnter the size of Array 2 : ");
	scanf("%d",&n);
	int arr1[m],arr2[n];
	int arr3[m+n];
	
	printf("\nInput the Array 1 elements : ");
	for(i = 0; i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\nInput the Array 2 elements : ");
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	merge_arrays(arr1,arr2,arr3,m,n);
	
	printf("\nThe Merged Sorted Array : ");
	for(i = 0; i < m+n-1; i++)
	{
		for(j = 0; j < m+n-i-1; j++)
		{
			if(arr3[j] > arr3[j + 1])
			{
				int temp = arr3[j];
				arr3[j ] = arr3[j + 1];
				arr3[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < n + m; i++)
	{
		printf("%d ",arr3[i]);
	}
	printf("\n");
	return 0;
}





//Find the minimum scalar product of two vectors(dot product).
//Sort the array 1 in ascending order.
//Sort the array 2 in descending order.
//Repeat from i = 1 to n
//sum = sum + (arr1[i] * arr2[i])


#include<stdio.h>

int sort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)
		for (j = 0; j < n-i-1; j++)
			if (arr[j] > arr[j+1])
				{
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
}

int sort_des(int arr[], int n)
{
	int i,j;
	for (i = 0; i < n; ++i)
		{
			for (j = i + 1; j < n; ++j)
				{
					if (arr[i] < arr[j])
						{
							int a = arr[i];		
							arr[i] = arr[j];
							arr[j] = a;
						}
				}
    	}
}

int main()
{

	int n;
	scanf(“%d”,&n);
	int arr1[n], arr2[n];
	int i;
	for(i = 0; i < n ; i++)
		{
			scanf(“%d”,&arr1[i]);
		}
	for(i = 0; i < n ; i++)
		{
			scanf(“%d”,&arr2[i]);
		}

sort(arr1, n);
sort_des(arr2, n);
int sum = 0;
	for(i = 0; i < n ; i++)
		{
			sum = sum + (arr1[i] * arr2[i]);
		}
	printf(“%d”,sum);
	return 0;
}










//To find the maximum scalar product of two vectors
//Sort the array 1 in descending order.
//Sort the array 2 in descending order.
//Repeat from i = 1 to n
//sum = sum + (arr1[i] * arr2[i])


#include<stdio.h>

int sort_des(int arr[], int n)
{
	int i,j;
	for (i = 0; i < n; ++i)
		{
			for (j = i + 1; j < n; ++j)
				{
					if (arr[i] < arr[j])
						{
							int a = arr[i];
							arr[i] = arr[j];
							arr[j] = a;
						}
					}
		}
}

int main()
{
		int n;
		scanf(“%d”,&n);
		int arr1[n], arr2[n];
		int i;
		for(i = 0; i < n ; i++)
				{
					scanf(“%d”,&arr1[i]);
				}		
		for(i = 0; i < n ; i++)
				{
					scanf(“%d”,&arr2[i]);
				}
	
		sort_des(arr1, n);
		sort_des(arr2, n);
		int sum = 0;
		for(i = 0; i < n ; i++)
			{
				sum = sum + (arr1[i] * arr2[i]);
			}
		printf(“%d”,sum);
		return 0;
}







// C program to find all the triplets with the given sum

#include

void find_all_triplets(int arr[], int n, int sum)
{
	for (int i = 0; i < n – 2; i++)
	{
		for (int j = i + 1; j < n – 1; j++)
		{
			for (int k = j + 1; k < n; k++)
				{
					if (arr[i] + arr[j] + arr[k] == sum)
					{
						printf(“%d,%d,%d\n”,arr[i],arr[j],arr[k]);
					}
			    }
		}
	}
}

int main()
{
	int n, sum;
	printf(“\nEnter the number of elements : “);
	scanf(“%d”,&n);
	int arr[n];
	printf(“\nInput the array elements : “);
	for(int i = 0; i < n; i++)
	{
		scanf(“%d”,&arr[i]);
	}
	printf(“\nEnter the sum value : “);
	scanf(“%d”,&sum);
	printf(“\nThe triplets are \n “);
	
	find_all_triplets(arr, n, sum);
	return 0;
}











// C program to find all symmetric pairs in an array

#include <stdio.h>

void symmetric_array_pair(int arr1[], int arr2[], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr1[i] == arr2[j] && arr1[j]== arr2[i])
			{
				printf("(%d,%d)\t",arr1[i],arr1[j]);
				
			}
		}
	}
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i,j;
	int arr1[m],arr2[n];
	
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	symmetric_array_pair(arr1,arr2,m,n);
	
	return 0;
}



//Swap rows in matrix
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int a[3][4],i,j,f,b;
	//A packet with 3 frame
	//Each frame of 4 bit
	
	printf("Enter the no. of frames in each packet: ");
	scanf("%d",&f); //3
	printf("Enter the no. of bit in each frame: ");
	scanf("%d",&b); //4
	for(i=0;i<f;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The data sent: \n");
	for(i=0;i<f;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	//Swap 2nd, 3rd, 1st row
	
	//Swapping element between first and last rows
	for(i=0;i<f;i++)
	{
		int t=a[0][i]; //copying the element of first row
		a[0][i]=a[f-1][i]; //copying the element of last row
		a[f-1][i]=t;
	}
	//3rd,2nd,1st
	
	//Swapping element between 3rd, 2nd
	for(i=0;i<f;i++)
	{
		int t2;
		t2=a[0][i];
		a[0][i] = a[1][i];
		a[1][i]=t2;
	}
	
	
	//Printing the modified data
	printf("The data received: \n");
	for(i=0;i<f;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	
}





//Median is an element which divides the array into two parts - left and right. 
//So the number of elements on the left side of the array will be equal or less than the number of elements on the right side.
#include <stdio.h>

int main()
{
	int a[100],b[100],n,i,j,temp;
	printf("Enter the size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//sort the array
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("The sorted array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	//Calculate the median
	if(n%2!=0)
	{
		int mid=n/2;
		printf("\nMedian is: %d",mid+1);
	}
	else
	{
		int mid=n/2;
		
		float sum=(a[mid-1]+a[mid]);
		float res=sum/2;
		printf("\nMedian is: %f",res);
	}
	
}






// C program to check if all the  numbers of an array are equal
//Input:
//3
//50 75 100
//Output:
//Yes ->{50 * 2 * 3, 75 * 2 * 2, 100 * 3} = {300, 300, 300}
//
//check the remaining elements with the first element of the array.
//If they are equal, the array can be equalized.


#include <stdio.h>

int make_equal(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
	// Divide number by 2
	while (a[i] % 2 == 0)
	a[i] /= 2;
	// Divide number by 3
	while (a[i] % 3 == 0)
	a[i] /= 3;
    }

	// Remaining numbers
	for (int i = 1; i < n; i++)
	{
		if (a[i] != a[0])
		{
			flag = 0 ;
		}
		return flag;
	}
}

int main()
{
	int n, i;
	scanf(“%d”, &n);
	int a[n];
	for(i=0; i<n; i++)
		scanf(“%d”, &a[i]);
	if (make_equal(a, n) == 1)
		printf(“Yes”);
	else
		printf(“No”);
	return 0;
}





//Rearrange positive and negative numbers in an array
//Rearrange positive and negative numbers alternatively in an array
    //Store positive elements in one array, negative elements in other. Merge two arrays.
    //In case of alternative elements, store positive in even and negative in odd positions.

#include <stdio.h>
int main()
{
	int i,j=0,k,c=0,n,num[100],pos[100],neg[100],res[100];
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
	    //int j=0;
		if(num[i]<0)
		{
			neg[j]=num[i];
			j++;
		}
		else
		{
			//int c=0;
			pos[c]=num[i];
			c++;
		}
		
	}
	printf("The positive elements are: \n");
	for(i=0;i<c;i++)
	{
		printf("%d ",pos[i]);
	}
	printf("The negative elements are: \n");
	for(i=0;i<j;i++)
	{
		printf("%d ",neg[i]);
	}
	
	printf("Rearranged array is: \n");
	for(i = 0; i < j; i++)
	{
		res[i] = neg[i]; //Array1 elements are copied
	}
	for(i = j, k = 0 ; i < c + j; i++, k++)
	{
		res[i] = pos[k]; //Array2 elements are copied
	}
	
	
	
	//In case alternative positions
	
	
	
	
	
	for(i=0;i<c+j;i++)
	{
		printf("%d ",res[i]);
	}
	
}










