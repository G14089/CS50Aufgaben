#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is the name of the contact? ");
    int age = get_int("What is contacts age? ");
    string phone_number = get_string("What is the contacts phone number? ");
    printf("Name: %s, Age: %i, Phone Number: %s\n", name, age, phone_number);
}
