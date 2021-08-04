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
int number_of_nodes()
{
	int count=0;
	temp=head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	printf("\ncount=%d\n",count);
}
main()
{
	int value;
	char ch;
	
	while(1)
	{
		printf("\n 1.CREATE list\n 2.DISPLAY\n 3.NUMBER OF NODES\n 4. Exit\n");
		printf("Enter your choice:");
		scanf("%d",&value);
		switch(value)
		{
			case 1:create();
			        break;
			case 2:display();
			        break;
			case 3:number_of_nodes();
			        break;
			case 4:exit(0);
			        break;
									        
		}
	}
	
		
}
	


