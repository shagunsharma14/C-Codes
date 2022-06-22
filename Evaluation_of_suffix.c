#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
char s[30],symb;
int stack[30],top=-1,a,b,num,elem,i,ans;

void push(int num)
{
    top++;
    stack[top] = num;
}

int pop()
{
    elem = stack[top];
    top--;
    return elem;
}

void main()
{
    printf("enter the expression: \n");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        symb = s[i];
        if(isdigit(symb))
        {
            push(symb-'0');
        }
        else
        {
            a = pop();
            b = pop();
            switch(symb)
            {
                case '+':push(b+a);
                break;
                case '-': push(b-a);
                break;
                case '*': push(b*a);
                break;
                case '/': push(b/a);
                break;
                case '%': push(b%a);
                break;
                case '$':
                case '^': push(pow(b,a));
                break;
                default: printf("Invalid Input\n");

            }
        }
    }
    ans = pop();
    printf("Evaluated expression: %d\n",ans);
}
