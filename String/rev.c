// WAP TO REVERSE OF A STRING
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10];
    printf("Enter your name: ");
    gets(a);            // gets function is used to read string input
    // scanf("%s", a);
    char temp[10];
    char rev[10];
    strcpy(temp, a);            // strcpy = string (yesma, yo bata) copy garxa
    strcpy(rev, strrev(a));     // strrev = string lai reverse garxa

    puts(temp);
    puts(a);                     // puts function is used to display output
    if (temp == a)
    {
        printf("The given string is palindrome");
    }
    else
    {
        printf("The given string is not palindrome");
    }
    return 0;
}