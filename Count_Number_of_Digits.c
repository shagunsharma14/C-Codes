#include<stdio.h>
int main()
{	
	int n, count= 0;
	printf("Enter the value of n : \n");
	scanf("%d",&n);
	printf("\n");
	
	
	while(n!=0)
	{
		n = n/10;
		count ++;
	}
	printf("There are %d digits in your number",count);
	return 0;
}