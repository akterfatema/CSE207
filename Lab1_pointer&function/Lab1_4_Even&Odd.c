#include<stdio.h>
int main()
{
    int array[10],*x,even[10],*e,odd[10],*o,cEven=0,cOdd=0;
    x=&array;
    e=&even;
    o=&odd;
    for(int i=0; i<10; i++)
    {
        scanf("%d",(x+i));
    }
    for(int i=0; i<10; i++)
    {
        if(*(x+i)%2==0)
        {
            even[cEven]=*(x+i);
            cEven++;
        }
        else
        {

            odd[cOdd]=*(x+i);
            cOdd++;
        }
    }
    for(int i=0; i<cEven; i++)
    {
        printf(" %d",*(e+i));
    }
    printf("\n");
    for(int i=0; i<cOdd; i++)
    {
        printf(" %d",*(o+i));
    }
}


