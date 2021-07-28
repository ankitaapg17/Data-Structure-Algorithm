#include <stdio.h>
#include <stdlib.h>

#define size 20

int stack[size],top_of_stack;

void Push(int [],int); //to insert elements in the stack

void Pop (int []);//to delete elements from the stack

void display(int []); //to display the elements

void main()
{
    int num=0;
    int option=0;
    top_of_stack=-1;

    while(1)
    {
        printf("\n 1: Push \n 2: Pop \n 3: Display \n 4: Exit \n Enter one of your choices: ");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
                printf("Enter the item you want to insert :");
                scanf("%d",&num);
                Push(stack,num);
            break;

            case 2:
                Pop(stack);
            break;

            case 3:
                display(stack);
            break;

            case 4:
                exit(0);

            default:
                printf("\nPlease enter a correct option\n");
            break;
        }
    }

}

void Push(int stack[],int num)
{
    if(top_of_stack==size-1)
    {
        printf("\nCannot add element, Stack is full\n");
        return;
    }
    top_of_stack++;
    stack[top_of_stack]=num;
}

void Pop(int stack[])
{
    int del_num;
    if(top_of_stack==-1)
    {
        printf("Empty Stack.\n");
        return;
    }

    del_num=stack[top_of_stack];
    top_of_stack--;
    printf("Element deleted: %d \n",del_num);
    return;
}

void display(int stack[])
{
    int i=0;
    if(top_of_stack==-1)
    {
        printf("Empty Stack .\n");
        return;
    }

    printf("Top of stack is: \n%d ",stack[top_of_stack]);
    for(i = top_of_stack ; i >=0 ; i--)
    {
        printf(" %d ",stack[i]);
    }
    printf("\n\n");
} 
