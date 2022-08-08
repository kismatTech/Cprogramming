#include <stdio.h>

int max(int a, int b); //DECLARATION OF FUNCTION

int main()
{
    int a=5;
    int b=10;
    int ret;
    ret = max(a, b); // CALLING FUNCTION
    return 0;

}
int max(int a, int b){
    // int results;
    if(a>b){
        printf("a is greatest");
    }
    else{

        printf("b is greatest");
    }

// return results;
}   