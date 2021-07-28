//To read a sorted array and search for an element using binary search

#include <stdio.h>
#include <conio.h>
int main()
{
	int a[30],n,i,t,low,mid,high,found=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("\n Enter the elements of the array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("\n Enter the element to search:");
	scanf("%d",&t);
	low=0;
	high=n-1;
	while(high>=low)
	{
		mid=(low+high)/2;
		if(a[mid]==t)
		{
			found=1;
			break;
		}
		else if(t<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
		if(found==0)
		{
			printf("not found");
		}
		    
		else
		{
			printf("\n Found at %d",mid);
		
		}
		    
	}

