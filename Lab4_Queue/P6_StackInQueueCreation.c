#include<stdio.h>
int stack[50];
top=-1;
int Q[50];
int f=-1,r=-1;
void push(int n)
{
    top++;
    stack[top]=n;
    // printf("hi");
}

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
void pop(int n)
{
    for(int i=0; i<n; i++)
    {

        Enqueue(stack[top],n) ;
        top--;
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
        push(n);
    }
    pop(size);
    display();

}
