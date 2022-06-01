#include<stdio.h>
struct node
{
    int val;
    struct node *next;
} *head=NULL,*tail=NULL;
void create()
{
    struct node *newnode;
    int num;
    printf("Enter the node number: ");
    scanf("%d",&num);
    printf("Enter the value: ");
    for(int i=0; i<num; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->val);
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
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->next;
    }

}
void RemoveDuplicate()
{
    struct node *temp=head,temp1;
    while(temp !=NULL && temp->next!=NULL)
    {
        temp1=temp;
        while(temp1->next!=NULL)
        {
            if(temp->val==temp1->next->val)
            {

                temp1->next=temp1->next->next;
                free(temp1->next);

            }

            else
            {
                temp1=temp1->next;
            }

        }
        temp=temp->next;
    }
}



int main()
{
    create();
    RevomeDuplicate();
    display();

}
