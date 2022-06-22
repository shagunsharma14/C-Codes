#include<stdio.h>
int main()
{
	char s[] = "harrys";
	int len =0;
	char temp ;
	while(s[len] !='\0')
	{
		len ++;
	}
	for(int i = 0; i< (len -1)/2 ; i++)
	{
		temp = s[i];
		s[i] = s[(len-1)-i];
		s[(len-1)-i] = temp;
	
	}
	printf("The new string is : %s",s);
	return 0;
}