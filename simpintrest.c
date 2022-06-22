#include<stdio.h>
void main()
{
    float p,r,t,si;
    printf("Enter the value of p(principle),r(rate of intreast) and t(time) respectively: \n");
    scanf("%f %f %f",&p,&r,&t);
    si = (p*t*r)/100;
    printf("Simple intreast is : %f\n",si);



}