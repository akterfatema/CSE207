#include<stdio.h>
int deleteNegative(int n,int *ptr)
{

    for(int i = 0; i < n; i++)
    {
        if (*(ptr+i)<0)
        {
            for(int j=i; j<n-1; j++)
            {
                *(ptr+j) = *(ptr+j+1);
            }
            n--;
            i--;
        }
    }
    return n;
}

int main()
{
    int  n,*p;
    scanf("%d", &n);
    p = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", (p+i));
    }

    n=deleteNegative(n,p);

    for(int i=0; i<n; i++)
    {
        printf("%d ", *(p+i));
    }

}


