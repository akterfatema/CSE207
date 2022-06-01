
#include<stdio.h>
int max=8;
int store[10];
int top=-1;
void push(int a)
{
    store[top]=a;
    top++;
}
void pop()
{
    if(top==-1)
    {
        printf("There is no element here!!!");
        exit(0);
    }
    else
    {

        top--;
    }
}
void printTop()
{
    int i;
    if(top==-1)
    {
        printf("No Element here!!!");
        exit(0);
    }
    else
    {
        for( i=-1; i<top; i++)
        {
            printf("%d \n", store[i]);
        }
    }

}

int main()
{
    int l=0;
    while(l==0)
    {
        printf("-------Menu------\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("------------------\n");
        printf("Choose any option:  ");
        int c;
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("Enter the item: ");
            int i;
            scanf("%d",&i);
            push(i);
            break;

        case 2:
            pop();
            break;
        case 3:
            printTop();
            break;

        case 4:
            l=1;
            break;

        }

    }
}
