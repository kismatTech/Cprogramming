
// WAP to enter details of studets and display details using structure
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct ipo
{
    char name[50];
    int roll;
    int age;
    char address[50];
};

int main()
{

    struct ipo m[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Details of Stdents %d: Name, Roll no, Age\n", i + 1);
        scanf("%s", &m[i].name);
        scanf("%d", &m[i].roll);
        scanf("%d", &m[i].age);
        scanf("%s", &m[i].address);
    }
    char a[] = {"bharatpur"};

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(m[i].address, a) == 0)
        {
            printf("Student%d\n", i + 1);
            printf("Name %s\nROLL NO: %d\nAge: %d\nAddress %s\n", m[i].name, m[i].roll, m[i].age, m[i].address);
        }
        printf("\n");
    }
    return 0;
}