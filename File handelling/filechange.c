#include <stdio.h>
int main()
{
    FILE *p;
    char name[50];
    p = fopen("hello.txt", "w+"); // File read garxa 
    fprintf(p, "%s", &name);  // fprintf = fputs = memory bata seondary ma store garni
    fscanf(p, "%s", name);  // fscanf= fgets = secondary ma vayako lai  memory ma launi
    printf("Your stored text is %s",name); // file ma vako print vayo
    return 0;
}