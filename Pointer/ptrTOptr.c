// POINTER TO POINTER
#include <stdio.h>
int main()
{
    int a = 20;
    int *i = &a; // This is a pointer which store address of a
    int **j = &i; // This is a pointer which store address of pointer *i.
    // Called pointer to pointer
    printf("The value of a is %d", **j);

    return 0;
}