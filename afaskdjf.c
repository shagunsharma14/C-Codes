#include<stdio.h>


void mian()
{
    int value;
    printf("Enter the value: \n");
    scanf("%d",&value);

    if((value>=97&&value<=124)&&(value>=65&&value<=89))
    printf("value is an alphabet\n");
    else
    printf("value is an digit");
}