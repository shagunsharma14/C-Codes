#include<stdio.h>
#include<stdlib.h>

int a[100],ch,i,n,pos,del,elem;;
void create();
void display();
void insert();
void delete();

void main()
{
    while (1)
    {
        printf("\n Menu \n 1.Create\t 2.Display\t 3.Insert\t 4.Delete\t 5.Exite\n");
        printf("Enter the choice: \n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:create();
            break;
        case 2:display();
            break;
        case 3:insert();
            break;
        case 4: delete();
            break;
        case 5: exit(0);
        
        default: printf("Invalid Input\n");
            break;
        }
    }
    
}

void create()
{
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}

void display()
{
    printf("Array elements are: \n");
    for(i=0;i<n;i++)
    printf("a[%d] = %d\t",i,a[i]);
}
void insert()
{
    printf("Enter the pos: \n");
    scanf("%d",&pos);
    if(pos<0 || pos>=n)
        printf("Invalid Input\n");
    else
    {
        printf("Enter the element: \n");
        scanf("%d",&elem);
        for(i=n-1; i>=pos ;i--)
        {
            a[i+1] = a[i];
            a[pos] = elem;
            n =n+1;
        }
    }
}

void delete()
{
    printf("Enter the pos: \n");
    scanf("%d",&pos);
    del = a[pos];
    if(pos<0 || pos>=n)
    {
        printf("Invalid Input\n");
    } 
    else
    {
        
        for ( i = pos; i < n-1 ; i++)
        {
            a[i] = a[i+1];
            n = n-1;
            printf("The deleted element is : %d",del);
        }
        
    }
}