//Selection sort
//The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering
// ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays
//1) The subarray which is already sorted
//2) Remaining subarray which is unsorted
//In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted 
//subarray is picked and moved to the sorted subarray
#include <stdio.h>

void selectsort(int a[],int n)
{
	int i,j;
	int min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	
}

int main()
{
	int a[100],i,n;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array before sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	selectsort(a,n);
	printf("\n The array after the sort:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
	
	
	
	
	
	
}







