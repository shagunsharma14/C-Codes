#include <stdio.h>
#include <stdlib.h>

int choice, i, n;
struct node
{
    char ssn[30];
    char name[30];
    char dept[30];
    char designation[30];
    int salary;
    int phonenum;
    struct node *rlink;
    struct node *llink;
};
struct node *start = NULL, *cur, *temp, *ptr;
void insert_beg();
void insert_end();
void delete_beg();
void delete_end();
void display();
void main()
{

    while (1)
    {
        printf("\nMENU\n1.create\t2.insert_beg\t3.insert_end\t4.display\t5.delete_beg\t6.delete_end\t7.exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the number of employee: \n");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                insert_end();
            }
            break;
        case 2:
            insert_beg();
            break;
        case 3:
            insert_end();
            break;
        case 4:
            display();
            break;
        case 5:
            delete_beg();
            break;
        case 6:
            delete_end();
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid Input\n");
        }
    }
}

void insert_beg()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter: SSN Name dept designation salary phonenum\n");
    scanf("%s%s%s%s%d%d", temp->ssn, temp->name, temp->dept, temp->designation, &temp->salary, &temp->phonenum);
    temp->llink = NULL;
    temp->rlink = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        temp->rlink = start;
        start->llink = temp;
        start = temp;
    }
}

void insert_end()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter: SSN Name dept esignation salary phonenum\n");
    scanf("%s%s%s%s%d%d", temp->ssn, temp->name, temp->dept, temp->designation, &temp->salary, &temp->phonenum);
    temp->llink = NULL;
    temp->rlink = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->rlink != NULL)
        {
            ptr = ptr->rlink;
        }
        ptr->rlink = temp;
        temp->llink = ptr;
    }
}

void delete_beg()
{
    if (start == NULL)
        printf("NULL");
    else
    {
        ptr = start;
        start = start->rlink;
       // corrected one 
       start->llink= NULL;

        free(ptr);
        ptr = NULL;
    }
}

void delete_end()
{
    if (start == NULL)
        printf("NULL");
    else if (start->rlink == NULL)
    {
        free(start);
        start = NULL;
    }
    else
    {
        ptr = start;
        cur = start;
        ptr = start->rlink;
        while (ptr->rlink != NULL)
        {
            cur = ptr;
            ptr = ptr->rlink;
        }
        ptr->llink = NULL;
        free(ptr);
        cur->rlink = NULL;
        ptr = NULL;
    }
}
void display()
{
    int count = 0;
    if (start == NULL)
    {
        printf("empty");
        return;
    }
    else
    {
        ptr = start;
        while (ptr != NULL)
        {
            printf("\nssn: %s\tname: %s\tdept: %s\tdesignation: %s\tsalary: %d\tphonenum: %d\n", ptr->ssn, ptr->name, ptr->dept, ptr->designation, ptr->salary, ptr->phonenum);
            count++;
            ptr = ptr->rlink;
        }
        printf("Number of nodes: %d\n", count);
    }
}