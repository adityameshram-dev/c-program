// Write a program to check weather a string is palindrome or not

#include <stdio.h>

int main()
{
    char org[30], temp[30];
    int i, j, count = 0;

    printf("Enter string:");
    scanf("%s", &org);
    
    i = 0;
    while (org[i] != '\0')
    {
        i++;
    }
    i--;
    j = 0;
    while (i >= 0)
    {
        temp[j] = org[i];
        i--;
        j++;
    }

    i = 0;
    while (org[i] != '\0' && temp[i] != '\0')
    {
        if (org[i] != temp[i])
        {
            count = 1;
        }
        else
        {
            count = 0;
        }
        i++;
    }
    if (count == 0)
    {
        printf("the string '%s' is palindrome", org);
    }
    else
    {
        printf("the string '%s' is not palindrome", org);
    }
    return 0;
}