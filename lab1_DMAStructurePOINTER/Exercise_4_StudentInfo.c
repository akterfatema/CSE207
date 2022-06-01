#include<stdio.h>
struct studentInfo
{
    char name[20];
    char id[20];
    float cgpa;

};
int main()
{
    int num;
    scanf("%d",&num);
    struct studentInfo *p;
    p=(struct student *)malloc(sizeof(struct studentInfo) * num);
    for(int i=0; i<num; i++)
    {
        printf("Student name: ");
        scanf("%s",&(p+i)->name);
        printf("Id: ");
        scanf("%s",&(p+i)->id);
        printf("CGPA: ");
        scanf("%f",&(p+i)->cgpa);
    }
    int f=0;
    int temp=p->cgpa;
    for(int i=0; i<num; i++)
    {
        if((p+i)->cgpa>temp)
        {
            temp=(p+i)->cgpa;
            f=i;
        }
    }
    printf("%s\n",(p+f)->name);

}
