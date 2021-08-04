//A data structure is a way to store and organise data in a computer, so that it can be used efficiently.


//We talk about data-structures as:
//1. Mathematical/logical models OR Abstract data types
//2. Implementation


//List/Linked list- ADT: we can store a given number of elements of any type, read elements by position, modify element at a position

//ADT- defines data structure but no implementation. (type of data we will store, operations we can perform, not going into 
//implementation details.


//Real life uses of DS:-
//Dictionary is organised as the sorted list of words
//city map- where we show data on a 2D plane (structured in a way so that we can search for a route)
//a cashbook stores data in a tabular schema



//Static list - array
//Dynamic list- array, but it is not efficient in terms of cost and memory usage.
//So we have linked list.
//Instead of asking for a large contiguous block of memory, we can ask for one unit of data at a time.



//Array vs Linked list-
//One can be good for one kind of requirement, while other ds for other kind.

//1. Cost of accessing an element for array is O(1), while for LL it is O(n).
//2. In Array we have fixed size and there is unused memory, but in linked list there is no unused memory.
//But for LL we have extra memory for pointer variables.

//3. In Array, memory maynot be available as one large block. But in LL, memory may be available as multiple small blocks.
//4. Cost of inserting an element at beginning of Array is- O(n). But in LL it is O(1).
//5. At end: for array it is- O(1), for LL it is- O(n)
//6. At ith position it is O(n).
//7. Array is easy to use.




#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	int data; //4 bytes
	struct node *next; //4 bytes- to store address of next node
	
	//address of head node gives us access of the complete list
	//time taken to access elements will be proportional to the size of the list. O(n) Insert()-O(n), delete()-O(n)
	//memory is used in more efficient way, wastage is reduced. We can make nodes and we can also free the nodes as and when we want
	
}*new,*head,*tail,*temp;




main()
{
	int value;
	char ch;
	do
	{
		//Type casting
		new=(struct node*)malloc(sizeof(struct node)); //will create a block dynamically
		//In cpp we can write    node*temp=new node();
		
		printf("Enter any value:");
		scanf("%d",&value);
		new->data=value; //(*new).data=value
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
			tail=new;
		}
		else 
		{
			tail->next=new;
			tail=new;
		}
		printf("Y to continue N to exit:");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='Y');
	
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
