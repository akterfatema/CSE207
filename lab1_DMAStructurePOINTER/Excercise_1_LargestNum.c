#include<stdio.h>
int main()
{
    int n,*p;
    scanf("%d",&n);
    p = (int *)malloc(sizeof(int) * n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    int temp=*p;
    for(int i=0; i<n; i++)
    {
        if(*(p+i)>temp)
        {
            temp=*(p+i);
        }
    }
    printf("%d",temp);


}
