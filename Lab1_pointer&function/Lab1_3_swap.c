#include<stdio.h>
void swap(int *p,int *q)

{
    int t=*p;
    *p=*q;
    *q=t;
}
int main()
{
    int a=10,*x,b=15,*y;
    x=&a;
    y=&b;

    swap(x,y);
    printf("%d %d",a,b);
}


