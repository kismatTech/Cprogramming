#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    { // loop lai 5 choti chalauxa
        for (int j = 1; j <= i; j++)
        { // ROW ma J dekhi I samma print hunxa
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5