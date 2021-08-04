#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	int data;
	struct node *next; //In cpp we write node *next;
	
}*new,*head,*tail,*temp; //global declaration so that it is accessible in other functions.


int INSERT_at_beginning()
{
	    int n;
		new=(struct node*)malloc(sizeof(struct node));
		printf("Enter value to insert:");
		scanf("%d",&n);
		new->data=n;
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
			tail=new;
		}
		else
		{
			new->data=n;
			new->next=head;
			head=new;
		}
}
int INSERT_at_end()
{
	    int n;
		new=(struct node*)malloc(sizeof(struct node));
		printf("Enter value to insert:");
		scanf("%d",&n);
		new->data=n;
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
			tail=new;
		}
		else
		{
		  new->data=n;
		  tail->next=new;
		  new->next=NULL;
		  tail=new;
		
		}
}
int INSERT_at_any_position()
{
	    int i,n,pos;
		new=(struct node*)malloc(sizeof(struct node));
		printf("Enter value to be inserted:");
		scanf("%d",&n);
		printf("Enter the position:");
		scanf("%d",&pos);
		
		new->data=n;
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
			tail=new; 
		}
		//Check
		
		
		for(i=1;i<pos-1;i++)  //moving to the (n-1)th position node in the linked list
    	{
        	temp=temp->next;
    	}

    	new->next=temp->next;  //Make the newly created node point to next node of ptr temp
    	temp->next=new;  	//Make ptr temp point to newly created node in the linked list
		
		
		
}
int Display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
main()
{
	int value;
	char ch;
	
	while(1)
	{
		printf("\n 1.INSERT at beginning\n 2. Insert at end\n 3. Insert at any position\n 4. DISPLAY\n 5. Exit\n ");
		printf("Enter your choice:");
		scanf("%d",&value);
		switch(value)
		{
			case 1:INSERT_at_beginning();
			        break;
			case 2:INSERT_at_end();
			        break;
			case 3:INSERT_at_any_position();
			        break;
			case 4:Display();
			        break;
			case 5:exit(0);						        
		}
	}
}
