#include <stdio.h>
int main()
{
FILE *ptr;
ptr = fopen("hello.txt","r");
char s = fgetc(ptr);//Read character form a file
printf("%c",s);
return 0;
}