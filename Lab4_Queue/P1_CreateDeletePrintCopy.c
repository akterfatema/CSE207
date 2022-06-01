
#include<stdio.h>
int Q[100],f=-1,r=-1,c=0;
void Enqueue(int s,int v)
{
    if(c==s)
    {
        printf("Queue is full!!!\n");

    }
    else if(f==-1&&r==-1)
    {
        f++;
        r++;
        Q[r]=v;
        c++;
    }
    else
    {
        r=(r+1)%s;
        Q[r]=v;
        c++;
    }
}
void Dequeue(int s)
{
    if(c==0)
    {
        printf("Queue is empty!!\n");

    }
//    else if(f==-1&&r==-1)
//    {
//        printf("Queue is empty!!\n");
//
//    }

    else if(f==r||c==1)
    {
        //printf("%d",Q[f]);
        f=-1;
        r=-1;
        c--;
    }
    else
    {
        //printf("%d",Q[f]);
        f=(f+1)%s;
        c--;
    }


}
void Display(int s)
{
    if(f==0)
    {
        for(int i=f; i<=r; i++)
        {

            printf("%d ",Q[i]);
        }

        printf("\n");
    }

    else if(r==-1&&f== -1)
    {

        printf("There is no element!!\n");

    }
    else
    {
        for(int i=0; i<f; i++)
        {

            printf("%d ",Q[i]);
        }


        for(int i=f; i<s; i++)
        {

            printf("%d ",Q[i]);
        }

        printf("\n");
    }

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
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
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
            Dequeue(s);
            break;
        case  3:
            Display(s);
            break;
        case 4:
            n=1;
            break;
        }

    }



}


