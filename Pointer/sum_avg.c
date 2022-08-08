#include <stdio.h>
void sumavg(int x, int y, int *sum, float *avg)
{
    *sum = x + y;
    *avg = (float)*sum / 2;
}
int main()
{
    int a, b, sum;
    float avg;
    printf("Enter Two numbers");
    scanf("%d%d", &a, &b);
    sumavg(a, b, &sum, &avg);  //Call by reference because WE ARE PASSING ADDRESS.
    printf("Sum is %d", sum);
    printf("Avg is %f", avg);

    return 0;
}