
#include <stdio.h>
int main()
{
    char a[100];
    printf("Enter your name: ");
    scanf("%s",a);
    gets(a); 
    printf("%s\n",a);   
    int count =0;
    while(a[count]!='\0')  {
        count++;
    }
    printf("Your length of string is %d",count);

    // puts(a);
    return 0;
}