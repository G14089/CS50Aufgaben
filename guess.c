#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = 5;

    int guess = get_int("What is your guess? ");

    if (guess != number)
    {
        printf("Wrong guess!\n");
        return 0;
    }
    else (guess = number);
    {
        printf("You are correct!");
    }
    printf("\n");
}
