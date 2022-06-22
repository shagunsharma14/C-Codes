#include <stdio.h>
#include <stdlib.h>
int flag = 0, n;
struct node
{
    int info;
    struct node *llink;
    struct node *rlink;
}; struct node *root = NULL, *cur, *ptr, *temp;
void create();
void search();
void create()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Element: \n");
    scanf("%d",&temp->info);
    temp->llink = NULL;
    temp->rlink = NULL;
    if (root == NULL)
        root = temp;
    else
    {
        ptr = root;
        while (ptr != NULL)
        {
            cur = ptr;
            if (temp->info >= cur->info)
                ptr = ptr->rlink;
            else
                ptr = ptr->llink;
        }
        if (temp->info >= cur->info)
            cur->rlink = temp;
        else
            cur->llink = temp;
    }
}

void search()
{
    int flag = 0,key;
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
            ptr = ptr->rlink;
        else
            ptr = ptr->llink;
    }
    if (flag == 1)
        printf("Key Found\n");
    else
        printf("Key Not Found\n");
}
void inorder(struct node *root)

{
    if (root == NULL)
        return;
    inorder(root->llink);
    printf("%d\t", root->info);
    inorder(root->rlink);
}

void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d\t", root->info);
    preorder(root->llink);
    preorder(root->rlink);
}

void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->llink);
    postorder(root->rlink);
    printf("%d\t", root->info);
}

void main()
{
   int choice;
   while(1)
   {
        printf("\nCHOOSE\n1.Create\t2.Search\t3.Display\t4.Exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:printf("no of elements:\n");
        scanf("%d",&n);
        for(int i = 0; i < n;i++)
        create();
        break;
    case 2:
        search();
        break;
    case 3:
        printf("\nPreorder Traversal: \n");
        preorder(root);
        printf("\nInorder Traversal: \n");
        inorder(root);
        printf("\nPostorder Traversal: \n");
        postorder(root);
        printf("\n");
        break;
    default:
        printf("Invalid Input\n");
    }
i