#include<stdio.h>
int array[100];
int size=1;
void swap(int position,int parent)
{
    int random=array[position];
    array[position]=array[parent];
    array[parent]=random;

}
void ReheapUp(int position)
{
    if(position>1)
    {
        int parent=position/2;
        if(array[position]>array[parent])
        {
            swap(position,parent);
            ReheapUp(parent);
            return;
        }
    }
}
void insertion(int data)
{
    if(size==100)
    {
        printf("Array is FULL!!");
    }
    else
    {
        array[size]=data;
        ReheapUp(size);
        size=size+1;
        return;
    }
}
void Display()
{
    for(int i=1; i<size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

}

int main()
{
    int l=0;
    while(l==0)
    {
        printf("1.Insert\n");
        printf("2.Display\n");
        printf("3.Break\n");
        printf("Choose any option: ");
        int n;
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("Enter the data: ");
            int data;
            scanf("%d",&data);
            insertion(data);
            break;
        case 2:
            Display();
            break;
        case 3:
            l=9;
            break;
        }
    }

}
