// WAP TO find transpose OF MATRIX
#include <stdio.h>

int main()
{
    int a[3][3];
    int sum = 0;
    printf("Enter numbers for matrix 1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int b[3][3];
    printf("Sum of matrix is:\n");
    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 3; n++)
        {
            b[m][n] = a[n][m];
            printf("%d", b[m][n]);
        }
        printf("\n");
    }

    return 0;
}