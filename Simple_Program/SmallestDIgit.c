#include <stdio.h>
int main()
{
    int n, r;
    printf("Enter number");
    scanf("%d", &n);
    int min = 0;
    while (n != 0)
    {
        r = n % 10;
        if (min < n)
        {
            min = r;
        }
        n = n / 10;
    }
    printf("%d is greatest", min);

    return 0;
}