#include <stdio.h>
int main()
{
    //WAP TO PRINT PALINDROME NUMBERS FROM 100 TO 500
    int rev, r, temp;
    for (int i = 100; i <= 500; i++)
    {
        temp = i;
        rev = 0;
        while (temp != 0)
        {
            r = temp % 10;
            rev = rev * 10 + r;
            temp = temp / 10;
        }
        if (i == rev)
        {
            printf("%d ", i);
        }
    }

    return 0;
}