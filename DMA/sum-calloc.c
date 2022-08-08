// Program to calculate the sum of n numbers entered by the user

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *ptr, sum = 0;
    printf("Enter the number of Elements");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    printf("Enter elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        sum = sum + *(ptr + i);
    }

    printf("Sum is %d",sum);
    free(ptr);

    return 0;
}