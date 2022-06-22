#include<stdio.h>
int powe(int number, int power)
{
	int val=1;
	for(int i =0; i<power; i++)
	{
		val = val*number;
	}
	return val;
}
int main()
{
	int number,power;
	printf("Enter the value of number : \n");
	scanf("%d",&number);
	printf("Enter the value of power : \n");
	scanf("%d",&power);
	powe(number,power);
	printf("The %d of %d  is : %d",number,power,powe(number,power));
	
}