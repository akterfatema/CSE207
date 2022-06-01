#include<stdio.h>
struct node
{
    int val;
    struct node *left,*right;
}*root=NULL;

struct node *insert(struct node *root,int value)
{
    if(root==NULL)
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->val=value;
        root=newnode;
        return root;
    }
    else if(value<root->val)
    {
        root->left=insert(root->left,value);
    }
    else
    {
        root->right=insert(root->right,value);
    }



}
void Siblings(struct node *root)
{
    if (root==NULL)
    {
        return;
    }
    Siblings(root->right);
    Siblings(root->left);

    if (root->left != NULL && root->right != NULL   )
    {

        printf("%d and %d are siblings", root->left->val, root->right->val);
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0; i<n; i++)
    {
        root=insert(root,array[i]);
    }

   Siblings(root);

}
