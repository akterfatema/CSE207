#include<stdio.h>
struct node
{
    int val;
    struct node *next;

};
struct node *head=NULL,*tail=NULL;


void create()
{
    struct node *temp;
    int n,i,a;
    scanf("%d",&n);
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
struct node *reverse(struct node *head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    struct node *temp;
    temp=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return temp;
}


void display()
{
    struct node *temp;
    temp=reverse(head);
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->next;
    }
}
int main()
{
    create();
    display();
    return 0;
}

