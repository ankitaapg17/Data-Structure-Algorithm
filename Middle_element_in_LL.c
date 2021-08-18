#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
}*slow,*head,*fast,*new,*temp,*tail;


int getMiddleNode(struct node *head)
{
	
	slow=fast=head;
	
	if(head!=NULL)
	{
		while(fast!=NULL && fast->next!=NULL)
		{
			slow=slow->next;
			fast=fast->next->next;
			
		}
		printf("The middle element of the LL is: %d",slow->data);
			
	}
}

int main()
{
		int value;
	char ch;
	do
	{
		
		new=(struct node*)malloc(sizeof(struct node)); 
		
		
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
	
	
	//To print the data
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	
	getMiddleNode(head);
	
	
}


