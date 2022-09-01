#include <stdio.h>
int main(){
    int a=0, b=1;
    int n, sum;
    printf("Enter a number");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for (int i = 2; i < n; i++)
    {
        sum = a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    return 0;
    
}