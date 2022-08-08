#include <stdio.h>
int swap(int *x, int *y, int c, int d);
int main()
{
    int a, b, c, d;
    printf("Enter the numbers:");
    scanf("%d%d", &a, &b);
    printf("Enter the number you want to swap in a,b:");
    scanf("%d%d", &c, &d);
    printf("Before Swap %d\t%d\n", a, b);
    swap(&a, &b, c, d);
    printf("After Swap %d\t%d\n", a, b);
    return 0;
}
int swap(int *x, int *y, int c, int d)
{
    *x = c;
    *y = d;
    return *x, *y;
}