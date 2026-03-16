// Write a program to show the use of structure using pointer

#include <stdio.h>

struct students
{
    int roll;
    char name[50];
};
int main()
{
    struct students s1;
    struct students *sptr;
    sptr = &s1;
    printf("enter student roll no. and name");
    scanf("%d%s", &sptr->roll, &sptr->name);
    printf("name is %s\n", sptr->name);
    printf("roll no %d\n", sptr->roll);
}
