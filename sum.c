#include<stdio.h>
int sum(int n1, int n2)
{
	int	sum = n1+n2;
	return sum;
}
int main()
{
 int n1,n2,Ans;
 printf("Enter the value of n1 and n2: ");
 scanf("%d%d",&n1,&n2);
Ans = sum(n1,n2);
 printf("Sum of the value is %d",Ans);
 
 return 0;
}
