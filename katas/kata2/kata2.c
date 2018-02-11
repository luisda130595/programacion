#include <stdio.h>
#include <string.h>

char password[] = "Aaaandrea123";
int lenght = 0;
int upper = 0;
int lower = 0;
int number = 0;
int repeat = 0;

int strongPasswordChecker(char passwordinput[])
{
    if (6 <= sizeof(password) / sizeof(char) && sizeof(password) / sizeof(char) <= 20)
    {
        lenght = 1;
    }

    for (unsigned char i = 0; i < sizeof(password) / sizeof(password[0]); i++)
    {
        if (i >= 2)
        {
            if (password[i] == password[i - 1] && password[i] == password[i - 2])
            {
                repeat = 1;
            }
        }

        if (password[i] >= 'A' && password[i] <= 'Z')
        {
            upper = 1;
        }
        if (password[i] >= 'a' && password[i] <= 'z')
        {
            lower = 1;
        }
        if (password[i] >= '0' && password[i] <= '9')
        {
            number = 1;
        }
    }
    if (lenght == 0)
    {
        printf("Password is not the correct lenght, must be between 6 and 20 characters");
    }

    if (upper == 0)
    {
        printf("Password needs and upper case letter");
    }

    if (lower == 0)
    {
        printf("Password needs a lower case letter");
    }
    if (number == 0)
    {
        printf("Password needs a number");
    }
    if (repeat == 1)
    {
        printf("Password cannot have 3 concecutive characters");
    }
    if (lenght && upper && lower && number && !repeat)
    {
        printf("Strong Password");
        return 0;
    }
}

int main()
{
    strongPasswordChecker(password);
    return 0;
}