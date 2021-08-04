//Application of Stack, Queue, Linked List


//Application of Stack- Expression Handling (infix to postfix)
//Call Stack- During the function call and return process
//Stacks are used in backtracking problems.


//Application of Queue- 
//In Call center phone systems uses Queues to hold people calling them in an order, until a service representative is free.
//Handling of interrupts in real-time systems. The interrupts are handled in the same order as they arrive i.e. FIFO
//Serving requests on a single shared resource, like a printer, CPU task scheduling etc.


//Priority Queue: 
//A priority queue is an abstract data type similar to a regular queue or stack data structure in which each element
//additionally has a "priority" associated with it. In a priority queue, an element with high priority is served before
//an element with low priority.
//Application:
//It is used in the Dijkstra's shortest path algo, used in prim's algo, used in data compression like Huffman Coding
//Also used in operating system like priority scheduling, load balancing and interrupt handling.



//Application of Linked List:
//Image viewer- Previous and next images are linked, hence can be accessed by next and previous button.
//Previous and next page in web browser- we can access previous and next url searched in web browser by pressing back and next
//button since, they are linked as linked list.
//Music Player- Songs in music player are linked to previous and next song. You can play songs either from starting or ending of the list
//Implementation of stacks and queues.
//Implementation of graphs, dynamic memory allocation: we use LL of free blocks









#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;	
}*head=NULL,*temp,*r;
	
	void aatbeg(int);
	void aatend(int);
	void aatposbef(int,int);
	void aatposaf(int,int);
	void delatbeg();
	void delatend();
	void delatpos(int);
	void display();
	void main()
{
	int value,a,pos,n;
	temp=(struct node*)malloc(sizeof(struct node));
	while(1)
	{
	printf("\n\n1.Insert new node at begining");
	printf("\n2.Insert new node at end");
	printf("\n3.Insert new node before given node with specific value");
	printf("\n4.Insert new node afyer given node with specific value");
	printf("\n5.delete node at begining");
	printf("\n6.delete node at end");
	printf("\n7.Delete node with specific value");
	printf("\n8.display");
	printf("\n9.exit");
	printf("\nEnter ur choice:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
				printf("\nenter the element:");
				scanf("%d",&value);
				aatbeg(value);
				break;
		case 2:
				printf("\nenter the element:");
				scanf("%d",&value);
				aatend(value);
				break;
		case 3:
				printf("\nenter the element:");
				scanf("%d",&value);			
				printf("\nEnter the pos before which u want to add: ");
				scanf("%d",&pos);
				aatposbef(value,pos);
				break;
		case 4:
				printf("\nenter the element:");
				scanf("%d",&value);
				printf("\nEnter the pos after which you want to add: ");
				scanf("%d",&pos);
				aatposaf(value,pos);
				break;
		case 5:
				delatbeg();
				break;
		case 6:
				delatend();
				break;
		case 7:
				printf("Enter the pos to be deleted:\t");
				scanf("%d",&n);
				delatpos(n);
				break;				
		case 8:
				display();
				break;
	
		case 9:
				exit(0);
				break;
		default:
				printf("Invalid Choice!!");
	}
}
}
	 void aatbeg(int value)
{		
		if(head==NULL)
	{
		temp->data=value;
		temp->next=NULL;
		temp->prev=NULL;
		head=temp;	
	}
	else
	{
		temp=head;
		r=(struct node*)malloc(sizeof(struct node));
		r->data=value;
		r->next=temp;
		temp->prev=r;
		r->prev=NULL;
		head=r;
	}
}
	 void aatend(int value)
	{
	 	if(head==NULL)
	{
		temp->data=value;
		temp->next=NULL;
		head=temp;
	}
	else
		{
			temp=head;
			r=(struct node*)malloc(sizeof(struct node));
			while(temp->next!=NULL)
			temp=temp->next;
			r->data=value;
			temp->next=r;
			r->prev=temp;
			r->next=NULL;
			temp=temp->next;			
		}
}
	 void aatposbef(int value,int pos)
	 {
	 	int i;
	 	if(pos==1)
	 	{
	 		temp->data=value;
			temp->next=head->next;
			temp->prev=NULL;
			head=temp;	
		}
		else
		{
		 	temp=head;
		 	i=2;
		 	while(i<=pos-1)
		 	{
		 		temp=temp->next;
		 		i++;
			}
			r=(struct node*)malloc(sizeof(struct node));
			r->data=value;
			r->next=temp->next;
			r->prev=temp;
			temp->next=r;
		} 
	}
void aatposaf(int value,int pos)
{
		{
		 	temp=head->next;
		 	int i=2;
		 	while(i<=pos-1)
		 	{
		 		temp=temp->next;
		 		i++;
		 	}
			r=(struct node*)malloc(sizeof(struct node));
			r->data=value;
			r->next=temp->next;
			temp->next=r;
			r->prev=temp;
		}	 
} 
void display()
{
	temp=head;
	printf("linked list:\n");
	while(temp->next!=NULL)
	{
		printf("\n%d",temp->data);
		temp=temp->next;
	}
			printf("\n%d",temp->data);

}
	void delatbeg()
{
	temp=head;
	head=temp->next;
	temp->next->prev=NULL;
}
	void delatend()
{
	int i=1,c=0;
	temp=head;	
	while(temp->next!=NULL)
	{
		temp=temp->next;
		c++;
	}
	if(c==0)
	{
	
	head=temp->next;
	temp->next->prev=NULL;
}
	else
	{	
	temp=head;
	while(i<=c-1)
	{
		temp=temp->next;
		i++;
	}
	temp->next=NULL;
}
}
void delatpos(int n)
{
	int i;
	temp=head;
	if(n==1)
	{
		head=temp->next;
		temp->next->prev=NULL;
	}
	else
	{
		temp=head;
		i=2;
		printf("f1\n");
		while(i<n)
		{
			temp=temp->next;
			i++;
		}
				temp->next->next->prev=temp;
		temp->next=temp->next->next;
	}
	
}
