// WAP TO TO FIND AVERAGE AND SUM 1 TO N

#include <stdio.h>
int main()
{
int n;
printf("Enter an number: ");
scanf("%d", &n);
int sum=0;
for (int i= 1 ; i<=n; i++){
    sum =sum + i;
}
float avg = sum/n;
printf("Sum is %d\nAvg is %.2f",sum, avg);

return 0;
}