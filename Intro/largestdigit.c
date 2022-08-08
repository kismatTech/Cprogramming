#include <stdio.h>
int main(){
    int a[3];
    int max=0;
    printf("Enter three numbers");
    for (int i=0; i<3; i++){   // i=1 max=0, >1, 1>3, 1>4
        scanf("%d",&a[i]);
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("Greatest number is %d",max);
    return 0;
}