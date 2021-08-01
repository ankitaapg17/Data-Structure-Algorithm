//Quick sort,,,,check

//Quick sort is a divide and conquer algorithm
//1)Pick an element from the array, this element is called as pivotal element.
//2)Divide the unsorted array of elements in two arrays with values less than the pivot come in the 2nd subarray
//while all elements with values greater than the pivot come in the second sub-array. This step is called 
//the partition operation
//3)Recursively repeat the step 2 to sub-array with smaller value and seperately to the 
//sub-array of elements with larger values(until the sub-arrays are sorted).

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void quicksort(int number[25],int first, int last) //start and end index of the array that needs to be sorted
{
	int i,j,pivot,temp;
	
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
	}
	
	//Do this whole patitioning only when start is strictly less than end.
	while(i<j) //so that function stops when there is only one element
	{
		
		//Partition
		while(number[i]<=number[pivot] && i<last)
		i++;
		while(number[j]>number[pivot])
		j--;
		
		if(i<j)
		{
			temp=number[i];
			number[i]=number[j];
			number[j]=temp;
		}
	}
	temp=number[pivot];
	number[pivot]=number[j];
	number[j]=temp;
	
//	Partition(A,start,end);
//	{
//		pivot=number[end];
//		pIndex=start;
//		for(i=start;i<end-1;i++)
//		{
//			if(number[i]<=pivot)
//			{
//				swap(number[i],number[pIndex]);
//				pIndex=pIndex+1;
//			}
//		}
//		swap(number[pIndex],number[end]);
//		
//	}
	
	quicksort(number,first,j-1); //recursive call to sort the segment left of partition index
	quicksort(number,j+1,last); //recursive call to sort the segment right of partition index
	
}



int main()
{
	int i,count,number[25];
	
	printf("How many elements are there:");
	scanf("%d",&count);
	
	printf("Enter %d elements:",count);
	for(i=0;i<count;i++)
	{
		scanf("%d",&number[i]);
	}
	
	quicksort(number,0,count-1);
	
	printf("Order of sorted elements:");
	for(i=0;i<count;i++)
	{
		printf("%d",number[i]);
	}
}
 








