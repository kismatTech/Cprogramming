// WAP TO PRINT COUNT AND SUM OF GIVEN DIGIT
// 123
#include <stdio.h>
int main()
{
int n;
int count =0,sum=0;
printf("Enter a number ");
scanf("%d",&n);

while(n!=0){
    int r=n%10;
    count ++;
    sum=sum+r;
    n=n/10;
}
printf("SUM is %d\n",sum);
printf("Count is %d",count);
return 0;
}