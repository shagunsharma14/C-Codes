#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: \n");
	scanf("%d",&n);
	printf("\n");
	for(int i = 1;  i< n ; i++)
	{
		for(int j =1; j<n ; j++)
		{
			if(i==n || j == 0 || i==j || i>j )
			{
				printf("%d",i)	;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}