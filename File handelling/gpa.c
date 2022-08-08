#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[30];
    char add[50];
    char fac[20];
    char pro[20];
    float gpa;
};

void main()
{
    struct student s[2];
    FILE *fp;

    if ((fp = fopen("RESULT.txt", "w+")) == NULL)
    {
        printf("\nRESULT.dat cannot be created.");
        exit(1);
    }
    printf("Enter the details of two students:");
    for (int i = 0; i < 2; i++)
    {
        printf("\nName:");
        scanf("%s", s[i].name);

        printf("\nAdddress:");
        scanf("%s", s[i].add);

        printf("\nFaculty:");
        scanf("%s", s[i].fac);

        printf("\nProgram:");
        scanf("%s", s[i].pro);

        printf("\nGPA:");
        scanf("%f", &s[i].gpa);

        fwrite(&s, sizeof(struct student), 2, fp);
    }
     rewind(fp);

    printf("\nDdetails of students:\n");
    printf("\nName\tAddress\tFaculty\tProgram\tGPA\n");
    for (int i = 0; i < 2; i++)
    {
    int val = strcmp(s[i].fac, "Engineering");
        fread(&s, sizeof(struct student), 2, fp);
        if (val == 0 && s[i].gpa > 3.5)
        {
            printf("\n%s\t%s\t%s\t%f", s[i].name, s[i].add, s[i].fac, s[i].pro, s[i].gpa);
        }
    }
}