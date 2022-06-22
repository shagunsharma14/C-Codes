#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n : \n");
	scanf("%d",&n);
	// Run first for loop for the number of times you are having rows
	for (int row = 1; row <= n ; row++)
	{
		//Identify how many colums are there in onw row number
		for(int col = 1; col <= row ; col++)
		{
			//Print the pattern
			printf(" * ");
		}
		//print a new line
		printf("\n");
	}return 0;
}