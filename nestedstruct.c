#include <stdio.h>

struct nested
{
    int ph;
    char name[40];
};

struct nested2
{
    int id;
    struct nested k;
};

int main()
{

    struct nested2 p;
    printf("Enter Your Id");
    scanf("%d", &p.id);
    printf("Enter Your Phone no");
    scanf("%s", &p.k.ph);
    printf("Enter Your Name");
    scanf("%s", &p.k.name);
    printf("\n");
    printf("Name: %s Phone no: %d ID: %d",p.k.name,p.k.ph,p.id);
    return 0;
}