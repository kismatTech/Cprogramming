#include <stdio.h>
int fibo(int n);
int main()
{
    int n,r,rev;
    printf("Enter a number");
    scanf("%d",&n);
    int temp=0;
    while(n!=0){
        r = n%10;
        if(temp<r){
            temp=r;
        }
        n = n/10;
        
    }
    printf("%d is greatest",temp);
    return 0;
}