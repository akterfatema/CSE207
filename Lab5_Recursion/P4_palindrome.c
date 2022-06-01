#include<stdio.h>
int reverse(int n)
{

    int digit=(int)log10(n);
    if(n==0)
    {
        return 0;
    }
    else
    {
        return ((n%10*pow(10,digit))+reverse(n/10));
    }

}

void palindrome(int n,int r)
{
    if(n==r)
    {
        printf("Palindrome!!");
    }
else{
    printf("Not Palindrome!!");
    }
}



int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int r=reverse(n);
    palindrome(n,r);

}
