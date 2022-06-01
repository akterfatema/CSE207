#include<stdio.h>
int GraphArray[100][100];
int nodes,edges;
void Create()
{
    printf("Enter the number of nodes: ");
    scanf("%d",&nodes);
    printf("Enter the number of edges: ");
    scanf("%d",&edges);
    for(int a=0; a<edges; a++)
    {
        printf("Enter the i and j value: ");
        int i,j;
        scanf("%d%d",&i,&j);
        GraphArray[i][j]=1;
        GraphArray[j][i]=1;
    }
}
void Display()
{
    for(int i=0; i<nodes; i++)
    {
        for(int j=0; j<edges; j++)
        {
            printf("%d ",GraphArray[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n=1;
    while(n==1)
    {
        printf("1.Create Graph\n");
        printf("2.Display Graph\n");
        printf("3.Add new vertex\n");
        printf("4.Add new edge\n");
        printf("5.Delete vertex\n");
        printf("6.BFT\n");
        printf("7.DFT\n");
        printf("8.Exit\n");
        printf("Choose any option: ");
        int c;
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            Create();
            break;
        case 2:
            Display();
            break;

        }

    }
}
