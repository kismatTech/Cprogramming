
// WAP to enter details of studets and display details using structure

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct ipo
{
    char name[50];
    char city[50];
    int age;
};

int main()
{
    int n[100];
    struct ipo m[100];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter your age: ");
        scanf("%d", &n[i]);
        if (n[i] > 18 && n[i] <= 25)
        {
            // printf("You are elgible to enroll our air hostess");

            printf("Enter your Name:");
            scanf("%s", &m[i].name);
            printf("Enter your city:");
            scanf("%s", &m[i].city);
        }
        else
        {
            printf("You are not elligible to submit data mf\n");
        }
        printf("\n");
    }
    printf("\n");
    printf("Details of students whose age is 20 & City is Nawalpur\n");
    for (int i = 0; i < 3; i++)
    {
        int val = strcmp(m[i].city, "Nawalpur");
        if (n[i] == 20 && val == 0)
        {
            // printf("Is this correct? \n");
            printf("Name %s\nCITY: %s\nAge: %d\n", m[i].name, m[i].city, n[i]);
        }
        else
            break;
    }
    return 0;
}