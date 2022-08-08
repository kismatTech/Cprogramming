#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    { // Loop lai 5 chalaunu hunxa
        for (int j = 5; j >= i; j--)
        { // ROW ma I lai J choti print hunxa
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
// OUTPUT
// 1 1 1 1 1 
// 2 2 2 2 
// 3 3 3 
// 4 4 
// 5