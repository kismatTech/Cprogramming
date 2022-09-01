// WAP TO CREATE CALCULATOR PROGRAM

#include <stdio.h>
int main()
{
    int a, b;
    char n;
    printf("Enter your operation");
    scanf("%c", &n);
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    switch (n)
    {
    case '*':
        printf("The product of %d X %d is %d", a, b, a * b);
        break;
    case '+':
        printf("The Sum of %d + %d is %d", a, b, a + b);
        break;
    case '-':
        printf("The substraction of %d - %d is %d", a, b, a - b);
        break;
    case '/':
        printf("The Division of %d / %d is %d", a, b, a / b);
        break;

    default:
        break;
    }

    return 0;
}