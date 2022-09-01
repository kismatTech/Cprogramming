#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int sum = 0;
    do
    {
        sum = sum + 1;
    } while (0 <= n);
printf("%d is sum",sum);
return 0;
    
}