#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
	
}*new,*head,*tail,*temp;

int create()
{
	    int value;
	    new=(struct node*)malloc(sizeof(struct node));
		printf("Enter any value:");
		scanf("%d",&value);
		new->data=value;
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
}

int display()
{

	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int reverse_the_list()
{
	struct node *current,*next,*prev=NULL; //local variable
	
	current=head;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
}
main()
{
	int value;
	char ch;
	
	while(1)
	{
		printf("\n 1.CREATE list\n 2.DISPLAY\n 3.REVERSE THE LIST\n 4. Exit\n");
		printf("Enter your choice:");
		scanf("%d",&value);
		switch(value)
		{
			case 1:create();
			        break;
			case 2:display();
			        break;
			case 3:reverse_the_list();
			        break;
			case 4:exit(0);
			        break;
									        
		}
	}	
}
