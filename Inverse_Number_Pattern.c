#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: \n");
	scanf("%d",&n);
	for(int i = 0;  i< n ; i++)
	{
		for(int j =0; j < n ; j++)
		{
			if(i==0 || j== n-1 || i==j|| j>=i)
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