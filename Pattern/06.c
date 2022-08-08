#include <stdio.h>
int main()
{

    for (int i = 1; i <= 3; i++)
    { // Row lai 3 choti print hunxa
        for (int j = 1; j <= 5; j++)
        { // Row 1 2 3 4 5 print hunxa
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5