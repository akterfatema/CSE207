#include<stdio.h>
int arraymin[100];
int size=0;
void swap(int position,int parent)
{
    int temp=arraymin[position];
    arraymin[position]=arraymin[parent];
    arraymin[parent]=temp;
}

void ReheapUp(int position)
{
    if(position>1)
    {
        int parent=position/2;
        if(arraymin[position]<arraymin[parent])
        {
            swap(position,parent);
            ReheapUp(parent);
            return;
        }
    }

}
void insertMin(int num)
{
    if(size==100)
    {
        printf("Heap is full!!!!");
    }
    else
    {
        size++;
        arraymin[size]=num;
        ReheapUp(size);
        return;
    }

}
void Display()
{
    for(int i=1; i<=size; i++)
    {
        printf("%d ",arraymin[i]);
    }
    printf("\n");
}
ReheapDown(int position,int lastposition)
{
    int leftChild=position*2;
    int rightChild=position*2+1;
    int smallest=position;
    if(leftChild<=lastposition && arraymin[leftChild]<arraymin[smallest])
    {
        smallest=leftChild;
    }
    if(rightChild<=lastposition && arraymin[rightChild]<arraymin[smallest])
    {
        smallest=rightChild;
    }
    if(position != smallest)
    {
        swap(smallest,position);
        ReheapDown(smallest,lastposition);
        return;
    }
}
void Delete()
{
    if(size==0)
    {
        printf("Array is empty!!");
    }
    else
    {
        int delData=arraymin[1];
        arraymin[1]=arraymin[size];
        size--;
        ReheapDown(1,size);
        return;

    }


}
void Smallest()
{
    printf("Smallest: %d",arraymin[1]);
    printf("\n");
}
int main()
{
    int n=1;
    while(n==1)
    {
        printf("=========Min Heap=======\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Smallest and largest\n");
        printf("4.Sort\n");
        printf("5.Display\n");
        printf("6.Break\n");
        printf("Choose any option: ");
        int c;
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("Enter the data: ");
            int num;
            scanf("%d",&num);
            insertMin(num);
            break;
        case 2:
            Delete();
            break;
        case 3:
            Smallest();
            break;
        case 5:
            Display();
            break;
        case 6:
            n=0;
            break;
        }

    }




}
