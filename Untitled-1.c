//Program to count even and odd numbers present in the array
#include<stdio.h>
int main()
{
    int odd,even,a[10],i,countodd=0,counteven=0;
    printf("Enter array elements: ");
    
for(int i = 0 ; i< 10; i++)
{ 
    scanf("%d",&a[i]);

    
    if(a[i]%2==0 || a[i]==0)
    {
        printf("%d is an even number present in the array\n",a[i]);
        counteven = counteven + 1;
    }

    else
    {
        printf("%d is an odd number present in the array\n",a[i]);
        countodd = countodd + 1;
    }


}
printf("odd numbers are: %d \n",countodd);
printf("even numbers are: %d\n",counteven);
 return 0; 

}