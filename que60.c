// Write a program to give a output 4a 3b 2c 1d for input aaaabbbccd

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "aaaabbbccd";
    int count = 0;
    int j = 0;
    while (str[j] != '\0')
    {
        char k = str[j];
        while (str[j] != '\0' && str[j] == k)
        {
            count++;
            j++;
        }
        printf(" %d%c", count, k);
        count = 0;
    }
    return 0;
}
