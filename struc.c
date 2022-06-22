#include<stdio.h>
int main()
{
    struct samy
    {
        char name[20];
        int age;
        float sal;
    };
    struct samy e = {"Samarth"};
    e.age = 19;
    e.sal = 18000000000000000000000000000.00;
    printf("Name : %s\nAge : %d\nSalary : %f\n",e.name,e.age,e.sal);
}