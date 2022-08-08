#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    { // Row lai 5 choti print hunxa
        for (int j = 1; j <= 3; j++)
        { // Row 1 2 3 print hunxa
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT
// 1 2 3 
// 1 2 3 
// 1 2 3 
// 1 2 3 
// 1 2 3 