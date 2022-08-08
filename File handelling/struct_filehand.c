/*
SYNTAX for record Input/output Function
fwrite ==>
    fwrite(&ptr, size_of_array_or_stru, number_of_stru_or_array,fptr);

fread ==>
    fread(&ptr, size_of_array_or_stru, number_of_stru_or_array,fptr);

where,
ptr = address of array or structure



*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *p;
    int a[10];
    int b[10];
    p = fopen("file.txt", "w+b");
    if (p == NULL)
    {
        printf("File cannt be opened");
        exit(1);
    }

    printf("Enter 5 numbers ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    printf("Writing data to a file...\n");
    fwrite(&a, sizeof(a), 1, p);

    printf("\n");
    rewind(p);
    printf("Reading data from a file...\n");
    fread(&b, sizeof(b), 1, p);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", b[i]);
    }

    fclose(p);

    return 0;
}