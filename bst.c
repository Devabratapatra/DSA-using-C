#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node* left,* right;
};
struct node* createnode(int info) 
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=info;
    newnode->left=newnode->right=NULL;
    return newnode;
}
struct node* insert(struct node* ptr, int info) 
{
    if (ptr==NULL)
        return createnode(info);
    if (info<ptr->data)
        ptr->left=insert(ptr->left,info);
    else if (info>ptr->data)
        ptr->right=insert(ptr->right,info);
    return ptr;
}
void inorderTraversal(struct node* ptr) 
{
    if (ptr!=NULL)
	{
        inorderTraversal(ptr->left);
        printf("%d ",ptr->data);
        inorderTraversal(ptr->right);
    }
}
struct node* search(struct node* ptr, int info) 
{
    if (ptr==NULL || ptr->data==info)
        return ptr;
    if (info>ptr->data)
        return search(ptr->right,info);
    return search(ptr->left,info);
}
int main() 
{
    struct node* ptr=NULL;
    int info[] = {50, 30, 20, 40, 70, 60, 80, 10};
    for (int i=0;i<sizeof(info)/sizeof(info[0]); i++) 
	{
        ptr=insert(ptr,info[i]);
    }
    printf("Inorder traversal of the BST:- ");
    inorderTraversal(ptr);
    printf("\n");
    return 0;
}