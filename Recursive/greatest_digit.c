// TO FIND Greatest digit using recursion
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
    static int temp=0,r,rev;
    if(x!=0){
        r = x%10;
        if(temp<r){
            temp=r;
            // count++;
        }
        x = x/10;
        return great(x);
    }
 
    printf("%d is greatest\n",temp);
    return 0;
}
