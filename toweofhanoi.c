//Towe of Hanoi
#include<stdio.h>
#include<math.h>
int n,x;

void tower(int n,char a,char b,char c)
{
    if(n==1)
    {
        printf("move disk from %c to %c\n",a,c);
        return;
    }
    tower(n-1,a,c,b);
    printf("move disk from %c to %c\n",a,c);
    tower(n-1,b,a,c);

}
void main()
{
    printf("enter the value of n: \n");
    scanf("%d",&n);
    tower(n,'a','b','c');
    x = pow(2,n)-1;
    printf("number of chances taken : %d\n",x);
}