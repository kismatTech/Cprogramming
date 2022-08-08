#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct employee
{
    char name[20];
    char addresh[20];
    int pnumber;
    int salary;
    char department[20];
};

int main()
{
    FILE *fptr;
    struct employee e[2], t[2];
    fptr = fopen("employee.txt", "w+b");
    for (int i = 0; i < 2; i++)
    {
        printf("enter a name :\n");
        scanf("%s", e[i].name);
        printf("enter a addresh :\n");
        scanf("%s", e[i].addresh);
        printf("enter a phone number :\n");
        scanf("%d", &e[i].pnumber);
        printf("enter a salary :\n");
        scanf("%d", &e[i].salary);
        printf("enter a department :\n");
        scanf("%s", e[i].department);
    }
    fwrite(&e, sizeof(e), 2, fptr);
    rewind(fptr);
    fread(&t, sizeof(t), 2, fptr);
    printf("Displaying the information of Employee");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(t[i].department, "Marketing") == 0)
        {
            printf("name is %s\n", t[i].name);
            printf("addresh is %s\n", t[i].addresh);
            printf("pnumber is %d\n", t[i].pnumber);
            printf("salary is %d\n", t[i].salary);
            printf("department is %s\n", t[i].department);
        }
    }
}
