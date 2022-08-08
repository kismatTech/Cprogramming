#include <stdio.h>
int sum(int x, int y);
int main()
{
    int a, b;
    printf("Enter two number");
    scanf("%d%d", &a, &b);
    printf("The sus is %d", sum(a, b));
    return 0;
}

int sum(int x, int y)
{
    int add = x + y;
    return add;
}