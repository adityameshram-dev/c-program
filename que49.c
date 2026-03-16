// Write a c program using pointer to read an array of characters and print them in reverse order.

#include <stdio.h>

int main()
{
    char name[50];
    char *ptr;
    int i;
    ptr = name;
    
    printf("enter the name: ");
    scanf("%s", ptr);
    i = 0;
    while (*ptr != '\0')
    {
        ptr++;
        i++;
    }
    i--;
    printf("reverse name:");
    while (i >= 0)
    {
        ptr--;
        printf("%c", *ptr);
        i--;
    }
}