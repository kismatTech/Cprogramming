#include <stdio.h>
int main(){
    int n, r, sum=0;
    printf("Enter number");
    scanf("%d",&n);

    int temp = n;
    while(n!=0){
       r = n%10;
       sum = sum+ r*r*r; 
       n = n /10;
    }
    if(temp==sum){
        printf("Armstrong number");
    }
    else
    printf("Not Armstrong");
    return 0;
}