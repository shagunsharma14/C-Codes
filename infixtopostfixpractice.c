#include <stdio.h>
#include <math.h>
#include <ctype.h>

char stack[30], infix[30], symb, elem;
char postfix[30];
int top=-1,i,k=0;
void push(char elem)
{
    top++;
    stack[top] = elem;
}
char pop()
{
    elem = stack[top];
    top--;
    return elem;
}
int priority(char symb)
{
    switch (symb)
    {
    case '(':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
    case '%':
        return 3;
    case '$':
    case '^':
        return 4;
    }
}
void evaluate()
{
    for (i = 0; infix[i] != '\0'; i++)
    {
        symb = infix[i];
        if (symb == '(')
        {
            push(symb);
        }
        else if (isalnum(symb))
        {
            postfix[k] = symb;
            k++;
        }
        else if (symb == ')')
        {
            while (stack[top] != '(')
            {
                postfix[k] = pop();
                k++;
            }
            pop();
        }
        else
        {
            while (priority(stack[top]) >= priority(symb))
            {
                postfix[k] = pop();
                k++;
            }
            push(symb);
        }
    }
    while (stack[top] != '(')
    {
        postfix[k] = pop();
        k++;
    }
    postfix[k] = '\0';
}
void main()
{
    printf("enter the expression: \n");
    scanf("%s", infix);
    push('(');
    evaluate();
    printf("postfix expression is : %s\n", postfix);
}