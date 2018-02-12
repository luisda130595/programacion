#include <stdio.h>
#include <string.h>

int main()
{
    char moves[] = "UDLRLL";
    int vertical = 0;
    int horizontal = 0;

    if (((sizeof(moves) / sizeof(char)) - 1) % 2 == 1)
    {
        printf("false");
        return 0;
    }
    for (unsigned char i = 0; i < sizeof(moves) / sizeof(char); i++)
    {
        if (moves[i] == 'U')
        {
            vertical++;
        }
        else if (moves[i] == 'D')
        {
            vertical--;
        }
        else if (moves[i] == 'R')
        {
            horizontal++;
        }
        else if (moves[i] == 'L')
        {
            horizontal--;
        }
    }
    if (vertical == 0 && horizontal == 0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}