// Online C compiler to run C program online
#include <stdio.h>
int fact(int x);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    printf("%d\n%d\n", a, b);
    fact(n - 2);
    return 0;
}

int fact(int x)
{
    static int f = 0, a = 0, b = 1;
    if (x != 0)
    {
        f = a + b;
        if (f < 10)
        {
            printf("%d\n", f);
            a = b;
            b = f;
            fact(x - 1);
        }
    }
    else
        return 0;
}