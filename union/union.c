#include <stdio.h>
union students
{
    char name;
    int age;
    int ph;
    
};
int main()
{
    union students s; // Union le chai last ma jun initilize vayo tei store garxa
    printf("Enter Name\n");
    scanf("%s", &s.name);
    printf("Enter age\n");
    scanf("%d", &s.age);
    printf("Enter Phone no\n");
    scanf("%d", &s.ph);

    printf("\n");
    // Last ma jun inizilize vayo tei matra store hunxa tei execute hunxa
    printf("Stored Data\n");
    printf("Name:%s\nAge:%d\nPhone no:%d\n",s.name,s.age,s.ph);

    return 0;
}