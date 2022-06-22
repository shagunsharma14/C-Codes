#include<stdio.h>
#include<stdlib.h>
int visited[10],g[10][10],choice,n,source;
void created();
void dfs(int i);
void create()
{
    int i ,j;
    printf("Enter number of nodes\n");
    scanf("%d",&n);
    printf("Etner the matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&g[i][j]);
        }
    }
    printf("Matrix is: \n");
      for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         printf("%d\t",g[i][j]);
        }
        printf("\n");
    }
}
void dfs(int i)
{
    int j;
    printf("%d\t",i);
    visited[i] = 1;
    for(j=0;j<n;j++)
    {
        if(visited[j]==0&&g[i][j]==1)
        {
            dfs(j);
        }
    }

}
void main()
{
    int i;
    while (1)
    {
        printf("1.create graph 2.dfs 3.exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:for(i=0;i<n;i++)
                
                    visited[i] = 0;
                    printf("Enter the source node: ");
                    scanf("%d",&source);
                    dfs(source);
                    break;
                
        case 3: exit(0);
        }
    }
    
}