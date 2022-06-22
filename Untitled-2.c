#include<stdio.h>
int main()
{
    int n,m;
    int i,j,a[100][100];
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of m: ");
    scanf("%d",&m);

    printf("Enter the array elements: ");
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j< m; j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    for(int i =0 ; i<n; i++)
    {
        for( int j =0 ; j< m; j++)
        {
            printf("a[%d][%d] : %d ",i,j,a[i][j]);
            if(j == (m-1))
            printf("\n");
       
        }
    }
    return 0;
}
