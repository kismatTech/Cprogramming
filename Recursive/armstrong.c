#include <stdio.h>
int split(int num);
int isarm(int num);

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", num);
    if (isarm(num) == 1)
    {
        printf("The given number is armstrong");
    }
    else
    {
        printf("The given number is not armstrong");
    }
    return 0;
}

int isarm(int num)
{
    if (split(num) == num)
    {
        return 1;
    }
    return 0;
}

int split(int num)
{
    int r, arm = 0;
    if (num != 0)
    {
        r = num % 10;
        arm = arm + r * r * r;
        split(num / 10);
    }
    printf("Arm %d",arm);
    else
        return arm;
}