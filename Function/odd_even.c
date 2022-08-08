#include <stdio.h>
void odd_even(int x);
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    odd_even(a);
    return 0;
}
void odd_even(int x)
{
    if (x % 2 == 0)
    {
        printf("Even Number");
    }
    else printf("Odd Number");
}