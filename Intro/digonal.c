#include <stdio.h>
int main()
{
    int a[3][3];

    printf("Enter the numbers for matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            if (l = k)
            {
                sum = sum + a[k][l];
            }
        }
    }
    printf("Sum of diagonal is %d",sum);

    return 0;
}