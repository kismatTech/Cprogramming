#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    { // Row lai 5 choti print hunxa
        for (int j = 5; j >= i; j--)
        { // ROW ma 5 dekhi I samma print hunxa
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT
// 5 4 3 2 1 
// 5 4 3 2 
// 5 4 3 
// 5 4 
// 5 