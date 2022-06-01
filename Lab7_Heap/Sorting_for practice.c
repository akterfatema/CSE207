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
    int left=position*2;
    int right=position*2+1;
    int smallest=position;
    if(left<=size && array[left]<array[position])
    {
        smallest=position;
    }
    if(right<=size &&array[right]<array[largest])
    {
        smallest=right;
    }
    if(smallest!=position)
    {
        swap(smallest,position);
        heapify(size,smallest);
    }
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    printf("Enter the elements");
    for(int i=1; i<=size; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=size/2; i>=1; i++)
    {
        heapify(size,i);
    }
    printf("\n");
    printf("Array to Min heap : ");
    for(int i=1; i<=size; i++)
    {
        printf("%d ",array[i]);
    }

}
