#include <stdio.h>
int main()
{
int a[3][3];

printf("Enter a number for matrix:\n");

for(int i =0; i<3; i++){
    for(int j=0; j<3; j++){
    scanf("%d",&a[i][j]);
    }
}
printf("Transpose of a given matrix is\n");
    for(int k=0; k<3; k++){
        for(int l=0; l<3; l++){
            // printf("%d ",a[k][l]);
            a[k][l]=a[l][k];
            printf("%d ",a[k][l]);
        }
        printf("\n");
    }
return 0;
}