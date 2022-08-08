#include <stdio.h>
int main()
{

    for (int i = 1; i <= 3; i++)
    { // Row lai 3 choti print hunxa
        for (int j = 5; j >= 1; j=j-1)
        { // Row 5 4 3 2 1 print hunxa
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
