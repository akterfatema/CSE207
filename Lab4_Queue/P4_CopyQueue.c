#include<stdio.h>
int Q[100],f=-1,r=-1,c=0;
int Copy[100];
void Enqueue(int s,int v)
{
    if(r+1==s)
    {
        printf("Queue is full!!!\n");

    }
    else if(f==-1&&r==-1)
    {
        f++;
        r++;
        Q[r]=v;
    }
    else
    {
        r++;
        Q[r]=v;
    }
}
void CopyQueue(int s)
{

    for(int i=f; i<=r; i++)
    {
        Copy[i]=Q[i];

    }


}
void DisplayOriginal()
{
    for(int i=f; i<=r; i++)
    {
        printf("%d ",Q[i]);
    }
    printf("\n");
}
void DisplayCopy()
{
    for(int i=f; i<=r; i++)
    {
        printf("%d ",Copy[i]);
    }
       printf("\n");
}
int main()
{
    int n=0;
    int val,s;
    printf("Enter the Size: ");
    scanf("%d",&s);
    while(n==0)
    {
        printf("1.Enqueue\n");
        printf("2.CopyQueue\n");
        printf("3.Display the original queue\n");
        printf("4.Display the copy queue\n");
        printf("5.Exit\n");
        printf("Choose any option: ");
        int a;
        scanf("%d",&a);
        switch(a)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d",&val);
            Enqueue(s,val);
            break;
        case 2:
            CopyQueue(s);
            break;
        case  3:
            DisplayOriginal();
            break;
        case  4:
            DisplayCopy();
            break;
        case 5:
            n=1;
            break;
        }

    }



}

