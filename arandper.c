#include<stdio.h>
void main()
{
   float ar,per,len,ber;
    printf("Enter length: \n");
    scanf("%f",&len);
    printf("Enter breadth: \n");
    scanf("%f",&ber);

    ar = len*ber;
    printf("area of rectangle is : %f\n",ar);
    per = 2*(len+ber);
    printf("Perimeter of rectangle is : %f\n",per);
}