#include <stdio.h>
int arm(int x);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int a= arm(n);
    printf("%d is arm number",a);
    // check(n);

    return 0;
}
int check(int n){

}
int arm(int n)
{
    // const check=n;
    int j;
    // int *j = &n;
    static int r, temp = 0;
    if (n != 0)
    {
        r = n % 10;
        temp = temp + r * r * r;
        n = n / 10;
        arm(n);
    }
    else{
        return temp;
    }
    // printf("Temp cube garesi ko %d\n", temp);
    // printf("Check N ko value %d\n", check);
    // if (check == temp)
    // {
    //     printf("Armstrong %d\n", check);
    //     // return 1;
    // }
    // else
    // {
    //     printf("Not Armstrong\n");
    // }
    return 0;
}
