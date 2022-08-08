#include <stdio.h>
int fact(int x);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    fact(n);

return 0;
}

int fact(int n){
    // printf("%d\n",x);
    static int temp=1;
    if(n>0){
        temp=temp*n;
        fact(n-1);
    }
    else{
    printf("%d\n",temp);}
    return 0;

}
