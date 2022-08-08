#include <stdio.h>
int main()
{
    int n;
    int max = 0;
    printf("Enter a number");
    scanf("%d", &n);
    int a[n];
    int min = a[0];
    
    printf("SUBMIT %d Numbers\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int p = 0; p < n; p++)
    {
        if (max < a[p])
        {
            max = a[p];
        }
    }
    printf("%d is greatest among %d numbers.\n", max, n);
    // int min = a[0];
    for (int k = 0; k < n; k++)
    {
        if (min > a[k])
        {
            min = a[k];
        }
    }
    printf("%d is smallest among %d numbers.", min, n);
}