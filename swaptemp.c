#include<stdio.h>
void main()
{
    int temp,a,b;
    a=10;
    b=20;
    printf("value of a: %d\n",a);
    printf("value of b: %d\n",b);
    temp = a;
    a = b;
    b = temp;
    printf("value of a: %d\n",a);
    printf("value of b: %d\n",b);

}