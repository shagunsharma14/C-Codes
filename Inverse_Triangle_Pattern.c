#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: \n");
	scanf("%d",&n);
	//Number of lines = number of rows
	for(int i = n; i>=1; i--)
	{
		//How many columns are there in a row number
		for(int j = i; j>=1; j--)
		{
			//Print the pattern
			printf(" * ");
		}
		//new line
		printf("\n");
	}
}