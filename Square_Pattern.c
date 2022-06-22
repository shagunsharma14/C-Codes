//Square Pattern
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n: \n");
	scanf("%d",&n);
	//Run outer loop for number of times we are having lines = no of rows
	for( int i = 1; i <= n ; i++)
	{
		// Identify how many coloumns are there in a row number
		for(int j = 1; j <= n; j++)
		{
			//Print the pattern 
			printf(" * ");
		}
		// Add a new line
		printf("\n");
	}
	
}