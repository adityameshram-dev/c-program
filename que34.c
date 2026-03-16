// Write a program to print reverse string without using strrev function

#include <stdio.h>

int main()
{
    char str[40];
    int i;

    printf("Enter a string ");
    scanf("%s", &str);
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    i--;
    while (i >= 0)
    {
        printf("%c", str[i]);
        i--;
    }
}