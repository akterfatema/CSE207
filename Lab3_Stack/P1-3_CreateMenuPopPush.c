#include<stdio.h>
struct node
{
    int val;
    struct Node *next;

}*head=NULL,*tail=NULL;
void push(int a)
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->val=a;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
}
void pop()
{
    struct node *temp=head,*temp1;
    if(temp==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        tail=temp1;
        free(temp);
    }


}

void display()
{
    if(head==NULL)
    {
        printf("There is no element!!");
    }
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {

        printf("%d ",temp->val);
        temp=temp->next;
    }

    printf("\n");
}




void main()
{
    int f=1;
    while(f==1)
    {
        printf("1. Push\n2. Pop\n3. Print\n4. Exit\n");
        printf("Enter your choice: \n");
        int n,v;
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d",&v);
            push(v);
            break;

        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            f=0;
            break;

        default:
            printf("Choose a valid option!!");

        }
    }
}

