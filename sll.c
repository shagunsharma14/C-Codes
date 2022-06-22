#include<stdio.h>
#include<stdlib.h>
int choice,i,n;
struct node{
    char name[30];
    char usn[30];
    char branch[30];
    int sem;
    char phno[30];
    struct node *link;
};
struct node *start=NULL,*cur,*temp,*ptr;

void insert_first();
void insert_end();
void display();
void delete_first();
void delete_end();

void main()
{
    while(1)
    {
        printf("\nChoice\n1.create\t2.insert_first\t3.insert_end\t4.display\t5.delete_first\t6.delete_end\t7.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter number of nodes: \n");
                    scanf("%d",&n);
                    for(i=0;i<n;i++)
                    insert_first();
            break;
            case 2: insert_first();
            break;
            case 3: insert_end();
            break;
            case 4: display();
            break;
            case 5: delete_first();
            break;
            case 6: delete_end();
            break;
            case 7: exit(0);
            default: printf("Invalid Input");
        }
    }
}

void insert_first()
{
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter name usn branch sem phno\n");
    scanf("%s%s%s%d%s",temp->name,temp->usn,temp->branch,&temp->sem,temp->phno);
    temp->link=NULL;
    if(start==NULL)
    start = temp;
    else
    {
        temp->link = start;
        start = temp;
    }
}
void insert_end()
{
    
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter name usn branch sem phno\n");
    scanf("%s%s%s%d%s",temp->name,temp->usn,temp->branch,&temp->sem,temp->phno);
    temp->link=NULL;
    if(start==NULL)
    start = temp;
    else
    {
        ptr = start;
        while(ptr->link!=NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}

void display()
{
    int count=0;
    ptr = start;
    if(start==NULL)
    printf("Empty");
    else{
    while(ptr!=NULL)
    {
        printf("\n%s\t%s\t%s\t%d\t%s\n",ptr->name,ptr->usn,ptr->branch,ptr->sem,ptr->phno);
        ptr=ptr->link;
        count++;
    }
    printf("Number of nodes are: %d\n",count);
    }
}

void delete_first()
{
    if(start==NULL)
    printf("Empty");
    else
    {
        ptr=start;
        start=start->link;
        free(ptr);
        ptr=NULL;
    }
}

void delete_end()
{
    if(start==NULL)
    printf("Empty\n");
    else if(start->link==NULL)
    {
        free(start);
        start=NULL;
    }
    else
    {
        cur = ptr;
        ptr = start->link;
        while(ptr->link!=NULL)
        {
            cur = ptr;
            ptr = ptr->link;
        }
        free(ptr);cur->link=NULL;
    }
    
}
