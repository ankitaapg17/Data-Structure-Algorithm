#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
	
}*new,*head,*tail,*temp;
main()
{
	int value;
	char ch;
	do
	{
		new=(struct node*)malloc(sizeof(struct node));
		printf("Enter any value:");
		scanf("%d",&value);
		new->prev=NULL;
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
			new->prev=tail;
			tail=new;
		}
		printf("Y to continue N to exit:");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='Y');
	//display
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
