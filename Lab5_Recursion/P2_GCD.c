
#include<stdio.h>
int gcd(int x,int n)
{
    if(x==0)
    {
        return n;
    }
    else if(n==0)
    {
        return x;
    }
    else
    {
        return gcd(n,x%n);
    }


}
int main()
{
    printf("Enter the numbers: ");
    int x,n;
    scanf("%d%d",&x,&n);
    int r=gcd(x,n);
    printf("%d",r);

}

