//Stack Operation
#include <stdio.h>
#include <stdlib.h>
#define max 5
int stack[max], top = -1, i, ch, elem, flag;

void push();
void pop();
void display();
void pallindrome();

void main()
{

    while (1)
    {
        printf("\nMENU\n1.push\t2.pop\t3.display\t4.pallindrome\t5.exit\nEnter Choice: \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            pallindrome();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input\n");
        }
    }
}
void push()
{
    if (top == (max - 1))
    {
        printf("invalid\n");
    }
    else
    {
        printf("enter elem: \n");
        scanf("%d",&elem);
        top++; stack[top] = elem;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("underfoow\n");
    }
    else
    {
        elem = stack[top];
        top--;
        printf("deleted: %d\n", elem);
    }
}

void display()
{
    if (top == -1)
    {
        printf("underflow\n");
    }
    else
    {
        printf("elements are: \n");
        for (i = top - 1; i >= 0; i--)
        {
            printf("%d\t", stack[i]);
        }
    }
}

void pallindrome()
{
    flag = 1;
    for (i = 0; i <= top / 2; i++)
    {
        if (stack[i] != stack[top - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
}