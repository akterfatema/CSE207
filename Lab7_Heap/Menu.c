#include<stdio.h>
int array[100];
int size=0;
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
        size++;
        array[size]=data;
        ReheapUp(size);
        return;
    }
}
void Display()
{
    for(int i=1; i<=size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

}
void ReheapDown(int position,int lastposition)
{
    int leftChild = (position*2);
    int rightChild = (position*2)+1;
    int largest=position;
    if((leftChild<=lastposition) &&  (array[leftChild]>array[largest]))
    {
        largest=leftChild;
    }
    if((rightChild<=lastposition) && (array[rightChild]>array[largest]))
    {
        largest=rightChild;
    }
    if(largest!=position)
    {
        swap(largest,position);
        ReheapDown(largest,lastposition);
        return;
    }
}

void Delete()
{
    if(size==0)
    {
        printf("There is no element!!");

    }
    else
    {
        int deletedata=array[size];
        array[1]=array[size];
        size=size-1;
        ReheapDown(1,size);
        return;
    }
}
void smallest()
{
    int tempsmall=array[1];
    for(int i=1; i<=size; i++)
    {
        if(array[i]<tempsmall)
        {
            tempsmall=array[i];
        }
    }
    printf("Smallest: %d",tempsmall);
    printf("\n");

}
void largest()
{
    printf("Largest: %d",array[1]);
    printf("\n");
}
int main()
{
    int l=0;
    while(l==0)
    {
        printf("-------MAX HEAP-------\n");
        printf("1.Insert\n");
        printf("2.Display\n");
        printf("3.Delete\n");
        printf("4.Smallest and largest\n");
        printf("5.Sort\n");
        printf("6.Break\n");
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
            Delete();
            break;
        case 4:
            smallest();
            largest();
            break;
        case 6:
            l=9;
            break;
        }
    }

}

