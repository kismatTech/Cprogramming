#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    { // Row lai 3 choti print hunxa
        for (int j = 1; j <= 5; j++)
        { // Row * * * * * print hunxa
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * *