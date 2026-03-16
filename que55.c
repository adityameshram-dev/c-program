// Write a program to check entered year is leap year or not

#include <stdio.h>

int main()
{
    int yr;
    printf("enter year: ");
    scanf("%d", &yr);

    if (yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0)
    {
        printf(" %d is lip year", yr);
    }
    else
    {
        printf(" %d is not lip year", yr);
    }

    return 0;
}