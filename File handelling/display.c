#include <stdio.h>
int main()
{
    FILE *p;
    char name[50];
    p = fopen("hello.txt", "r"); // File read garxa 
    fscanf(p, "%s", name);  // fscan = file ma vako kura lai scan garni raixa yr
    printf("Your stored text is %s",name); // file ma vako print vayo
    return 0;
}