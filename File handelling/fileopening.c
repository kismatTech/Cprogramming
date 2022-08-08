
//WAP TO CREATE NEW FILE AND STORE SOMETHING IN IT
#include <stdio.h>
int main()
{
    char a[20];
    printf("Enter the word you want to store in file\n");
    scanf("%s",a);
    
    FILE *ptr;  // Pointer banako
    ptr = fopen("hello.txt", "w"); //"w"= storing file create vayo 
    fprintf(ptr, "%s", a);  // a chai tyo file ma store vayo
    printf("Your file has been successfully stored");
    fclose(ptr);
    return 0;
}