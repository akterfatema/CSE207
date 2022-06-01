#include<stdio.h>
int store[50];
int top=-1;
void push(int n)
{
    store[top]=n;
    top++;

}
void print()
{

    for(int i=top-1; i>=-1; i--)
    {
        printf("%d",store[i]);
    }
}

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int m;
    while(number>0)
    {
        m=number%2;
        number=number/2;
        push(m);

    }
    print();



}


