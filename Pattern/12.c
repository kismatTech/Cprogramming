#include <stdio.h>
int main()
{

    for (int i = 5; i >= 1; i--)
    { // Row lai 5 choti print hunxa
        for (int j = 1; j <= i; j++)
        { // ROW ma 5 chai 5 ani (5-1) choti print hudai janxa
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
// OUTPUT
// 5 5 5 5 5 
// 4 4 4 4 
// 3 3 3 
// 2 2 
// 1 