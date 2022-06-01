
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
struct node *searching(struct node *root,int n)
{
    if(root==NULL)
    {
        return NULL;

    }
    else if(n==root->data)
    {
        return root;
    }
    else if(n<root->data)
    {
        searching(root->left,n);
    }
    else if(n>root->data)
    {
        searching(root->right,n);
    }

}
struct node *Minimum(struct node *root)
{
    if(root->left==NULL)
    {
        return root;
    }
    else
    {
        Minimum(root->left);
    }
}
struct node *Maximum(struct node *root)
{
    if(root->right==NULL)
    {
        return root;
    }
    else
    {
        Maximum(root->right);
    }
}
int main()
{

    int a=1;
    while(a==1)
    {
        printf("1.Insert\n");
        printf("2.Pre-order\n");
        printf("3.Post-order\n");
        printf("4.In-order\n");
        printf("5.Search\n");
        printf("6.FindMin\n");
        printf("7.FindMax\n");
        printf("8.Exit\n");
        printf("------------------\n");
        printf("Choose a option: ");
        int b;
        scanf("%d",&b);
        switch(b)
        {
        case 1:

            printf("Enter the value: ");
            int v;
            scanf("%d",&v);
            root=insert(root,v);
            break;

        case 2:
            printf("Pre-order: ");
            PreOrder(root);
            printf("\n");
            break;

        case 3:
            printf("Post-order: ");
            PostOrder(root);
            printf("\n");
            break;
        case 4:
            printf("In-order: ");
            InOrder(root);
            printf("\n");
            break;
        case 5:

            printf("\nEnter the element for searching: ");
            int n;
            scanf("%d",&n);
            struct node *temp=searching(root,n);
            if(temp==NULL)
            {
                printf("Not Available\n");
            }
            else
            {
                printf("Available\n");
            }
            break;
        case 6:
            printf("Minimum: ");
            struct node *min;
            min=Minimum(root);
            printf("%d",min->data);
            printf("\n");
            break;
        case 7:
            printf("Maximum: ");
            struct node *max;
            max=Maximum(root);
            printf("%d",max->data);
            printf("\n");
            break;
        case 8:
            a=0;
            break;

        }
    }
}




