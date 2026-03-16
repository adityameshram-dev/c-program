// Write a program to find length of string without using strlen() function.

#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    int i;

    printf("Enter string:- ");
    scanf("%s", s);
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    printf("length of string is %d", i);

    return 0;
}