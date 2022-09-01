#include <stdio.h>
int main()
{
    int rem;
    for (int i = 100; i <= 500; i++)
    {
        int temp = i;
        int rev = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }
        // printf("%d",rev);
        if (i == rev)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}