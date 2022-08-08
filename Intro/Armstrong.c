#include <stdio.h>
int main()
{
    // WAP TO PRINT ARMSTRONG NUMBERS FROM 100 TO 500
    int rev, r, temp;
    for (int i = 100; i <= 500; i++)
    {
        temp = i;
        rev = 0;
        while (i != 0)
        {
            r = i % 10;
            rev = i + r * r * r;
            i = i / 10;
        }
        if (i == rev)
        {
            printf(" Armstrong Number: %d\n", i);
        }
    }

    return 0;
}