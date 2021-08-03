//Queue using array
//Enqueue, Dequeue


//QUEUE ADT (Abstract Data Type): A list or collection with the restriction that insertion can be performed at one end(rear)
//and deletion can be performed at other end (front).

//Front() operation simply returns the element at the front of queue
//IsEmpty() operation simply checks if the queue is empty or not.


//Enqueue always happen at the rear of the queue

//Dequeue always happen at the front of the queue



#include<stdio.h>
#include<stdlib.h>
#define MAX 50//defining the size of queue
int queue[MAX],front=-1,rear=-1;

void enqueue(int data) //function to enqueue data
{
	if(rear==MAX-1)
		printf("\nQueue is Full!");
	else
	{
		//If empty, set front=rear=0.
		rear=rear+1;
		queue[rear]=data;
		if(front==-1)
		front=0;
	}
	
}
void disp() //function to display the relents of the queue
{
	printf("\nThe elements in the queue are:");
	int i;
	if(front==-1)
		printf("\nQueue is Empty");
	else
		for(i=front;i<=rear;i++)
		{
		   
			printf("%d ",queue[i]);
		}
		printf("\n");
}
void dequeue()//function to delete elements from the queue
{
	if(front==-1||front==rear+1)
		printf("\nQueue is Empty");
	else
	{
		//If has only one element i.e. front==rear then we set front=rear=-1
		
		queue[front]=0;
		front=front+1;
	}
	disp();
}
int main() //main function for all input and output statements
{
	int data,size;
	printf("Enter the size of queue: ");
	scanf("%d",&size);
	printf("\nEnter Data to Enqueue:\n");
    for(int i=0;i<size;i++)
    {
      scanf("%d",&data);
      enqueue(data);
    }
    disp();
    printf("\nDequeuing elements:\n");
    for(int i=0;i<size;i++)
    {
        dequeue();
    }
    
}




