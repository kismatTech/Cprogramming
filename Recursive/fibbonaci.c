#include <stdio.h>
int fibo(int n);
int main()
{
    int a = 0, b = 1, n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d\n%d\n", a, b);
    fibo(n - 2);
    return 0;
}
int fibo(int n)
{
    static int a = 0, b = 1, c;
    if (n > 0)
    {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
        fibo(n - 1);
    }
    return 0;
}