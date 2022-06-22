//stacks
#include<stdio.h>
#include<stdlib.h>
#define max 5

int st[max],top=-1,ch,flag,i,elem;

void push();
void display();
void pop();
void pallindrome();
void main()
{
    printf("Enter the choice: ");
    while(1)
    {
        printf("\n\tmenu\n1.push\t2.display\t3.exit\t4.pop\t5.pallindrome\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: push();
            
            break;
        case 2: display();
            break;
        case 3: exit(0);
            break;
        case 4: pop();
            break;
        case 5: pallindrome();
            break;
        default:printf("invalid input");
            break;
        }
        
    }
}
void push()
{
    printf("enter the element: ");
    scanf("%d",&elem);
    if(top==(max-1))
    printf("stackoverflow\n");
    else
    {
        top++;
        st[top] = elem;
    }
}

void display()
{
    printf("stack elements are: ");
    if(top == -1)
    printf("stackunderflow\n");
    else
    {
        for ( i = top; i >= 0; i--)
        {
            printf("%d\t",st[i]);
        }
        
    }
}

void pop()
{
    if(top == -1)
    printf("stack underflow");
    else
    {
        elem = st[top];
        top--;
        printf("poped element is :  %d \n",elem);
    }
}

void pallindrome()
{
    flag = 1;
    for(i = 0; i<=(top/2); i++)
    {
    if(st[i]!=st[top-i])
    {
        flag = 0;
        break;
    }
    }
    if(flag ==1)
    printf("stack is pallindrome");
    else
    printf("stack is not pallindrome");
}