#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date
{
    int day;
    int month;
    int year;
};
struct student
{
    char name[40];
    int roll;
    char address[30];
    struct date dob;
};

int main()
{
    FILE *ptr;
    struct student s[10], t[10];
    ptr = fopen("hello.txt", "w+b");
    if (ptr == NULL)
    {
        printf("File cannt be created");
        exit(1);
    }
    printf("Enter the information of 10 students:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter your name:\n");
        scanf("%s", s[i].name);
        printf("Enter your address:\n");
        scanf("%s", s[i].address);
        printf("Enter your Roll no:\n");
        scanf("%d", &s[i].roll);
        printf("Enter your DOB(day, month, year):\n");
        scanf("%d%d%d", &s[i].dob.day, &s[i].dob.month, &s[i].dob.year);
    }

    printf("Writing data to a file....\n");
    fwrite(&s, sizeof(s), 3, ptr);  // fwrite le chai memory bata sec space ma rakhxa

    rewind(ptr); //move pointer to the beginer of the file

    printf("\n");
    printf("Readinig data from a file..  \n");
    fread(&t, sizeof(t), 3, ptr);  // fread le chai sec space bata memory ma lerw aauxa t= naya array ma store hunxa

    printf("Displaying information of students: \n");
    printf("\n");

    for (int j = 0; j < 3; j++)
    {
        if (strcmp(t[j].address, "Bharatpur") == 0)
        {
    printf("Name:%s\t Address: %s\t Roll no: %d\tDateOfBirth: %d %d %d\n",t[j].name, t[j].address, t[j].roll, t[j].dob.day, t[j].dob.month, t[j].dob.year);

        }
    }

fclose(ptr);
return 0;
}
