#include <stdio.h>
int intrest(int x, int y, int z)
{
    int result = (x * y * z) / 100;
    return result;
}
int main()
{
    int p, t, r;
    printf("Enter Principle, Time, Rate");
    scanf("%d%d%d", &p, &t, &r);
    printf("The intrest is %d", intrest(p, t, r));
    return 0;
}