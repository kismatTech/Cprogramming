
// WAP to enter details of studets and display details using structure

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct ipo
{
    char name[50];
    int roll;
    int age;
};

int main()
{

    struct ipo m[3];

    for (int i = 0; i < 3; i++)
    {
        printf(" Enter Details of Stdents %d: Name, Roll no, Age\n", i + 1);
        scanf("%s", &m[i].name);
        scanf("%d", &m[i].roll);
        scanf("%d", &m[i].age);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Details of student %d\n", i + 1);
        printf("Name %s\nROLL NO: %d\nAge: %d\n", m[i].name, m[i].roll, m[i].age);
    }
    return 0;
}