#include<stdio.h>
int main()
{
    int a,b,c,*x,*y,*z;
    x=&a;
    y=&b;
    z=&c;
    scanf("%d%d%d",x,y,z);
    if(*x>=*y&&*x>=*z)
    {
        printf("Max = %d",*x);

    }
    else if(*y>=*x&&*y>=*z)
    {
        printf("Max = %d",*y);

    }
    else if(*z>=*y&&*z>=*x)
    {
        printf("Max = %d",*z);

    }

}
