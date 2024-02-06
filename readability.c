#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int calculate_coleman_liau_index(string text);

int main(void)
{
    string text = get_string("Text: ");

    int calculate_coleman_liau_index_result = calculate_coleman_liau_index(text);

    if(calculate_coleman_liau_index_result < 1)
    {
        printf("Below grade 1\n");
    }

    if(calculate_coleman_liau_index_result <= 16 && calculate_coleman_liau_index_result > 1)
    {
        printf("Grade %i\n", calculate_coleman_liau_index_result);
    }
    if(calculate_coleman_liau_index_result > 16)
    {
        printf("Above grade 16\n");
    }
}
int calculate_coleman_liau_index(string text)
{
    int letters = 0; int words = 0; int sentences = 0;

     for(int i = 0; text[i] != '\0'; i++)
    {
        if(isalpha(text[i]))
        {
            letters++;
        }
    else if(isspace(text[i]))
    {
        words++;
    }
    else if(text[i] == '.' || text[i] == '!' || text[i] == '?')
    {
        sentences++;
    }
    }
    float index = 0.0588 * ((float)letters / words * 100) - 0.296 * ((float)sentences / words * 100 ) - 15.8;
    return (int)index;

}
