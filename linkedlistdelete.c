#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
	
}*new,*head,*tail,*temp; //global variable

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

int DELETE_at_beginning()
{
	   	temp=head;
	   	head=head->next;
	   	temp->next=NULL;
}
int DELETE_at_end()
{
	    temp=head;
	    while(temp->next!=tail)
	    {
	    	temp=temp->next;
		}
		temp->next=NULL;
		tail=temp;
}
int DELETE_at_any_position()
{
	    int i,pos;
	    printf("Enter the position:");
	    scanf("%d",&pos);
	    temp=head;
	    for(i=0;i<pos-1;i++)
	    {
	    	temp=temp->next;
	    	temp->next=temp->next->next;
		}
		
}
int Display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
main()
{
	int value;
	char ch;
	
	while(1)
	{
		printf("\n 1.INSERT at beginning\n 2.DELETE at beginning\n 3. DELETE at end\n 4. DELETE at any position\n 5. DISPLAY\n 6. Exit\n ");
		printf("Enter your choice:");
		scanf("%d",&value);
		switch(value)
		{
			case 1:INSERT_at_beginning();
			       break;
			case 2:DELETE_at_beginning();
			        break;
			case 3:DELETE_at_end();
			        break;
			case 4:DELETE_at_any_position();
			        break;
			case 5:Display();
			        break;
			case 6:exit(0);						        
		}
	}
}
