#include<stdio.h>
void sortarray(int n,int *p)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(*(p+i)>=*(p+j))
            {
                int temp= *(p+i);
                *(p+i)= *(p+j);
                *(p+j)=temp;
            }
        }

    }


}

int main()
{
    int n,array[n],*p;
    scanf("%d",&n);
    p=&array[0];
    for(int i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    sortarray(n,p);

    for(int i=0; i<n; i++)
    {

        printf("%d ",*(p+i));
    }

}
