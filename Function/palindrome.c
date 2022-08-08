#include <stdio.h>

void pald(int x)
{
    int rev=0;
    int r;
    int temp = x;
    while (x != 0)
    {
        r = x % 10;
        rev = rev * 10 + r;
        x = x / 10;
    }
    printf("Temp is %d\n",temp);
    printf("Rev is %d\n",rev);
    if (temp == rev)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    pald(n);

    return 0;
}