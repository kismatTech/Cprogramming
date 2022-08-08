#include <stdio.h>
int great(int x);
int main() {
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    great(n);
    return 0;
}
int great(int x){
    int temp=0,r,rev;;
    while(x!=0){
        r = x%10;
        if(temp<r){
            temp=r;
            // count++;
        }
        x = x/10;
    }
    printf("%d is greatest",temp);
    return 0;
}