//Bubble sort in ascending order
//Bubble sort- Bubble sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent
//elements if they are in wrong order.
//The algo needs one whole pass without any swap to know it is sorted.


#include <stdio.h>
void sort(int a[],int n);
int main()
{
	int i;
	int arr[10]={3,2,3,5,6,4,3,2,2,8};
	printf("The array before the sort:");
	for(i=0;i<10;i++)
	printf("%d",arr[i]);
	sort(arr,10);
	printf("The array after the sort:\n");
	for(i=0;i<10;++i)
	{
		printf("%d",arr[i]);
	}
}

void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;++i)
	{
		for(j=0;j<n-i-1;++j)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}







