#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt", "w");
    fputc('X', ptr); // put character to a file
    
    return 0;
} 