#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: \n");
	scanf("%d",&n);
	printf("\n");
	for(int i = 0; i< 2*n ; i++)
	{
		for(int j = 0; j< n ; j++)
		{
			if(i==n || j==0 ||i==j || (i>j && i<n)|| (i+j<2*n) && i>n)
			{
				printf("%d",j);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}