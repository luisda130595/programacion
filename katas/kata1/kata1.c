#include <stdio.h>

int a[] = {1, 25, 31, 4, 3, 100, 96, 8, 9, 0};
int b[] = {9, 0, 8, 96, 100, 31, 4, 3, 25, 1};
int p[10];

int main()
{
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        for (int j = 0; i < sizeof(a) / sizeof(int); j++)
        {
            if (a[i]==b[j])
            {
                p[i]=j;
                b[j] = -1;
                break;
            }
        }
    }

    printf("[");
    for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++)
    {
        printf("%d,", p[i]);
    }
    printf("]\n");

    return 0;
}