#include <stdio.h>
int main(){
    
for(int i=100; i<500; i++){
    int temp = i;
    int r, sum =0;
    while(temp!=0){
       r = temp%10;
       sum = sum+ r*r*r; 
       temp = temp /10;
    }
    if(i==sum){
        printf("%d\t",i);
    }
}
    return 0;
}