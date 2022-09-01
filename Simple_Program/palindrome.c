#include <stdio.h>
int main()
{
    int n, rev;
    int sum = 0;
    printf("Enter a number");
    scanf("%d", &n);
    int temp = n;

    while (n != 0)
    {
        rev = n % 10;
        sum = sum*10 + rev;
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("The given number is palindrome");
    }
    else
        printf("The given number is not palindrome");
    return 0;
}