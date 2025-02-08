// WAP that implements a simple number guessing game. The program should generate a random number between 1 and 100
//, and the user should guess the number within a limited number of attempts. 
// Challenge: Provide hints to the user if the guessed number is too high or too low.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int randomnum, guess, attempts = 0;
    int maxAttempts = 5; 

    srand(time(0));
    randomnum = (rand() % 100) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. You have %d attempts to guess it.\n", maxAttempts);

    while (attempts < maxAttempts) 
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > randomnum) 
        {
            printf("Too high! Try again.\n");
        } 
        else if (guess < randomnum) 
        {
            printf("Too low! Try again.\n");
        } 
        else 
        {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", randomnum, attempts);
            return 0;
        }
    }
    printf("Sorry, you've used all %d attempts. The correct number was %d.\n", maxAttempts, randomnum);
}
