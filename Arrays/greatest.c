// WAP TO FIND GREATEST ELEMENT IN M*N MATRIX
#include <stdio.h>

int main()
{
    int a[3][3];

    printf("Enter numbers for matrix 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int max = 0;
    printf("Sum of matrix is:\n");
    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 3; n++)
        {
            if (max < a[m][n])
            {
                max = a[m][n];
            }
        }
    }
    printf("%d is greatest", max);

    return 0;
}