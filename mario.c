#include <cs50.h>
#include <stdio.h>

void print_row(int total_levels, int current_level);

int main(void)
{
    int height = get_int("Height: ");
    for (int b = 0; b < height; b++)
    {
        print_row(height, b + 1);
    }
}
void print_row(int total_levels, int current_level)
{
    for (int i = 0; i < total_levels - current_level; i++)
    {
        printf(" ");
    }
    for (int a = 0; a < current_level; a++)
    {
        printf("#");
    }
    printf("\n");
}
