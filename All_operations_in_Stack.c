#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
struct node{
	int data;
	struct node *next;
	
}*new,*temp,*top;

push()
{
	int ele;
	new=(struct node*)malloc(sizeof(struct node));
	printf("Enter value to be inserted:");
	scanf("%d",& ele);
	if(top==NULL)
	{
		new->data=ele;
		new->next=NULL;
		top=new;
	}
	else
	{
		new->data=ele;
		new->next=top;
		top=new;
		
	}
}
pop()
{
	int ele;
	if(top==NULL)
	{
		printf("\n STACK IS EMPTY");
		
	}
	else
	{
		temp=top;
		ele=top->data;
		printf("%d is deleted", top->data);
		top=top->next;
		temp->next=NULL;
	}
}
display()
{
	if(top==NULL)
	{
		printf("STACK IS EMPTY");
	}
	else
	{
		temp=top;
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
	
}

int main()
{
	while(1)
	{
		int ch;
		printf("\n 1.Push\n 2.Pop\n 3.Display\n 4.exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
			      break;
			 case 2: pop();
			       break;
			case 3: display();
			      break;
			case 4: exit(0);
			       break;
				   	  	        
		}
	}
}
