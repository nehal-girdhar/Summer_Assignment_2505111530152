#include<stdio.h>
int main(){
    int x,n,i,result=1;

    printf("Enter base (x):");
    scanf("%d",&x);

    printf("Enter power (n):");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        result=result*x;
    }
    printf("%d raised to the power %d=%d",x,n,result);
    return 0;
}