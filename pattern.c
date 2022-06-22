//Pattern String
#include <stdio.h>
#include <stdlib.h>
char str[50], pat[50], ans[50], rep[50];
int i, j, k, c, m,flag;

void pattern();
void main()
{
    printf("Enter STR: \n");
    gets(str);
    printf("Enter PAT: \n");
    gets(pat);
    printf("Enter REP: \n");
    gets(rep);
    pattern();
    printf("ans is : %s",ans);
}
void pattern()
{
    i = j = m = c = 0;
    while (str[c] != '\0')
    {
        if (str[m] == pat[i])
        {
            m++;
            i++;
            if (pat[i] == '\0')
            {
                flag = 1;
                for (k = 0; rep[k] != '\0'; k++, j++)
                {
                    ans[j] = rep[k];
                    i = 0;
                    c = m;
                }
            }
        }
        else
        {
            ans[j] = str[c];
            j++;
            c++;
            i = 0;
            m = c;
        }

    } //end of while
    if (flag == 0)
    {
        printf("notfound\n");
    }
    else
    {
        ans[j] = '\0';
        puts(ans);
    }
}