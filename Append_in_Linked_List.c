#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
	
}*new,*head,*tail,*temp,*t,*h;

int FirstLL()
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
		temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
		
}
int SecondLL()
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

int append()
{
	int i,j,c=0,d=0,a[10],b[10],e;
	temp=head;
	for(i=1;temp!=NULL;i++)
	{
		a[i]=temp->data;
		temp=temp->next;
		c++;
	}
	t=h;
	for(i=1;t!=NULL;i++)
	{
		b[i]=t->data;
		t=t->next;
		d++;
	}
	e=c;	
	for(i=1;i<=c;i++);
	for(j=1;j<=d;j++)	
	{
		a[i]=b[j];
		i++;
		e++;
			printf("\ne:%d\n",e);
	}
	printf("Linked List is:\n");
	for(i=1;i<=e;i++)
	printf("%d\n",a[i]);

}

main()
{
	int i,n,choice;
	while(1)
	{
	
	printf("\n 1.First linked list\n 2.Second linked list\n 3.Appended linked list\n 4.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: FirstLL();
		        break;
		case 2: SecondLL();
		        break;
		case 3: append();
			    break;
		case 4: exit(0);
				break; 
	}
  }
}
