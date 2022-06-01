#include<stdio.h>
int Q[50];
int f=-1,r=-1;
void Enqueue(int v,int s)
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
void Dequeue(int s)
{
    for(int i=f; i<s; i++)
    {
        if(Q[i]<0&& i!=f)
        {
            for(int j=i; j<s-1; j++)
            {
                Q[j]=Q[j+1];
            }
            s--;
            r--;
            i--;
        }
        else if(Q[i]<0&& f==i)
        {

            f++;

        }

    }

}
void display()
{
    for(int i=f; i<=r; i++)
    {
        printf("%d ",Q[i]);
    }
    printf("\n");
}
int main()
{
    int n,size;
    printf("Enter the size: ");
    scanf("%d",&size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&n);
        Enqueue(n,size);
    }
    Dequeue(size);
    display();

}

