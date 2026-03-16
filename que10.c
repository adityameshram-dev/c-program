// Write a C program to print day of the week by taking number from 1 to 7 using switch statement.

#include <stdio.h>

int main()
{
    int ch;

    printf("Enter Number:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("You Entered invalid day of week number");
        break;
    }
    return 0;
}