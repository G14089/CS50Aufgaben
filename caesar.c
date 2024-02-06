#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

char decrypt_char(char c, int shift);

void caesar_decrypt_string(char* str, int shift);

int main(void)
{
    string ciphertext = get_string("Enter the encrypted message: ");
    int shift = get_int("Enter the shift value: ");

    caesar_decrypt_string(ciphertext, shift);

    printf("Decrypted message: %s\n", ciphertext);

}
char decrypt_char(char c, int shift)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char ALPHABET[] = "ABCDEFGHIJKLOMNOPQRSTUVWXYZ";

    if(isalpha(c))
    {
        char* base = islower(c) ? alphabet : ALPHABET;
        int index = strchr(base, c) - base;
        return base[(index + shift + 26) % 26];
    }
    return c;
}
void caesar_decrypt_string(char* str, int shift)
{
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
        str[i] = decrypt_char(str[i], shift);
    }
}
