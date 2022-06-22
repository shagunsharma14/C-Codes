//Infix to postfix
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

char stack[30], postfix[30], infix[30], symb, elem;
int top = -1, i,k=0;

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
        return 4 : default : printf("invalid input");
    }
}
void evaluate()
{
    if (i = 0; infix[i] != '\0'; i++)
    {
        symb = infix[i];
        if (symb == '(')
        {
            push(symb);
        }
        else if (isalnum(symb))
        {
            postfix[k] = symb;
            k++
        }
        else if (symb == ')')
        {
            while (stack[top] != '\0')
            {
                postfix[k] = pop();
                k++
            }
        }
        pop();
        else
        {
            while (priority(stack[top]) >= priority(symb))
            {
                postfix[k] = pop();
                k++
            }
            push(symb);
        }
    }

    while (stack[top] != '\0')
    {
        postfix[k] = pop();
        k++;
    }
    postfix[k] = '\0';
}

void main()
{
    printf("Enter the expression: \n");
    scanf("%s", infix);
    push('(');
    evaluate();
    printf("postfix: %s \n",postfix);
}