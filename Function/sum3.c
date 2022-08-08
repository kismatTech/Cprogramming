#include <stdio.h>
int sum();
int main()
{
    printf("The sus is %d",sum());
    return 0;
}

int sum()
{
    int a, b;
    printf("Enter two number");
    scanf("%d%d", &a, &b);
    int add = a + b;
    return add;
}