
#include<stdio.h>
double average(int *x)
{
    double sum=0;
    for(int i=0; i<10; i++)
    {
        sum=(double)sum+*(x+i);
    }
    return sum/10;
}

void df(int *x,double d)
{
    for(int i=0; i<10; i++)
    {
        printf("%f ",d-*(x+i));
    }

}

int main()
{
    int array[10]= {10,20,30,40,50,60,70,80,90,100};
    double d=average(&array[0]);
    printf("%f\n",d);
    df(&array[0],d);
}
