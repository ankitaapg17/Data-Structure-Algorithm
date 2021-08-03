//Queue using linked list: Array will have a fixed size, using LL we can overcome this.
//for implementing queue we need not to define the size of the queue and it can work on the infinite number of values.



#include<stdio.h>
#include<stdlib.h>

struct node{
	int data; //to store data
	struct node *next; //to store address of next node
	
}*new,*rear,*front,*temp;

//a pointer to node named front,rear
//in global scope, so it will be accessible to all functions
//NULL is a macro for address zero


enqueue()
{
	int ele;
	new=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value to be inserted:");
	scanf("%d",& ele);
	new->data=ele;
	new->next=NULL;
	if(rear==NULL)
	{
		front=new;
		rear=new;
	}
	else
	{
		rear->next=new;
		rear=new;
	}
}

dequeue()
{
	if(front==NULL)
	printf("Queue is empty:");
	else
	{
		temp=front;
		front=front->next;
		temp->next=NULL;
		free(temp);
	}
}

display()
{
	temp=front;
	if(front==NULL)
	{
		printf("QUEUE IS EMPTY");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}

int main()
{
	rear=NULL;
    front=NULL;
	
		while(1)
	{
		int ch;
		printf("\n 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: enqueue();
			      break;
			 case 2: dequeue();
			       break;
			case 3: display();
			      break;
			case 4: exit(0);
			       break;
				   	  	        
		}
}
}
