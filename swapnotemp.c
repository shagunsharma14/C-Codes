#include<stdio.h>
void main()
{
    int a=10,b=20;
    printf("value of a: %d\n",a);
    printf("value of b: %d\n",b);
    a = a+b;
    b =a-b;
    a=a-b;
    printf("value of a: %d\n",a);
    printf("value of b: %d\n",b);
}