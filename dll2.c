#include<stdio.h>
#include<stdlib.h>
int choice,n,i;
struct node{
    char ssn[30];
    char name[30];
    char dept[30];
    char designation[30];
    int salary;
    int phno;
    struct node *rlink;
    struct node *llink;
};
struct node *start=NULL,*temp,*cur,*ptr;
void insert_first();
void insert_end();
void display();
void delete_first();
void delete_end();
void main()
{
    while(1)
    {
        printf("\nMenu\n1.create\t2.insert_first\t3.insert_end\t4.display\t5.delete_first\t6.delete_end\t7.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter number of nodes\n");
                    scanf("%d",&n);
                    for(i=0;i<n;i++){
                    insert_end();}
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
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter ssn name dept designation salary phno\n");
    scanf("%s%s%s%s%d%d",temp->ssn,temp->name,temp->dept,temp->designation,&temp->salary,&temp->phno);
    temp->rlink=NULL;
    temp->llink=NULL;
    if(start == NULL)
    start = temp;
    else
    {
        temp->rlink=start;
        start->llink=temp;
        start=temp;
    }
}
void insert_end()
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter ssn name dept designation salary phno\n");
    scanf("%s%s%s%s%d%d",temp->ssn,temp->name,temp->dept,temp->designation,&temp->salary,&temp->phno);
    temp->rlink=NULL;
    temp->llink=NULL;
    if(start == NULL)
    start = temp;
    else
    {
        ptr = start;
        while(ptr->rlink!=NULL)
        {
            ptr = ptr->rlink;
        }
        ptr->rlink = temp;
        temp->llink= ptr;
    }
}

void delete_first()
{
    if(start==NULL)
    printf("Empty\n");

    else if(start->rlink==NULL)
    {
        free(start);
        start=NULL;
    }
    else
    {
        ptr = start;
        start = start->rlink;
        start->llink = NULL;
        free(ptr);
        ptr = NULL;
    }
}

void delete_end()
{
     if(start==NULL)
    printf("Empty\n");
    else if(start->rlink=NULL)
    {
        free(start);
        start=NULL;
    }
    else
    {
        cur = start;
        ptr = start->rlink;
        while(ptr->rlink!=NULL)
        {
            cur = ptr;
            ptr = ptr->rlink;
        }
        free(ptr);
        cur->rlink=NULL;
        ptr=NULL;
    }
}
void display()
{
    int count=0;
    ptr = start;
    if(start == NULL)
    {
    printf("Empty\n");
    return;
    }
    else
    {
        
           while(ptr!=NULL)
        {
            printf("\n%s\t%s\t%s\t%s\t%d\t%d\n",ptr->ssn,ptr->name,ptr->dept,ptr->designation,ptr->salary,ptr->phno);
            ptr=ptr->rlink;
            count++;
        }
        printf("Number of nodes: %d\n",count);
    }
}