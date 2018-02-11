#include <stdio.h>

int a[] = {4, 6, 2, 1, 7};
int t = 3;

int main()
{
    if ((sizeof(a) / sizeof(int)) == 2)
    {
        printf("[0,1]");
    }
    else
    {

        for (int i = 0; i < sizeof(a) / sizeof(int); i++)
        {
            int temp1 = a[i];
            int temp2 = t - temp1;
            int result[2];
            if (temp2 != temp1)
            {
                result[0] = i;
                for (int y = i + 1; y < sizeof(a) / sizeof(int); y++)
                {
                    if (a[y] == temp2)
                    {
                        result[1] = y;
                        printf("[%d,%d]", result[0], result[1]);
                        ;
                    }
                }
            }
        }
    }
    return 0;
}