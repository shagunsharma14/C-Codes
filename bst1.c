#include <stdio.h>
#include <stdlib.h>
int choice,n,key,l,k;
void insert();
void inorder();
void preorder();
void postorder();
void search();
struct node
{
    int info;
    struct node *llink;
    struct node *rlink;
};
struct node *root = NULL, *cur, *ptr, *temp;
void main()
{
    while (1)
    {
        printf("\n1.insert\t2.traversal\t3.search\t4.exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:printf("Enter k: \n");
        scanf("%d",&k);
        for(l=0;l<k;l++)
        insert();
        break;
        case 2:
            printf("Inorder: \t");
            inorder(root);
            printf("Postorder: \t");
            postorder(root);
            printf("Preorder: \t");
            preorder(root);
            break;
        case 3:
            search();
            break;
        case 4: exit(0);
        default:
            printf("Invalid Input");
            break;
        }
    }
}
void insert()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the number\n");
    scanf("%d", &temp->info);
    temp->rlink = NULL;
    temp->llink = NULL;
    if (root == NULL)
        root = temp;
    else
    {
        ptr = root;
        cur = root;
        while (ptr != NULL)
        {
            cur = ptr;
            if (temp->info >= cur->info)
            {
                ptr = ptr->rlink;
            }
            else
            {
                ptr = ptr->llink;
            }
        }
        if (temp->info >= cur->info)
        {
            cur->rlink = temp;
        }
        else
        {
            cur->llink = temp;
        }
    }
}

void search()
{
    int flag = 0;
    printf("Enter the key: \n");
    scanf("%d", &key);
    ptr = root;

    while (ptr != NULL)
    {
        if (key == ptr->info)
        {
            flag = 1;
            break;
        }
        if (key > ptr->info)
        {
            ptr = ptr->rlink;
        }
        else
            ptr = ptr->llink;
    }
    if (flag == 1)
        printf("Key is found:");
    else
        printf("Key not found:");
}

void inorder(struct node *root)
{
    if (root == NULL)
        return;

    inorder(root->llink);
    printf("%d\t", root->info);
    inorder(root->rlink);
}
void postorder(struct node *root)
{
    if (root == NULL)
        return;

    postorder(root->llink);
    postorder(root->rlink);
    printf("%d\t", root->info);
}

void preorder(struct node *root)
{
    if (root == NULL)
        return;
    printf("%d\t", root->info);
    preorder(root->llink);
    preorder(root->rlink);
}