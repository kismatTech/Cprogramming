#include <stdio.h>
int main()
{
    FILE *p;
    char name[] = "KismatDuwadi";
    p = fopen("hello.txt", "r"); // File write garxa 
    fprintf(p, "%s\t", name);  // Create vako file ma name gayarw save hunxa

    return 0;
}