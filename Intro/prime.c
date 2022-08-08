#include <stdio.h>
int main()
{
    int count;

    for (int j = 1; j < 50; j++)
    {
        count = 0;

        for (int i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ", j);
        }
    }

    return 0;
} 