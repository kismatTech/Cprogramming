// Can a function Return two Values?
// No in normal way function cant pass two values but using pointer we can pass two or more new values from function
#include <stdio.h>
void pass(int a, int b, int *sum, int *mul);
int main()
{
    int a, b, sum, mul;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    pass(a, b, &sum, &mul);
    printf("Addition is %d\n", sum);
    printf("Multiplication is %d\n", mul);

    return 0;
}
void pass(int a, int b, int *sum, int *mul)
{
    *sum = a + b;
    *mul = a * b;
}