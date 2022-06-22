#include<stdio.h>
#include<stdlib.h>
#define max 5
int i,hash[30],choice,count=0,key=0,num;
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
        printf("\nPress\n1.Insert\t2.Display\t3.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();
            break;
            case 2: display();
            break;
            case 3: exit(0);
        }
    }
}

void insert()
{
    if(count==max)
    printf("Hash Table is Full\n");
    
    
    printf("Enter the number: \n");
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
            hash[i] = num;
            count++;
            return;
        }
    }
}

void display()
{
 for(i=0;i<max;i++)
 {
     printf("hash[%d]\t--------------\t%d\n\n",i,hash[i]);
