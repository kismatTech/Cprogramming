// Call By Reference-- Pointer le Address pass garexa
// so main Value Change vayo
#include <stdio.h>
void call(int *a, int *b);
int main()
{
    int a = 10;
    int b = 20;

    printf("Before Swap %d\t%d\n", a, b); 
    call(&a, &b);
    printf("After swap %d\t%d\n", a, b); 
    // Function le value change handiyo My lord.
    return 0;
}
void call(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
}