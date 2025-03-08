#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, guessno = 1;
    srand(time(0));
    number = rand() % 100 + 1; // it generates random number betwen 1 to 100
    // printf("The number is %d \n", number);
    //  keep running until number is guessed....

    do
    {
        printf("Guess the number between 1 to 100:\n");
        scanf("%d", &guess);

        if (guess < number)
        {
            printf("higher number please\n");
        }

        else if (guess > number)
        {
            printf("lower number please\n");
        }

        else
        {
            printf("Your guess is in %d attempts\n", guessno);
        }
        guessno++;
    } while (guess != number);

    return 0;
}