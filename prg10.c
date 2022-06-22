#include<stdio.h>
int main()
{
    int x;
    x=100,30,50;
    printf("x=%d\n",x);
    x=(100,30,50);
    printf("x = %d\n",x);
    return 0;
} 