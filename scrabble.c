#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    string word1 = get_string("Word 1: ");
    string word2 = get_string("Word 2: ");

    for (int i = 0; word1[i] != '\0'; i++)
    {
        word1[i] = tolower(word1[i]);
    }

    for (int i = 0; word2[i] != '\0'; i++)
    {
        word2[i] = tolower(word2[i]);
    }


    int letter_values[26];
    letter_values['a' - 'a'] = 1;
    letter_values['b' - 'a'] = 3;
    letter_values['c' - 'a'] = 3;
    letter_values['d' - 'a'] = 2;
    letter_values['e' - 'a'] = 1;
    letter_values['f' - 'a'] = 4;
    letter_values['g' - 'a'] = 2;
    letter_values['h' - 'a'] = 4;
    letter_values['i' - 'a'] = 1;
    letter_values['j' - 'a'] = 8;
    letter_values['k' - 'a'] = 5;
    letter_values['l' - 'a'] = 1;
    letter_values['m' - 'a'] = 3;
    letter_values['n' - 'a'] = 1;
    letter_values['o' - 'a'] = 1;
    letter_values['p' - 'a'] = 3;
    letter_values['q' - 'a'] = 10;
    letter_values['r' - 'a'] = 1;
    letter_values['s' - 'a'] = 1;
    letter_values['t' - 'a'] = 1;
    letter_values['u' - 'a'] = 1;
    letter_values['v' - 'a'] = 4;
    letter_values['w' - 'a'] = 4;
    letter_values['x' - 'a'] = 8;
    letter_values['y' - 'a'] = 4;
    letter_values['z' - 'a'] = 10;

    int word_value1 = 0;
    for(int i = 0; word1[i] != '\0'; i++)
    {
        if (isalpha(word1[i]))
        {
            word_value1 += letter_values[word1[i] - 'a'];
        }
    }

    int word_value2 = 0;
    for(int i = 0; word2[i] != '\0'; i++)
    {
        if (isalpha(word2[i]))
        {
            word_value2 += letter_values[word2[i] - 'a'];
        }
    }

    if (word_value1 > word_value2)
    {
        printf("%s has a higher Scrabble score.\n", word1);
    }
    else if (word_value2 > word_value1)
    {
        printf("%s has a higher Scrabble score.\n", word2);
    }
    else
    {
        printf("Both words have the same Scrabble score.\n");
    }




}
