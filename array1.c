#include<stdio.h>
int main()
{
    int i, j, n, m, a[2][3];

    printf("Enter the value of a[i][j] : ",i,j);
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            
            printf(" a[%d][%d] : %d",i,j,a[i][j]);
            if (j == 2)
            printf("\n");
        }
        
    }
    return 0;

}