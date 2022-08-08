// Array Notation - Pointer Notation
// &a[i]---- (a+i)
// a[i]----- *(a+i)

#include <stdio.h>
int main()
{
    int a[5];
    printf("Ente any Numbers");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (a + i));
        printf("%d", *(a + i));
    }
    return 0;
}