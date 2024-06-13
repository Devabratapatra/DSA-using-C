#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};
struct node*create()
{
	int x;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter an element(-1 to exit):");
	scanf("%d",&x);
	if(x==-1)
	{
		return 0;
	}
	newnode->data=x;
	printf("Enter an left child:%d\n",x);
	newnode->left=create();
	printf("Enter an right child:%d\n",x);
	newnode->right=create();
	return newnode;
}
void display(struct node*temp)
{
	if(temp!=NULL)
	{
		printf("\n%d",temp->data);
		display(temp->left);
		display(temp->right);
	}
}
void main()
{
	struct node *root;
	root=0;
	root=create();
	printf("The binary tree is:");
	display(root);
}