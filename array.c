//array
#include<stdio.h>
#include<stdlib.h>

int a[30],n,i,ch,pos,ele,del;
void create();
void insert();
void display();
void delete();

void main()
{
    while(1)
    {
        printf("\nMAIN\n1.create\t2.insert\t3.display\t4.delete\t5.exit\n");
        printf("CHOOSE\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: create();
            break;
            case 2: insert();
            break;
            case 3: display();
            break;
            case 4: delete();
            break;
            case 5: exit(0);
            default: printf("Invalid Input\n");
        }
    }
}
void create()
{

    printf("Enter the size: \n");
    scanf("%d",&n);
    printf("enter the element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display()
{
    printf("Elements are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void insert()
{
    printf("enter position: \n");
    scanf("%d",&pos);
    if(pos<0||pos>=n)
    {
        printf("Invalid\n");
    }
    else
    {
        printf("enter element: \n");
        scanf("%d",&ele);
        for(i=n-1;i>=pos;i--)
        {
            a[i+1] = a[i];
            a[pos] = ele;
            n++;
        }
    }
}
void delete()
{
    printf("enter the position: \n ");
    scanf("%d",&pos);

    del = a[pos];
    if(pos<0||pos>=n)
    {
        printf("Invalid\n");
    }
    else
    {
        for(i=pos;i<n-1;i++)
        {
        a[i] = a[i+1];
        n--;
        }
    }
    printf("deleted: %d\n",del);
}
