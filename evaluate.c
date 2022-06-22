//Evaluate Function
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

char s[30],symb;
int top=-1,stack[50],num,ele,i,a,b,ans=0;

void push(int num)
{
    top++;
    stack[top] = num;
}

int pop()
{
    ele = stack[top];
    top--;
    return ele;
}
void main()
{
    printf("Enter the expression: \n");
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
            a=pop();
            b=pop();
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
                case '^':
                case '$': push(pow(b,a));
                break;
                default: printf("invlid\n");

            }

        }

    }
    ans = pop();
    printf("evaluated expression is : %d\n",ans);
}