/* Write a C program using structure to accept details of 5 students having data members
Name, Roll No., Percentage, City
and display their grade (Distinction, Pass, Fail) based on percentage.
*/

#include<stdio.h>

struct student
{
    char name[50];
    int roll;
    float per;
    char city [50];
};
int main () {
    int i;
    struct student e[5];
    for(i=0; i<5; i++) {
        printf("Enter Student Name,Roll No., Percentage and City:- ");
        scanf(" %[^\n]",&e[i].name);
        scanf(" %d",&e[i].roll);
        scanf(" %f",&e[i].per);
        scanf(" %[^\n]",&e[i].city);
        
    }
    printf("\t STUDENT INFORMATION \n");
    for(i=0; i<5; i++) {
        if(e[i].per>75)
        {
            printf("\nStudent Name :- %s",e[i].name);
            printf("\nStudent Roll :- %d",e[i].roll);
            printf("\nStudent Grade :- Distinction with %.f%% ",e[i].per);
            printf("\nStudent City :- %s\n",e[i].city);
        }
        else if(e[i].per>=40)
        {
            printf("\nStudent Name :- %s",e[i].name);
            printf("\nStudent Roll :- %d",e[i].roll);
            printf("\nStudent Grade :- Pass with %.f%% ",e[i].per);
            printf("\nStudent City :- %s\n",e[i].city);
        }
        else
        {
            printf("\nStudent Name :- %s",e[i].name);
            printf("\nStudent Roll :- %d",e[i].roll);
            printf("\nStudent Grade :- Fail with %.f%% ",e[i].per);
            printf("\nStudent City :- %s\n",e[i].city);
        }
    }

    return 0;
}