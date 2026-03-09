#include <stdio.h>

int main() {
    int secretNumber = 42;   // fixed number
    int guess;
    int maxAttempts = 5;     
    int attempts = 0;

    printf("Guess the number between 1 and 100\n");
    printf("You have %d attempts\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == secretNumber) {
            printf("Congrats! You guessed it in %d attempt(s)\n", attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Too low, try higher\n");
        } else {
            printf("Too high, try lower\n");
        }

        printf("Attempts left: %d\n", maxAttempts - attempts);
    }

    if (guess != secretNumber) {
        printf("Game over! The number was %d\n", secretNumber);
    }

    return 0;
}