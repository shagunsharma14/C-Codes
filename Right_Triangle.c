#include<stdio.h>
int main()
{
	int n;
	printf("Enter the valaue of n: \n");
	scanf("%d",&n);
	for(int i = 0; i< n ; i++)
	{
		for(int j = 0; j<i;  j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i = 0; i< n ; i++)
	{
		for(int j = n-1; j>=i ; j--)
		{
			printf("*");
		}
		printf("\n");
		
	}
}