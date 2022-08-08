#include <stdio.h>
int main()
{
    char n;
    int a, b;

    printf("Enter a string *, +, -, / : ");
    scanf("%c", &n);
    printf("Enter two number a and b: ");
    scanf("%d%d", &a, &b);
    switch (n)
    {
    case '*':
        printf("%d", a * b);
        break;
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '/':
        printf("%d", a / b);
        break;

    default:
        break;
    }

    return 0;
}