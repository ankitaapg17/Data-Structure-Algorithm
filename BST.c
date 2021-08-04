//Binary tree- each node can have atmost 2 children

//Types-
//Strict/Proper binary tree- each node can have either 2 or 0 children

//Complete Binary tree- all levels except possibly the last are completely filled and all nodes are as left as possible

//Maximum no. of nodes at level i = 2^i

//Perfect binary tree- all levels will be completely filled. It is also a complete binary tree.
//Balanced binary tree- difference between height of left and right subtree for every node is not more than k(mostly 1)
//diff=|height of left subtree - height of right subtree|

//If h is the height of the binary tree- max no. of nodes= 2^0 + 2^1 + 2^2 +....+2^h= 2^(h+1) -1 = 2^(no. of levels) -1


//Height of empty tree=-1


//What data structure will you use to store a modifiable collection
//We want to search,insert,remove element from collection:
//Binary search tree- a binary tree in which for each node, value of all the nodes in left subtree is lesser or equal 
//and value of all the nodes in right subtree is greater.

//Insert- O(log n)

#include <stdio.h>
#include <conio.h>

//We keep track of the address of root node

struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;
}*root;


void insert()
{
	int n;
	BstNode* newNode = (BstNode*)malloc(sizeof(BstNode));
	printf("Enter the value: ");
	scanf("%d",&n);
	
}





int main()
{
	root=NULL; //setting tree as empty
	
}










