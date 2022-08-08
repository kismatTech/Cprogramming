#include <stdio.h>
int main()
{
    char a[20];
    FILE *ptr;
    ptr = fopen("hello.txt", "r");
    fscanf(ptr, "%s", a);
    printf("This is your stored information: %s",a);
    fclose(ptr);
    return 0;
}