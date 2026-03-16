// Write a program to accept and display 3 employee’s information using structure. 

#include<stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct employee e[3];
    int i;

    for(i=0; i<3; i++)
    {
        printf("Enter Employee ID: ");
        scanf("%d",&e[i].id);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Enter Salary: ");
        scanf("%f",&e[i].salary);
    }

    printf("\nEmployee Details:\n");

    for(i=0; i<3; i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("ID: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2f\n", e[i].salary);
    }

    return 0;
}