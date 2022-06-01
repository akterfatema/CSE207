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
void PreOrder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        PreOrder(root->left);
        PreOrder(root->right);


    }

}
void PostOrder(struct node *root)
{
    if(root!=NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ",root->data);

    }

}
void InOrder(struct node *root)
{
    if(root!=NULL)
    {
        InOrder(root->left);
        printf("%d ",root->data);
        InOrder(root->right);
    }

}
void searching(struct node *root,int n)
{

   if(n==root->data)
    {
        printf("Available");
    }
    else if(root->left==NULL && root->right==NULL)
    {
        printf("Not available");
    }
    else if(n<root->data)
    {
        searching(root->left,n);
    }
    else
    {
        searching(root->right,n);
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
    printf("Pre-order: ");
    PreOrder(root);
    printf("\nPost-order: ");
    PostOrder(root);
    printf("\nIn-order: ");
    InOrder(root);
    int num;
    printf("\nEnter the element for searching: ");
    scanf("%d",&num);
    searching(root,num);


}




