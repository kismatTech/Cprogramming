
// WAP to enter details of studets and display details using structure

#include <stdio.h>
struct ipo
{
    char name;
    int roll;
    int age;
};

int main()
{
    struct ipo m;

    printf("Enter your Name\n");
    scanf("%s", &m.name);
    printf("Enter your Roll\n");
    scanf("%d", &m.roll);
    printf("Enter your Age\n");
    scanf("%d", &m.age);

    printf("Name %c\nROLL NO: %d\nAge: %d\n", m.name, m.roll, m.age);
    return 0;
}