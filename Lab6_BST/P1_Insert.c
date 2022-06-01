#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root = NULL;

struct node *insert(struct node *root,int value)
{
    if(root==NULL)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->data=value;
        root=newnode;
        return root;
    }
    else if(value<root->data)
    {
        root->left=insert(root->left,value);
    }
    else
    {
        root->right=insert(root->right,value);
    }



}

int main()
{

    int value,elements;
    printf("Enter the number of elements: ");
    scanf("%d",&elements);
    for(int i=0; i<elements; i++)
    {
        printf("Enter the element: ");
        scanf("%d",&value);
        root=insert(root,value);
    }



}



