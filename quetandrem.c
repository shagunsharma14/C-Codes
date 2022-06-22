#include<stdio.h>
void main()
{
    float a,b,rem,quot;
    printf("Etner the value of a and b: \n");
    scanf("%f %f",&a,&b);
    rem = (int)a%(int)b;
    printf("Remainder of %f/%f is : %d \n",a,b,rem);
    quot = a/b;
    printf("Quotent of %f/%f is : %f\n",a,b,quot);

}