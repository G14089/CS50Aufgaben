#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int array[100];

    for (int i = 0; i < 100; i++)
    {
        array[i] = i;
    }

    for (int i = 0; i < 100; i++)
    {
        printf("Value at the index %d: %d\n", i, array[i]);
    }
    return 0;
}
