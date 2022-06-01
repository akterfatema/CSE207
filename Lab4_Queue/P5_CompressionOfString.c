#include<stdio.h>
char Q[50];
int f=-1,r=-1;
void Enqueue(char v)
{
    if(f==-1&&r==-1)
    {
        f++;
        r++;
        Q[r]=v;
    }
    else
    {
        r++;
        Q[r]=v;
    }
}

Display()
{
    printf("Output: ");
    printf("%s",Q);
}


int main()
{
    char c[50];
    gets(c);
    int l=strlen(c);
    for (int i = 0; i < l; i++)
    {
        if (c[i] != ' ')
        {
            Enqueue(c[i]);
        }
    }
    Display();
}







