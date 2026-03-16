// Write a program to demonstrate use of strcmp ( ), strcpy ( ), strlen ( ), strcat ( ).

#include <string.h>
#include <stdio.h>

int main()
{
    char s1[20] = "Good";
    char s2[20] = "Night";
    int len, res;

    len = strlen(s1);
    printf("Length of s1 is %d\n", len);

    strcpy(s1, s2);
    printf("This is string1 = %s\n", s1);

    strcat(s1, s2);
    printf("This string is concat %s\n", s1);

    res = strcmp(s1, s2);
    if (res == 0)
    {
        printf("Both strings are equal\n");
    }
    else if (res < 0)
    {
        printf("s1 is less than s2\n");
    }
    else
    {
        printf("s1 is greater than s2\n");
    }

    return 0
}