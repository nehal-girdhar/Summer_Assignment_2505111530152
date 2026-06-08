#include<stdio.h>
int main(){
    int n,d,temp,prod=1;

    printf("enter the number");
    scanf("%d",&n);
    temp=n;

    while(temp>0){
        d=temp%10;
        prod=prod*d;
        temp=temp/10;
    }

    printf("the product of the digits is %d",prod);
    
    return 0;
}