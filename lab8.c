#include<stdio.h>
#include<stdlib.h> 
struct node{
    char name[30];
    char usn[30];
    char branch[30];
    int sem[30];
    char phonenum[30];
    struct node *link;
};
struct node *start = NULL,*ptr,*cur,*temp;
void insert_first();
void insert_end();
void delete_first();
void delete_end();
void display();
void main()
{
    int choice,n,i;
    while(1)
    {
        printf("\nMenu\n1.create\t2.insert_first\t3.insert_end\t4.display\t5.delete_first\t6.delete_end\t7.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the number of student: \n");
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
            default: printf("invalid input");
        }
    }
}
void  insert_first()
{
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter name usn branch sem phonenum \n");
    scanf("%s%s%s%d%s",temp->name,temp->usn,temp->branch,&temp->sem,&temp->phonenum);
    temp->link=NULL;
    if(start==NULL)
    {
        start = temp;
    }
    else
    {
        temp->link = start;
        start = temp;
    }
}
void insert_end()
{
 temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter name usn branch sem phonenum\n");
    scanf("%s%s%s%d%s",temp->name,temp->usn,temp->branch,&temp->sem,&temp->phonenum);
    temp->link= NULL;
    if(start==NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while(ptr->link!=NULL)
        {
            ptr = ptr->link;

        }
        ptr->link=temp;
       
    }   
}

void delete_first()
{
    if(start == NULL)
    printf("NILL");
    else 
    {
        ptr = start;
        start = start->link;
        free(ptr);

    }
}
void delete_end()
{
    if(start == NULL)
    printf("NILL");
    else if(start->link==NULL)
    {
        free(start);
        start = NULL;
    }
    else
    {
        cur = start;
        ptr = start -> link;
        while(ptr->link!=NULL)
        {
            cur = ptr;
            ptr = ptr ->link;
        }
        free(ptr);
        cur->link = NULL;



    }
}

void display()
{
    int count = 0;
    ptr = start;
    while(ptr!=NULL)
    {
        printf("name: %s\tusn: %s\tbranch: %s\tsem: %d\tphonenum: %s\n",ptr->name,ptr->usn,ptr->branch,&ptr->sem,&ptr->phonenum);  
        ptr = ptr->link;     
        count++;
    }
    printf("Number of students are : %d\n",count);

}