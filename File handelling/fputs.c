#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt", "r+");
    fputs("its me Kismat", ptr); // Read character form a file

    return 0;
}