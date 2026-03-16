// write a program to print ASCII value of character

#include <stdio.h>

int main()
{
    char a;
    printf("enter any alphabet: ");
    scanf("%c", &a);
    printf("ASCII value of '%c' is '%d' ", a, a);
    
    return 0;
}