#include<stdio.h>
int main()
{
	int n;
	printf("Enter the valaue of n: \n");
	scanf("%d",&n);
	for(int i = 0; i< n ; i++)
	{
		for(int j = 0;  i>j;  j++)
		{
			printf("*");
		}
		printf("\n");
	}

}