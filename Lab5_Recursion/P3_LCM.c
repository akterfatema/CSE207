#include<stdio.h>


int LCM(int n,int m)
{
    static int a=0;
    if(n>m)
    {
        a=a+n;
        if((a%n==0)&&(a%m==0))
        {
            return a;
        }
        else
        {
            return LCM(n,m);
        }

    }
    else
    {
        a=a+m;
        if((a%n==0)&&(a%m==0))
        {
            return a;
        }
        else
        {
            return LCM(n,m);
        }


    }

}
int main()
{
    int n,m;
    printf("Enter two integer for LCM: ");
    scanf("%d%d",&n,&m);
    int r=LCM(n,m);
    printf("%d",r);


}
