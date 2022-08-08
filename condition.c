
// WAP to enter details of studets and display details using structure

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct ipo
{
    char name[50];
    char city[50];
    int age;
};

int main()
{
    int n;
    printf("Enter your age");
    scanf("%d", &n);
    struct ipo m;
    if (n > 18 && n <= 25)
    {
        // printf("You are elgible to enroll our air hostess");

            printf("Enter Details: Name, City, Age\n");
            scanf("%s", &m.name);
            scanf("%s", &m.city);
            scanf("%d", &m.age);
        
    }
    else
    {
        printf("You are not elligible to submit data mf");
        // break;
    }
if (n> 18 && n<=25){

        printf("Is this correct? \n");
        printf("Name %s\nROLL NO: %d\nCity: %d\n", m.name, m.city, m.age);

}
else
    return 0;
}