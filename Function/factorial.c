#include <stdio.h>

int fact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int call = fact(n);
    printf("Factorial is %d", call);

    return 0;
}