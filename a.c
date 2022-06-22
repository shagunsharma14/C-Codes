#include <stdio.h>
#include<stdlib.h>
#define max 5
int st[max];
int top = -1;
void push();
void pop();
void peek();
void display();
void main()
{
    int ch;
    while (1)
    {
        printf("Menu\t 1.push\t 2.pop\t 3.peek\t 4.display\t 5.exit");
        printf("Enter the choice\n");
        scanf("%d",ch);
        switch (ch)
        {
        case 1: push();
            break;
        case 2: pop();
            break;
        case 3: peek();
            break;
        case 4: display();
            break;
        case 5: exit(0);
        
        default: printf("invalid input");
            break;
        }

    }
    
}
void push()
{
    int x;
    printf("Enter value: \n");
    scanf("%d", &x);
    if (top == max - 1)
    {
        printf("stackoverflow\n");
    }
    else
    {
        top++;
        st[top] = x;
    }
}
void pop()
{
    int item;
    if (top == -1)
    {
        printf("underflow");
    }
    else
    {
        item = st[top];
        top--;
        printf("%d\n", item);
    }
}
void peek()
{
    if(top ==-1)
    printf("underflow");
    else
    printf("%d",st[top]);
}
void display()
{
    int i;
    for(i= top; i>=0; i--)
    {
        printf("%d",st[i]);
    }
}