#include<stdio.h>
#include<stdlib.h>

char str[10],pat[10],rep[10],ans[10];
int c,m,j,i,k,flag =0;
void strmch()
{
    c = m= j=0;
    while (str[c]!='\0')
    {
        if(str[m] == pat[i])
        {
            m++;
            i++;
            if(pat[i] !='\0')
            {
                flag = 1;
                for(k=0;rep[k]!='\0';k++,j++)
                {
                    ans[j] = rep[k];
                    c = m;
                    i = 0;
                }//search for the patterns again

            }
            else
            {
                ans[j] = str[c];
                m =c;
                c++;
                j++;
                i = 0;
            }
        }
    }
    ans[j] = '\0';
    

}
void main()
{
    printf("\nEnter a main string\n");
    gets(str);
    printf("\nEnter a pattern string\n");
    gets(pat);
    printf("\nEnter a replace string\n");
    gets(rep);
    strmch();   
    if(flag ==  1)
    {
        printf("\n The resultant string is \n %s",ans);
    }
    else
    {
        printf("\nPattern dosen't found\n");
    }

}
