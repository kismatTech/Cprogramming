#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    { // Row lai 5 choti print hunxa
        for (int j = 1; j <= i; j++)
        { // ROW ma 5 dekhi I samma print hunxa
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
// OUTPUT
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 