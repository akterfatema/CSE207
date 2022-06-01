#include<stdio.h>
#include <stdlib.h>
int top=-1;
char store[20];
void push(char a)
{
    store[top]=a;
    top++;
}
void pop()
{
    if(top==-1)
    {
        printf("Closing parentheses not matched");
        exit(0);
    }
    else
    {

        top--;
    }
}
void lastCheck()
{
    if(top==-1)
    {
        printf("Successfully complete!!!");
    }
    else
    {

        printf("Opening parentheses not end");
    }
}

void main()
{
    char array[20];
    printf("Enter any string: ");
    scanf("%s",&array);
    for(int i=0; array[i]!='\0'; i++)
    {

        if(array[i]=='(')
        {
            push(array[i]);
        }
        else if(array[i]==')')
        {
            pop();
        }

    }
    lastCheck();

}



