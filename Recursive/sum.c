//SUM OF N NATURAL NUMBERS USING RECURSION

#include <stdio.h>
int Sum(int x);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    Sum(n);

return 0;
}

int Sum(int n){
    // printf("%d\n",x);
    static int sum=0;
    if(n>0){
        sum=sum+n;
    Sum(n-1);
    }
    else{
    printf("%d\n",sum);}
    return 0;

}
