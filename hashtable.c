#include<stdio.h>
#include<stdlib.h>
#define max 5
int i, hash[10],choice,key=0,count=0,num,n;

void insert();
void display();

void main()
{
    for(i=0;i<max;i++)
    {
        hash[i] = -1;
    }
    while(1)
    {
        printf("\nChoice\n1.insert\t2.display\3.exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1://printf("Enter total num: n\n");
        //         scanf("%d",&n);
                for(i=0;i<max;i++){
                     insert();
                    // break;
                    }
                    break;
            
        case 2: 
            display();
        break;

        case 3: exit(0);
        default: printf("Invalid Input");
            break;
        }
    }
}
void display()
{
    for(i=0;i<max;i++){
        printf("%d\t%d\n",i,hash[i]);
    }
}
void insert()
{
    if(count==max)
    {
    printf("Table is Full\n");
    return;
    }
    printf("Enter the number\n");
    scanf("%d",&num);
    key = num%max;
    if(hash[key]==-1)
    {
        hash[key] = num;
        count++;
    }

    else
    {
        printf("Collission!\n");
        for(i=key+1;i<max;i++)
        {
            if(hash[i]==-1)
            {
                hash[i] = num;
                count++;
                return;
            }
        }
        for(i=0;i<key;i++)
        {
            if(hash[i]==-1)
            {
                hash[i] = num;
                count++;
                return;
            }
        }
    }
}
