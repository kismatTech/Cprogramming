// WAP INPUT 3*3 MATRIX AND TO PRINT SUM THE OF THAT TWO MATRIX ....

#include <stdio.h>
int main()
{
    int n,t;
    printf("Enter row for matrix:");
    scanf("%d", &n);
    printf("Enter colum for matrix:");
    scanf("%d", &t);
    int a[n][t];
    printf("Enter numbers for %d X %d matrix1:\n",n,t);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int d[n][t];
    printf("Enter numbers for %d X %d matrix2:\n",n,t);
    for (int b = 0; b < n; b++)
    {
        for (int c = 0; c < t; c++)
        {
            scanf("%d", &d[b][c]);
        }
    }

    printf("The sum of %d X %d matrix:\n",n,t);
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < t; l++)
        {
            printf("%d ", a[k][l]+d[k][l]);
        }
        printf("\n");
    }

    return 0;
}