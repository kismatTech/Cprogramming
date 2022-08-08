#include <stdio.h>
int main()
{

    for (int i = 5; i >= 1; i--)
    { // 
        for (int j = 5; j >= i; j--)
        { // 5 to 4 vaneko 2 hunxa so 2choti print hunxa
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
// OUTPUT
// 5 
// 4 4 
// 3 3 3 
// 2 2 2 2 
// 1 1 1 1 1