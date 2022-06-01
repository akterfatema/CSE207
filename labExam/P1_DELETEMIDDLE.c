#include<stdio.h>
int count=0;
struct node
{
    int val;
    struct node *next;
}*head=NULL,*tail=NULL;

void create(int a)
{
    struct node *temp;
    // int n,i,a;
//    printf("Enter the number of node: ");
//    scanf("%d",&n);
    //  printf("Enter the input: ");
    //  for(i=0; i<n; i++)
    //  {
    temp=(struct node *)malloc(sizeof(struct node));
    count++;
    //scanf("%d",&a);
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
    //}
// printf("%d",count);
}

void DeleteMiddle()
{
    struct node *temp1,*temp2;
    int index;

    if(count %2==0)
    {
        index = count / 2;
        for (int j = 0; j < 2; j++)
        {
            temp1=head;
            for (int i = 1; i < index; i++)
            {
                temp2 = temp1;
                temp1 = temp1->next;
            }
            temp2->next = temp1->next;
            free(temp1);

        }

    }
    else if(count%2==1)
    {
        index=(count/2);

        temp1=head;
        for(int i=0; i<index; i++)
        {
            temp2=temp1;
            temp1=temp1->next;
        }
        temp2->next=temp1->next;
        free(temp1);

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

int main()
{
    int c=1;
    int data;

    while(c==1)
    {
        scanf("%d",&data);
        if(data>0)
        {
            create(data);
        }
        else if(data<0)
        {
            c==0;
            break;
        }
    }

    DeleteMiddle();
    display();
}
