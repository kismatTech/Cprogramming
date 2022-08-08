// WAP INPUT 3*3 MATRIX AND TO PRINT SUM THE OF THAT TWO MATRIX ....

#include <stdio.h>
int main()
{

    int a[2][2];
    printf("Enter numbers matrix1:\n");
    for (int i = 0; i < 2; i++)//Column
    {
        for (int j = 0; j < 2; j++) //ROW
        {
            scanf("%d", &a[i][j]);
        }
    }
    // int d[2][2];
    // printf("Enter numbers for matrix2:\n");
    // for (int b = 0; b < 2; b++)
    // {
    //     for (int c = 0; c < 2; c++)
    //     {
    //         scanf("%d", &d[b][c]);
    //     }
    // }

    printf("The sum of matrix:\n");
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 2; l++)
        {
            // printf("%d ", a[k][l]);
            a[k][l] = a[l][k];

        }


        printf("\n");
    }

    return 0;
}