#include<stdio.h>
char str[50],pat[50],rep[50],ans[50];
int i,j,k,c,m,flag = 0;

void pattern();//function declaration
void main()
{
    printf("Enter the string\n");
    gets(str);
    printf("Enter the pattern string\n");
    gets(pat);
    printf("Entter the replacing string\n");
    gets(rep);
    pattern();//function call
}
void pattern()
{
    i=j=c=m=0;
    while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {   
            i++;
            m++;
            if(pat[i]=='\0')
            {
                flag=1;
                for(k=0;rep[k]!='\0';k++,j++)
                {
                    ans[j] = rep[k];
                    i = 0;
                    c = m;
                }
            }
            else
            {
                ans[j] = str[c];
                j++;
                c++;
                i = 0;
                m = c;
            }//end of else
        }//end of while
        if(flag == 0)
            printf("Pattern not found\n");
        else
        {
            ans[j] = '\0';
            puts(ans);
        }
    }
}
