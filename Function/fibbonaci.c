#include <stdio.h>

int fib(int x, int a, int b)
{

    if (x > 0)
    {
        int sum = a + b;
        printf("%d\n", sum);
        a = b;
        b = sum;
        fib(x - 1, a, b);
    }
}

int main()
{
    int a = 0, b = 1;
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    printf("%d\n%d\n", a, b);
    fib(n - 2, a, b);
    return 0;
}