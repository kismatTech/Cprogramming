// WAP TO SUM DIAGONAL OF MATRIX
#include <stdio.h>

int main() {
    int a[3][3];
    int sum=0;
    printf("Enter numbers for matrix 1:\n");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Sum of matrix is:\n");
    for (int m=0; m<3; m++){
        for (int n=0; n<3; n++){
            if(m==n){
            sum= sum + a[n][m];}
        }
    }
        printf("%d",sum);

    return 0;
}