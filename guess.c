/*
Program creates random number and then request user to guess number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

   int i, n;
   /* Number of guess */
   int guesses = 0;
   /* Holds value of user's guess */
   int userGuess = 0;

    /* Intializes random number generator */
   srand((unsigned)time(NULL));

   /* Creates random number */
   int random = rand() % 100 + 1;
   /* Print Statements */
   printf("Please guess a number between 1 and 100.\n");
   while(guesses < 7) {
        /* Checks if amount of guesses is over 7 */
        if (guesses > 7) {
            printf("\n You ran out of guesses. Guesses made: 7");
            break;
        }
        /* Scan for user input */
        scanf("%d", &userGuess);
        if (userGuess > random) {
            printf("\n TOO LARGE!\n");
            guesses++;
        }
        /* If userGuess is less than random state too small */
        else if (userGuess < random) {
            printf("\n TOO SMALL!\n");
            guesses++;
        }
        /* If user guess equal to the random number */
        else if (userGuess == random) {
            printf("\n You guessed correctly in %d tries!", guesses + 1);
        }
        }

   return(0);
}
