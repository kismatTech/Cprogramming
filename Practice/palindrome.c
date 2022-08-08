#include <stdio.h>
int main()
{
    // printf("Enter a number ");
    // scanf("%d",&n);
    int r;
    for (int i = 100; i <= 500; i++)
    {
        int temp = i;
        int rev = 0;
        while (temp != 0)
        {
            r = temp % 10;
            rev = rev * 10 + r;
            temp = temp / 10;}
            if (i == rev)
            {
                printf("Palindrome %d\n", i);
            }
                
    }
        return 0;
}