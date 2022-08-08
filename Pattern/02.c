#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    { // 5 ota loop chalxa
        for (int j = 1; j <= 5; j++)
        { // i= something lai 5 choti print hunxa
            printf("%d ", i);
        }
        printf("\n");   
    }
    return 0;
}

//OUTPUT
// 1 1 1 1 1 
// 2 2 2 2 2 
// 3 3 3 3 3 
// 4 4 4 4 4 
// 5 5 5 5 5