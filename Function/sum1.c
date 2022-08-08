#include <stdio.h>
void sum(int x, int y);
int main()
{
    int a, b;
    printf("Enter two number");
    scanf("%d%d", &a, &b);
    sum(a, b);
    return 0;
}

void sum(int x, int y)
{
    int add = x + y;
    printf("The sus is %d",add);
    
}