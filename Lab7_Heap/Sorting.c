
#include<stdio.h>
int array[50];
void swap(int largest,int position)
{
    int temp=array[largest];
    array[largest]=array[position];
    array[position]=temp;
}
void heapify(int size,int position)
{
    int left= position*2;
    int right=position*2 +1;
    int largest=position;
    if(left<=size && array[left]>=array[largest])
    {

        largest=left;
    }
    if(right<=size &&array[right]>array[largest])
    {
        largest=right;
    }
    if(largest!=position)
    {
        swap(largest,position);
        heapify(size,largest);
    }
}
int main()
{
    printf("Enter the size of array: ");
    int size;
    scanf("%d",&size);
    printf("Enter the elements of array: ");
    for(int i=1; i<=size; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=size/2; i>=1; i--)
    {
        heapify(size,i);
    }
    printf("\n");
    printf("Array to Max heap : ");
    for(int i=1; i<=size; i++)
    {
        printf("%d ",array[i]);
    }
    for(int i=size; i>=1; i--)
    {
        int ran=array[i];
        array[i]=array[1];
        array[1]=ran;
        heapify(i-1,1);

    }
    printf("\nMax to Sorted array : ");
    for (int i = 1; i <= size; i++)
    {
        printf("%d ", array[i]);
    }
}
