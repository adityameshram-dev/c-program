// Write a program using switch statement to check whether entered character is VOWEL or CONSONANT. 

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter Character from a to z:");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is VOWEl",ch);
        break;
    default:
        printf("%c is CONSONANT",ch);
        break;
    }
    return 0;
}

// Note this program only check alphabet not special character 