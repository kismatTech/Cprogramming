#include <stdio.h>
void prime(int n);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    prime(n);
    return 0;
}
void prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("Prime Number");
    }
    else
        printf("Not Prime");
}