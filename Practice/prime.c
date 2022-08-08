#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
        // printf("%d\n",count);

    if (count == 2)
    {
        printf("%d is prime number\n",n);
    }
    else{
        printf("%d is not prime number\n",n);

    }
    return 0;
}