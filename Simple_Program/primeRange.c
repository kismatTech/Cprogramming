#include <stdio.h>
int main()
{

    for (int j = 10; j <= 20; j++)
    {
        int count = 0;
        for (int i = 2; i < j; i++)
        {

            if (j % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("%d is prime number\n", j);
        }
    }
    return 0;
}