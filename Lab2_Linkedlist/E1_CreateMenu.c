#include<stdio.h>
struct node
{
    int val;
    struct node *next;
}*head=NULL,*tail=NULL;

void create()
{
    struct node *temp;
    int n,i,a;
    printf("Enter the number of node: ");
    scanf("%d",&n);
    printf("Enter the input: ");
    for(i=0; i<n; i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&a);
        temp->val=a;
        temp->next=NULL;
        if(head==NULL)
        {

            head=temp;
            tail=temp;
        }
        else
        {
            tail->next =temp;
            tail=temp;

        }




    }
}
void display()
{
    struct node *temp;
    temp=head;
    printf("Output: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->next;
    }
    printf("\n");
}
void insertAtThebeBeginning()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value for first position: ");
    scanf("%d",&newnode->val);
    newnode->next=NULL;
    if(head==NULL)
    {

        head=newnode;
        tail=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }


}
void InsertAtTheMid()
{
    int pos,i,a,b;

    struct node *newnode,*temp,*temp1;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value for any position: " );
    scanf("%d",&a);
    printf("Enter the position number: ");
    newnode->val=a;
    newnode->next=NULL;

    scanf("%d",&pos);

    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        printf("This position does not exist!!");
    }
    else
    {

        temp=head;
        for(i=0; i<pos; i++)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=newnode;
        newnode->next=temp;

    }

}
void DeleteTheEndNode()
{
    struct node *temp,*temp1;
    if(head!=NULL)
    {
        temp=head;
        while(temp->next!=NULL)
        {

            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        free(temp);
        tail=temp1;
    }
}
void del_beg()
{

    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
}
void DeleteAny()
{
    int i,a;
    struct node *temp,*temp1;
    printf("Enter the position: ");
    scanf("%d",&a);
    if(head!=NULL)
    {
        temp=head;
        for(i=0; i<a; i++)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=temp->next;
        free(temp);
    }
}
int main()
{
    create();
    int n;
    int flag=0;
    while(flag==0)
    {
        printf("1. Insert node at beginning\n");
        printf("2. Insert node at any position\n");
        printf("3. Delete Node from last position\n");
        printf("4. Delete Node from beginning\n");
        printf("5. Delete Node from any position\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Choose any option: \n");
        scanf("%d",&n);
        if(n==1)
        {
            insertAtThebeBeginning();
        }
        else if(n==2)
        {
            InsertAtTheMid();

        }
        else if(n==3)
        {
            DeleteTheEndNode();

        }
        else if(n==4)
        {
            del_beg();
        }
        else if(n==5)
        {
            DeleteAny();

        }
        else if(n==6)
        {

            display();

        }
        else if(n=7)
        {
            break;

        }
        else
        {
            printf("Please enter a valid number!!");
        }
    }

}
