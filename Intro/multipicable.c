#include <stdio.h>
int main()
{
    int i, fac, t, j;
    printf("Enter a number");
    scanf("%d", &fac);
    for (j = 1; j <= fac; j++)
    {
        for (i = 1; i <= 10; i++)
        {
            t = j * i;
            printf("%d X %d: %d\n", j, i, t);
        }
        printf("\n");
    }
    return 0;
}