//To read an array and search for an element using linear search
#include <stdio.h>
main()
{
	int i,a[10],r,j,n,temp;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("The sorted array is:");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	printf("The element to be searched");
	scanf("%d",&r);
	for(i=0;i<n;i++)
	{
		if(a[i]==r)
		{
			printf("\n element found");
		}
	}
	
	
	
}
