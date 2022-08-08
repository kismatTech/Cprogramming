#include <stdio.h>
int paln(int x);

int main()
{
    // int n=123;
    paln(153);
    // printf("%d",paln(n));

    return 0;
}

int paln(int x)
{   
    int r;
    static int rev = 0;
    if(x!=0){
    r = x % 10;
    rev = rev * 10 + r;
    x = x % 10;
        // printf("%d",rev);
    paln(x);
    }
    else{
        printf("%d",rev);
        return rev;
    }
    
}