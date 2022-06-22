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
		
			if(i==0 || j==n || i==j || i>j)
			{
				printf("%d",j)	;
			}
			
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}