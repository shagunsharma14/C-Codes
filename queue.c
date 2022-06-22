//Circular Queue
#include<stdio.h>
#include<stdlib.h>
#define max 3

char q[max],elem;
int front=0,rear=-1,i;

void insert()
{
    if((front==0&&rear==max-1)||(front>0&&rear==front-1))
    printf("overflow\n");
    else
    {
        printf("enter elem:\n");
        scanf(" %c",&elem);
        if(rear==max-1&&front>0)
        {
            rear=0;
            q[rear] = elem;
        }
        else
        {
            rear++;
            q[rear] = elem;
        }

    }
}

void display()
{
    if(front==0&&rear==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        if(front>rear)
        {
            for(i=front;i<=max-1;i++)
            printf("%c\t",q[i]);
            for(i=0;i<=rear;i++)
            printf("%c\t",q[i]);
        }
        else
        {
            for(i=front;i<=rear;i++)
            printf("%c\t",q[i]);
        }
    }
}

void delete()
{
    if(front==0&&rear==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        if(front==rear)
        {
            elem = q[front];
            front=0;rear=-1;
        }
        else if(front==max-1)
        {
            elem = q[front];
            front=0;
        }
        else
        {
            elem = q[front];
            front++;
        }
    }
    printf("deleted: %c\n",elem);
}

void main()
{
    int ch;
    while(1)
    {
        printf("\nMENU\n1.insert\t2.display\t3.delete\nEnter Choice: \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert();
            break;
            case 2: display();
            break;
            case 3: delete();
            break;
            case 4: exit(0);
            default: printf("Invalid\n");
        }
    }
}