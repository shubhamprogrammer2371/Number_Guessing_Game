/*I have written a program that generates a random number and ask the player to guess it.
If the player's guess is higher than the generated number then we will print 'Lower number please' and
if the player's guess is lower than the generated number then we will print 'Higher number please' and
if the player's guesses the right number then we will print 'the number of guesses player used to arrive at the number' */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Generating random number
    int number, guessed_number = 0, guesses = 0;
    srand(time(0));
    number = rand() % 100 + 1; // generate number between 1 and 100
    // keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 and 100 : ");
        scanf("%d", &guessed_number);
        guesses++;
        if (guessed_number > number)
            printf("Guess the Lower number from %d\n", guessed_number);
        if (guessed_number < number)
            printf("Guess the Higher number from %d\n", guessed_number);
    } while (guessed_number != number);

    printf("You have tried %d times to guess the number \"%d\"", guesses, number);

    return 0;
}
