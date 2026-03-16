#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, try = 0;
    char ch;

    srand(time(0));
    num = rand() % 100 + 1; 

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a num between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        try++;

        if (guess > num) {
            printf("Too high! Try again.\n");
        } else if (guess < num) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed it in %d try.\n", try);
            break;
        }
    } while (1);

    printf("Would you like to play again? (y/n): ");
    scanf(" %c", &ch);

    if (ch == 'y' || ch == 'Y') {
        main();
    } else {
        printf("Thanks for playing! Goodbye.\n");
    }

    return 0;
}