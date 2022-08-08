#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt", "r");
    char s[20];
    fgets(s, 10, ptr); // Read character form a file
    printf("%s", s);
    return 0;
}