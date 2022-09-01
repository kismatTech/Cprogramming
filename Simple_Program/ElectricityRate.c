#include <stdio.h>
int main()
{
    int n, rate;
    printf("Enter your unit", n);
    scanf("%d", &n);
    if(n==0){
        printf("Your Price of Null unit is Rs50");
    }
    else
    if (n <= 100)
    {
        rate = 50 + (n * 40);
        printf("Your Price of %d unit is Rs%d", n, rate);
    }
    else if (n <= 200 || n > 100)
    {
        rate = 50 + (100 * 40) + (n-100) * 50;
        printf("Your Price of %d unit is Rs%d", n, rate);
    }
    else{
        rate = 50 + (100 * 40) + (200*50)+ (n-300) * 60;
        printf("Your Price of %d unit is Rs%d", n, rate);
    }

    return 0;
}