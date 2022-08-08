// WAP CREATE STRUCTURE NAMED STUDENT THAT HAS NAME, ROLL, Address, DOB(DATE, MONTHS, YEAR), as members. use this structure
// to records of 100 students. write array of structure to a file and then read its content to display on the screen.
// DIsplay the information on the screen
// Display those students whose address is baharatpur

#include <stdio.h>
#include <stdlib.h>
struct date
{
    int day;
    int months;
    int year;
};

struct imp
{
    char name[50];
    int roll;
    char address[50];
    struct date dob;
};

int main()
{
    FILE *p;
    struct imp s[3], t[3];
    p = fopen("random.txt", "w+b");
    if (p == NULL)
    {
        printf("File cannot be created");
        exit(1);
    }
    printf("Enter students informationn");
    for (int i = 0; i < 3; i++)
    {
        printf("ENter Name\n");
        scanf("%c", s[i].name);
        printf("ENter Roll no\n");
        scanf("%d", &s[i].roll);
        printf("ENter Address\n");
        scanf("%c", s[i].address);
        printf("ENter DOB (DATE, MONTHS, YEAR)\n");
        scanf("%d%d%d", &s[i].dob.date, &s[i].dob.months, &s[i].dob.year);
    }

    printf("Storing/Writing Data....\n");
    fwrite(&a, sizeof(a), 3, p);

    printf("\n");
    +printf("Reading data from file\n");
    rewind(p);
    fread(&t, sizeof(t), 3, p);
    printf("\n");
    printf("Displaying data from file");
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\n, Roll: %d, Address: %s, DOB: %d %d %d", s[t].name, s[t].roll, s[t].address, s[t].dob.date, s[t].dob.months, s[t].dob.year);
    }

    return 0;
}