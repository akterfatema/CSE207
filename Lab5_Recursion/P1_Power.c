
#include<stdio.h>
int power(int x,int n)
{
    int res;
    if(n==0)
    {
        return 1;
    }
    else
    {
        res=x*power(x,n-1);
        return res;
    }


}
int main()
{
    printf("Enter the base and power: ");
    int x,n;
    scanf("%d%d",&x,&n);
    int r=power(x,n);
    printf("%d",r);

}
