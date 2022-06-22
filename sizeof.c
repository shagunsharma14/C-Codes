#include<stdio.h>
void main()
{
    int inttype;
    float floattype;
    char chartype;
    long longtype;
    double doubletype;
    // bool booltype;
    printf("int size is : %zu\n",sizeof(inttype));
    printf("float size is : %zu\n",sizeof(floattype));
    printf("char size is : %zu\n",sizeof(chartype));
    printf("long size is : %zu\n",sizeof(longtype));
    printf("double size is : %zu\n",sizeof(doubletype));
}