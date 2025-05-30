#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess;


    srand(time(0));
    secretNumber = rand() % 10 + 1; 

    printf("Guess the Number Game!\n");
    printf("I'm thinking of a number between 1 and 10.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed it right!\n");
        }

    } while (guess != secretNumber);

    return 0;
}
