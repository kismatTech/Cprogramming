#include <stdio.h>
#include <string.h>
int main()
{
char string1[] = {"muji"};
char string2[] = {"muji"};

if(strcmp(string1, string2)==0){
    printf("Two word are same");
}
else
    printf("Two word are not same");
return 0;
}